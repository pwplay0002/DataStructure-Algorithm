//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//// �ɸ� �ð� : 42
//// ���� �ذ� ���� : ���� ��ȣ�� ������ �ٷ� �տ� �ִ� �ް�ȣ�� ���� pop
//// ((()((()))))
//
//int main()
//{
//	int input = 0;
//
//	cin >> input;
//	for (int i = 0; i < input; i++)
//	{
//		bool check = true;
//		stack<char> s;
//		string temp;
//		cin >> temp;
//		if (temp[0] == ')')
//		{
//			check = false;
//			cout << "NO" << endl;
//		}
//		else
//		{
//			s.push(temp[0]);
//			for (int j = 1; j < temp.length(); j++)
//			{
//				s.push(temp[j]);
//				if (temp[j] == ')')
//				{
//					s.pop();
//					if (!s.empty()) s.pop();
//					else { cout << "NO" << endl; check = false; break; }
//				}
//			}
//			if (s.empty() && check)
//			{
//				check = true;
//				cout << "YES" << endl;
//			}
//			else if (check) { cout << "NO" << endl; }
//		}
//	}
//	return 0;
//}