//#include <iostream>
//
//// DFS 1
//// ���� �湮�Ǿ� �ִٸ� (visited[there])�̶��
//// �湮���� �ʰ� �湮�� �ȵǾ� �ִٸ� �湮�� �ϴ�,
//// �� �ش� there�� ���Ͽ� dfs�� ȣ���ϴ� ���
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
//// �ϴ� �湮�Ǿ� �ִ� �ȵǾ� �ִ� ������ dfs�� ȣ���ϰ�
//// �ش� �Լ����� ���� �湮�Ǿ� �ִٸ� return
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
