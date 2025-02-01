#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void dfs(int x, vector<int> graph[], vector<bool> &visited){
    // 현재 노드 방문된 것으로 설정
    visited[x] = true;
    cout << x << " ";

    // adjc_node 탐색
    for(int i = 0; i < graph[x].size(); i++){
        int y = graph[x][i]; // 인접 노드 

        // adjc_node가 방문되지 않았다면 재귀함수로 방문 
        if(!visited[y]){
            dfs(y, graph, visited);
        }
    }
}

void bfs(int start, vector<int> graph[], vector<bool> &visited){
    queue<int> q;

    // 현재 노드 방문된 것으로 설정
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        // 큐의 앞에서부터 원소 하나씩 뽑아서
        int x = q.front();
        q.pop();
        cout << x << " ";

        // adjc_node 검사
        for(int i = 0; i < graph[x].size(); i++){
            int y = graph[x][i]; // 인접노드

            // 인접노드가 방문되지 않았다면 큐에 추가 후 방문설정 
            if(!visited[y]){
                q.push(y);
                visited[y] = true;  
            }
        }
    }
}

int main(){

    // node 개수, 간선의 개수, 시작노드 입력 받음 
    int n = 0, line = 0, first = 0;
    cin >> n >> line >> first;

    vector<bool> visited(n+1, false); // 0번 안쓰고 1번부터
    vector<int> graph[n+1];  // 0번 안쓰고 1번부터

    // 간선 개수만큼 반복
    for(int i = 0; i < line; i++){
        // 노드 정보 입력받음
        int node = 0, adjc_node = 0;
        cin >> node >> adjc_node;

        // graph에 노드정보 추가
        graph[node].push_back(adjc_node);
        graph[adjc_node].push_back(node);
    }

    // 작은 번호부터 탐색해야하므로 먼저 sort
    for(int i = 1; i <= n; i++){ // 
        sort(graph[i].begin(), graph[i].end());
    }

    // dfs 실행 및 결과 출력 
    dfs(first, graph, visited);
    cout << "\n";

    // bfs 실행 및 결과 출력 
    for(int i = 1; i <= n; i++) { 
        visited[i] = false; // dfs에서 모든 node가 true로 바뀌어서 다시 초기화 후 bfs 진행 
    }
    bfs(first, graph, visited);

    return 0;
}
