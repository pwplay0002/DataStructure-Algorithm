#pragma region Wrong solve

// check �ؾ��� �κ�
// �������� ���� �� ū ��� : �������� L��ŭ for���� ���鼭 ���̰� ������ üũ
// ������ ���� �� ū ��� : ���������� L��ŭ for���� ���鼭 ���̰� ������ üũ
//#include <iostream>
//#include <vector>
//using namespace std;
//int n, L, ret;
//int a[104][104];
//int c[104][104];
//int main()
//{
//	cin >> n >> L;
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//			c[i][j] = a[i][j];
//		}
//	}
//
//	// �� üũ
//	bool check1 = true;
//	for(int i = 0; i < n; i++)
//	{
//		check1 = true;
//		for(int j = 0; j <= n; j++)
//		{
//			// ���� ���� �ִ� �� ó��
//			if(j == n)
//			{
//				ret++;
//				break;
//			}
//
//			if (j + L < n)
//			{
//				if (abs(a[i][j] - a[i][j + 1]) > 1)
//					if (a[i][j] != -1) break;
//
//				if (c[i][j] == a[i][j + 1]) continue;
//
//				// ���� ������ �������� ���� �� ū ���
//				if (c[i][j] < a[i][j + 1])
//				{
//					if (j + 1 < L) break;
//					int curr = a[i][j];
//					if (curr == -1 && c[i][j] < a[i][j + 1]) break;
//					for (int k = j; k > j - L; k--)
//					{
//						if (curr != a[i][k])
//						{
//							check1 = false;
//							break;
//						}
//					}
//					if (check1 == false) break;
//					for (int k = j; k > j - L; k--)
//						a[i][k] = -1;
//				}
//
//				// ���� ������ �������� ���� �� ���� ���
//				if (c[i][j] > a[i][j + 1])
//				{
//					if (n - (j + 1) < L) break;
//					int curr = a[i][j + 1];
//					for (int k = j + 1; k < j + 1 + L; k++)
//					{
//						if (curr != a[i][k])
//						{
//							check1 = false;
//							break;
//						}
//					}
//					if (check1 == false) break;
//					for (int k = j + 1; k < j + 1 + L; k++)
//						a[i][k] = -1;
//					j += L - 1;
//				}
//			}
//			else if (c[i][j] == a[i][j + 1])
//			{
//				int curr = c[i][j];
//				for(int k = j; k < j + L; k++)
//				{
//					if (curr != c[i][k])
//					{
//						check1 = false;
//						break;
//					}
//				}
//				if (check1 == false) break;
//				j += L - 1;
//			}
//		}
//
//		if (check1 == false)
//		{
//			for (int m = 0; m < n; m++)
//			{
//				a[i][m] = c[i][m];
//			}
//		}
//	}
//
//	// �� üũ
//	bool check2 = true;
//	for (int j = 0; j < n; j++)
//	{
//		check2 = true;
//		for (int i = 0; i <= n; i++)
//		{
//			// ���� ���� �ִ� �� ó��
//			if (i == n)
//			{
//				ret++;
//				break;
//			}
//
//			if (i + L < n)
//			{
//				if (abs(a[i][j] - a[i + 1][j]) > 1)
//					if(a[i][j] != -1) break;
//
//				if (c[i][j] == a[i + 1][j]) continue;
//
//				// ���� ������ �Ʒ��� ���� �� ū ���
//				if (c[i][j] < a[i + 1][j])
//				{
//					if (i + 1 < L) break;
//					int curr = a[i][j];
//					if (curr == -1 && c[i][j] < a[i + 1][j]) break;
//					for (int k = i; k > i - L; k--)
//					{
//						if (curr != a[k][j])
//						{
//							check2 = false;
//							break;
//						}
//					}
//					if (check2 == false) break;
//					for (int k = i; k > i - L; k--)
//						a[k][j] = -1;
//				}
//
//				// ���� ������ �Ʒ��� ���� �� ���� ���
//				if (c[i][j] > c[i + 1][j])
//				{
//					if (n - (i + 1) < L) break;
//					int curr = c[i + 1][j];
//					for (int k = i + 1; k < i + 1 + L; k++)
//					{
//						if (curr != c[k][j])
//						{
//							check2 = false;
//							break;
//						}
//					}
//					if (check2 == false) break;
//					for (int k = i + 1; k < i + 1 + L; k++)
//						a[k][j] = -1;
//					i += L - 1;
//				}
//			}
//			else if (c[i][j] == a[i + 1][j])
//			{
//				int curr = c[i][j];
//				for(int k = i; k < i + L; k++)
//				{
//					if (curr != c[k][j])
//					{
//						check2 = false;
//						break;
//					}
//				}
//				if (check2 == false) break;
//				i += L - 1;
//			}
//		}
//
//		if (check2 == false)
//		{
//			for (int m = 0; m < n; m++)
//			{
//				a[m][j] = c[m][j];
//			}
//		}
//	}
//	cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int a[104][104];
//int b[104][104];
//int n, L, ret;
//void CalcRoad(int a[104][104])
//{
//	for(int i = 0; i < n; i++)
//	{
//		int cnt = 1;
//		bool check = true;
//		for(int j = 0; j < n - 1; j++)
//		{
//			// ���� ���
//			if (a[i][j] == a[i][j + 1]) cnt++;
//			// ���� ���� �������� �� ū ���
//			else if (a[i][j] + 1 == a[i][j + 1] && cnt >= L) cnt = 1;
//			// ���纸�� �������� �� ���� ���
//			else if (a[i][j] - 1 == a[i][j + 1] && cnt >= 0) cnt = -L + 1;
//			else { check = false; break; }
//		}
//		if (check == true && cnt >= 0) ret++;
//	}
//	return;
//}
//
//int main()
//{
//	cin >> n >> L;
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//			b[j][i] = a[i][j];
//		}
//	}
//	CalcRoad(a); CalcRoad(b);
//	cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region my new solve to solve

//#include <iostream>
//using namespace std;
//int a[104][104];
//int b[104][104];
//int n, m, ret;
//
//void CntRoad(int c[104][104])
//{
//	for(int i = 0; i < n; i++)
//	{
//		bool check = true;
//		int cnt = 1;
//		for(int j = 0; j < n - 1; j++)
//		{
//			if (c[i][j] == c[i][j + 1]) cnt++;
//			else if(c[i][j] + 1 == c[i][j + 1])
//			{
//				if (cnt < m) { check = false; break; }
//				cnt = 1;
//			}
//			else if(c[i][j] - 1 == c[i][j + 1])
//			{
//				if (cnt < 0) { check = false; break; }
//				cnt = -m + 1;
//			}
//			else { check = false; break; }
//		}
//		if (check == true && cnt >= 0) ret++;
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//			b[j][i] = a[i][j];
//		}
//	}
//	CntRoad(a); CntRoad(b);
//	cout << ret;
//	return 0;
//}

#pragma endregion