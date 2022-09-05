//// 맵은 y는 0이상 ~1000미만 x는 0이상 ~1000미만의 좌표를 가집니다.
//// [0, 0]좌표에서 4방향 중 맵에 벗어나지 않는 것을 출력하시오.
//
//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int a[1004][1004];
//
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = x + dy[i];
//		if (nx >= 1000 || ny < 0 || nx < 0 || nx >= 1000)continue;
//		
//		cout << nx << " : " << ny << endl;
//	}
//	return 0;
//}