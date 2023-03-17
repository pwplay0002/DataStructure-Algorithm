#pragma region my solve

//#include <iostream>
//#include <vector>
//using namespace std;
//
//string str, bomb, ret;
//vector<int> pos;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//
//	cin >> str;
//	cin >> bomb;
//	for(int i = 0; i < str.length(); i++)
//	{
//		ret += str[i];
//		if(ret.size() >= bomb.size())
//		{
//			if (ret.substr(ret.size() - bomb.size(), bomb.size()) == bomb) 
//				ret.erase(ret.size() - bomb.size(), bomb.size());
//		}
//	}
//	
//	if (ret.empty()) cout << "FRULA";
//	else cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region my solve to stack

//#include <iostream>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//string str, bomb;
//stack<char> s;
//int main()
//{
//	cin >> str >> bomb;
//	for(int i = 0; i < str.size(); i++)
//	{
//		s.push(str[i]);
//		if(s.size() >= bomb.size() && s.top() == bomb[bomb.size() - 1])
//		{
//			string temp;
//			for(int j = 0; j < bomb.size(); j++)
//			{
//				temp += s.top();
//				s.pop();
//			}
//			reverse(temp.begin(), temp.end());
//			if(temp != bomb)
//			{
//				for(int j = 0; j < temp.size(); j++) s.push(temp[j]);
//			}
//		}
//	}
//	if (s.empty()) { cout << "FRULA"; return 0; }
//	string temp;
//	while (!s.empty())
//	{
//		temp += s.top();
//		s.pop();
//	}
//	reverse(temp.begin(), temp.end());
//	cout << temp;
//	return 0;
//}

#pragma endregion

#pragma region solve 1

//#include <iostream>
//using namespace std;
//string S, T, ret;
//int main()
//{
//    cin >> S >> T;
//    for (char a : S) 
//    {
//        ret += a;
//        if (ret.size() >= T.size() && ret.substr(ret.size() - T.size(), T.size()) == T) 
//        {
//            ret.erase(ret.end() - T.size(), ret.end());
//        }
//    }
//    if (!ret.size())cout << "FRULA" << "\n";
//    else cout << ret << "\n";
//    return 0;
//}

#pragma endregion

#pragma region solve 2 (stack)

//#include <iostream>
//#include <stack>
//#include <algorithm>
//using namespace std;
//string S, T, ret;
//stack<char> stk;
//int main()
//{
//    cin >> S >> T;
//    for (char a : S) 
//    {
//        stk.push(a);
//        if (stk.size() >= T.size() && stk.top() == T[T.size() - 1]) 
//        {
//            string ss = "";
//            for (char i : T) 
//            {
//                ss += stk.top();
//                stk.pop();
//            }
//            reverse(ss.begin(), ss.end());
//            if (T != ss) {
//                for (int i : ss) 
//                {
//                    stk.push(i);
//                }
//            }
//        }
//    }
//    if (stk.size() == 0) 
//    {
//        cout << "FRULA\n";
//    }
//    else 
//    {
//        while (stk.size()) 
//        {
//            ret += stk.top(); stk.pop();
//        }
//        reverse(ret.begin(), ret.end());
//        cout << ret << "\n";
//    }
//    return 0;
//}

#pragma endregion
