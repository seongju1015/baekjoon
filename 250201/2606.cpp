// 바이러스 - 그래프 탐색 문제. - dfs 사용
#include <iostream>
#include <vector>

using namespace std;

int cnt = 0; // 결과(노드 1번과 같은 그래프 안에 있는 노드 개수)

void dfs(int x, vector<int> graph[], vector<bool>& visited){

    // 처음 노드를 방문한 노드로 침
    visited[x] = true;
    cnt ++;

    // 노드와 인접한 노드 검사
    for(int i = 0; i < graph[x].size(); i++){

        int y = graph[x][i];
        // 인접한 노드들 중에서 방문하지 않은 노드는 재귀함수
        if(!visited[y]){
            dfs(y, graph, visited);
        }
    }

}

int main(){

    // 컴퓨터의 수 입력 받음 - 그래프 및 visited 선언
    int n = 0;
    cin >> n;
    vector<bool> visited(n + 1, false); // 0번은 안씀. 1번부터 사용
    vector <int> graph[n + 1]; // 0번은 안씀. 1번부터 사용 

    // 연결된 쌍 개수 입력받음
    int duo = 0;
    cin >> duo;

    // 연결된 쌍 개수만큼 반복  
    for(int i = 0; i < duo; i++){

        // 노드 연결정보 입력받음
        int node, adjc_node;
        cin >> node >> adjc_node;

        // push back으로 vector에 삽입 - node와 adjc_node 둘 다 push back 해줘야함.
        // 그래야 양방향 graph가 되어짐. 그렇지 않으면 양방향 x
        graph[node].push_back(adjc_node);
        graph[adjc_node].push_back(node);
    }

    // dfs 실행
    dfs(1, graph, visited);
    cnt = cnt - 1; // 1번 노드 자기 자신 제외 

    // 결과 출력
    cout << cnt << endl;

    return 0;
}
