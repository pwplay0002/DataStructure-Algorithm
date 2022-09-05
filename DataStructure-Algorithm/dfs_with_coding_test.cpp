//#include <iostream>
//
//// DFS 1
//// 만약 방문되어 있다면 (visited[there])이라면
//// 방문하지 않고 방문이 안되어 있다면 방문을 하는,
//// 즉 해당 there에 대하여 dfs를 호출하는 방법
//void dfs(int here) 
//{
//    visited[here] = 1;
//    for (int there : adj[here]) 
//    {
//        if (visited[there]) continue;
//        dfs(there);
//    }
//}
//
//
//// DFS 2 
//// 일단 방문되어 있던 안되어 있던 무조건 dfs를 호출하고
//// 해당 함수에서 만약 방문되어 있다면 return
//void dfs(int here) 
//{
//    if (visited[here]) return;
//    visited[here] = 1;
//    for (int there : adj[here]) 
//    {
//        dfs(there);
//    }
//}
//
