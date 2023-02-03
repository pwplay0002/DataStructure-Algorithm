#pragma region my solve 

//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <deque>
//
//using namespace std;
//
//int t;
//
//void sarrToInt(string& arr, deque<int>& dq)
//{
//	int idx = 1;
//	string temp = "";
//	do
//	{
//		if (arr[idx] == ']')
//		{
//			dq.push_back(stoi(temp));
//			break;
//		}
//		if (arr[idx] == ',')
//		{
//			dq.push_back(stoi(temp));
//			temp.clear();
//			continue;
//		}
//		temp += arr[idx];
//	}
//	while (idx++);
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> t;
//	for(int i = 0; i < t; i++)
//	{
//		bool bIsR = false;
//		bool check = true;
//		deque<int> dq;
//		string func, sarr;
//		int size = 0;
//		cin >> func >> size >> sarr;
//		if(sarr.size() != 2)
//			sarrToInt(sarr, dq);
//
//		for(char j : func)
//		{
//			if(j == 'R')
//			{
//				if (bIsR == false) bIsR = true;
//				else if (bIsR == true) bIsR = false;
//			}
//
//			else if(j == 'D')
//			{
//				if (dq.size() == 0) { check = false; break; }
//				if (bIsR == false) dq.pop_front();
//				else if (bIsR == true) dq.pop_back();
//			}
//		}
//		if (check == false) cout << "error" << '\n';
//		else
//		{
//			if (bIsR == true) reverse(dq.begin(), dq.end());
//			cout << '[';
//			for(int j = 0; j < dq.size(); j++)
//			{
//				cout << dq[j];
//				if (j + 1 != dq.size()) cout << ',';
//			}
//			cout << ']' << '\n';
//		}
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <algorithm>
//#include <deque>
//
//using namespace std;
//int T, N, x;
//string P, order;
//int main()
//{
//    cin >> T;
//    for (int t = 0; t < T; t++) 
//    {
//        deque<int> D;
//        cin >> P >> N >> order;
//        x = 0;
//        for (char c : order) 
//        {
//            if (c == '[' || c == ']') continue;
//            // 숫자가 나오면 현재 수*10 한 뒤 더함
//            if (c >= '0' && c <= '9') x = x * 10 + c - '0';
//            // 아닐 경우 현재 수를 덱에 넣음
//            else 
//            {
//                if (x > 0) D.push_back(x);
//                x = 0;
//            }
//        }
//        if (x > 0) D.push_back(x);
//        // 초기에는 에러 없음, 뒤집히지 않은 상태
//        bool error = false, rev = false;
//        for (char a : P) 
//        {
//            if (a == 'R') rev = !rev;
//            else 
//            {
//                // 비어있는데 제거하려 하면 에러
//                if (D.empty()) 
//                {
//                    error = true;
//                    break;
//                }
//                if (rev) D.pop_back();
//                else D.pop_front();
//            }
//        }
//        // 에러가 발생한 경우
//        if (error) cout << "error" << '\n';
//        // 아닐 경우 덱의 원소를 하나하나 출력
//        else 
//        {
//            cout << "[";
//            // 덱이 뒤집힌 상태면 진짜로 뒤집어 준다.
//            if (rev) reverse(D.begin(), D.end());
//            for (int i = 0; i < D.size(); i++) 
//            {
//                cout << D[i];
//                if (i < D.size() - 1) cout << ",";
//            }
//            cout << "]\n";
//        }
//    }
//}

#pragma endregion