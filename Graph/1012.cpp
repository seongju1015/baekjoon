#include <iostream>
#include <vector>
using namespace std;

// 상, 하, 좌, 우 탐색을 위한 방향 벡터
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int x, int y, vector<vector<int>> &graph, vector<vector<bool>> &visit, int m, int n){
    // 발견한 부분은 visit 처리 
    visit[x][y] = true;

    // 상 하 좌 우 탐색
    for(int i = 0; i < 4; i ++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < m && ny >= 0 && ny < n && graph[nx][ny] == 1 && visit[nx][ny] == false ){
            dfs(nx, ny, graph, visit, m, n);
        }

    }

}

int main(){
    
    // testcase 수, 가로, 세로, 배추 개수 
    int test = 0, m = 0, n = 0, k = 0;
    cin >> test;

    vector<int> results(test);

    // test 케이스만큼 반복 
    for(int i = 0; i < test; i++){

        // 최소의 배추흰지렁이 마리 수
        int num = 0;

        // 가로, 세로, 배추 개수 입력받음
        cin >> m >> n >> k;
        int num_node = m*n;
        vector<vector<int>> graph(m, vector<int>(n, 0));  // 배추밭
        vector<vector<bool>> visit(m, vector<bool>(n, false));  // 방문 여부

        // 그래프 구성
        for(int i = 0; i < k; i++){
            int x, y;

            cin >> x >> y;
            graph[x][y] = 1;
        }
 
        // dfs 실행 
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(graph[i][j] == 1 && visit[i][j] == false){
                    dfs(i, j, graph, visit, m, n);
                    num ++;
                }
            }
        }
    
        // 결과를 벡터에 저장
        results[i] = num;
    }

    // 결과 출력
    for (int i = 0; i < test; i++) {
        cout << results[i] << '\n';
    }

    return 0;
}
