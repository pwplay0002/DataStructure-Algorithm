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
//            // ���ڰ� ������ ���� ��*10 �� �� ����
//            if (c >= '0' && c <= '9') x = x * 10 + c - '0';
//            // �ƴ� ��� ���� ���� ���� ����
//            else 
//            {
//                if (x > 0) D.push_back(x);
//                x = 0;
//            }
//        }
//        if (x > 0) D.push_back(x);
//        // �ʱ⿡�� ���� ����, �������� ���� ����
//        bool error = false, rev = false;
//        for (char a : P) 
//        {
//            if (a == 'R') rev = !rev;
//            else 
//            {
//                // ����ִµ� �����Ϸ� �ϸ� ����
//                if (D.empty()) 
//                {
//                    error = true;
//                    break;
//                }
//                if (rev) D.pop_back();
//                else D.pop_front();
//            }
//        }
//        // ������ �߻��� ���
//        if (error) cout << "error" << '\n';
//        // �ƴ� ��� ���� ���Ҹ� �ϳ��ϳ� ���
//        else 
//        {
//            cout << "[";
//            // ���� ������ ���¸� ��¥�� ������ �ش�.
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