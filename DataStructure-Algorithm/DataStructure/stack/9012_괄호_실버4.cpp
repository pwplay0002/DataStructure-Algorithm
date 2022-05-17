//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//// 걸린 시간 : 42
//// 문제 해결 전략 : 오른 괄호가 들어오면 바로 앞에 있는 왼괄호랑 같이 pop
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