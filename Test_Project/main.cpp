#include <iostream>

using namespace std;
const int dy[] = { 1, 0, -1, 1, -1, 1, 0, -1 };
const int dx[] = { 1, 1, 1, 0, 0, -1, -1, -1 };
int a[1004][1004];
bool visited[1004][1004];
int n, lx, ly, cnt;

void dfs(int y, int x) {
    if (visited[y][x]) return;
    visited[y][x] = 1;
    for (int i = 0; i < 8; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if (!visited[ny][nx] && a[ny][nx] == 1)
        {
            a[ny][nx] = 0;
            cnt++;
            dfs(ny, nx);
            break;
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 2)
            {
                ly = i;
                lx = j;
            }
        }
    }
    dfs(ly, lx);
    cout << cnt;
    return 0;
}