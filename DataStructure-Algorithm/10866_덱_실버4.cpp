//#include <iostream>
//#include <deque>
//#define endl '\n'
//
//using namespace std;
//
//int main()
//{
//    deque<int> dq;
//    int N = 0;
//    cin >> N;
//
//    for (int i = 0; i < N; i++)
//    {
//        string cmd;
//        int value;
//        cin >> cmd;
//        if (cmd == "push_front")
//        {
//            cin >> value;
//            dq.push_front(value);
//        }
//        else if (cmd == "push_back")
//        {
//            cin >> value;
//            dq.push_back(value);
//        }
//        else if (cmd == "pop_front")
//        {
//            if (dq.empty())
//            {
//                cout << -1 << endl;
//            }
//            else
//            {
//                cout << dq.front() << endl;
//                dq.pop_front();
//            }
//        }
//        else if (cmd == "pop_back")
//        {
//            if (dq.empty())
//            {
//                cout << -1 << endl;
//            }
//            else
//            {
//                cout << dq.back() << endl;
//                dq.pop_back();
//            }
//        }
//        else if (cmd == "size")
//        {
//            cout << dq.size() << endl;
//        }
//        else if (cmd == "empty")
//        {
//            cout << dq.empty() << endl;
//        }
//        else if (cmd == "front")
//        {
//            if (dq.empty())
//            {
//                cout << -1 << endl;
//            }
//            else
//            {
//                cout << dq.front() << endl;
//            }
//        }
//        else if (cmd == "back")
//        {
//            if (dq.empty())
//            {
//                cout << -1 << endl;
//            }
//            else
//            {
//                cout << dq.back() << endl;
//            }
//        }
//    }
//    return 0;
//}