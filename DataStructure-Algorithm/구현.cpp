////string dopa = "life is limited";
////
////1.앞에서 3개의 문자열을 뽑아내라.
////2.거꾸로 해서 출력하라.
////3.거꾸로 한다음 그 이후에 dopa!!를 추가하라.
////
////[출처][알고리즘 강의] 1주차.복잡도, 재귀함수, 누적합, 구현 | 작성자 큰돌
//
//#include <iostream>
//#include <stack>
//#define endl '\n'
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//#pragma region 내가 푼 방법
//	//string temp, word[3];
//	//stack<char> str[3];
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	cin >> word[i];
//	//	for (int j = 0; j < word[i].length(); j++)
//	//	{
//	//		str[i].push(word[i][j]);
//	//	}
//	//}
//
//	//for (int i = 2; i >= 0; i--)
//	//{
//	//	for (int j = 0; j < word[i].size(); j++)
//	//	{
//	//		temp = str[i].top();
//	//		str[i].pop();
//	//		cout << temp;
//	//	}
//	//	cout << ' ';
//	//}
//	// cout << "dopa!!";
//	
//#pragma endregion
//
//#pragma region 더 간단한 방법
//	string dopa = "life is limited";
//	cout << dopa << endl;
//
//	cout << dopa.substr(0, 3) << endl;
//
//	reverse(dopa.begin(), dopa.end());
//	cout << dopa << endl;
//
//	dopa += "dopa!!";;
//	cout << dopa << endl;
//
//#pragma endregion
//
//	//! 함수 설명
//	//! reverse : 원래의 문자열을 뒤집는 함수
//	//! begin과 end를 통해 전체를 뒤집을 수도 있고 
//	//! dopa.begin(), dopa.begin() + 3
//	//! 과 같은 식으로 부분을 뒤집을 수도 있다.
//	//! 
//	//! substr: 시작지점으로 부터 몇 개의 문자열 을 뽑아낸다.
//
//	return 0;
//}