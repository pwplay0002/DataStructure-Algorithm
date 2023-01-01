#pragma region split

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<string> split(string input, string delimiter)
//{ 
//	vector<string> ret;
//	long long pos = 0;
//	string token = "";
//	while ((pos = input.find(delimiter)) != string::npos)
//	{
//		token = input.substr(0, pos);
//		ret.push_back(token);
//		input.erase(0, pos + delimiter.length());
//	}
//	ret.push_back(input);
//	return ret;
//}
//
//int main()
//{
//	string s = "안녕하세요 박경준 입니다!", d = " ";
//	vector<string> a = split(s, d);
//	for (string b : a) cout << b << '\n';
//	return 0;
//}

#pragma endregion

#pragma region split practice

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<string> split(string input, string delimiter)
//{
//	vector<string> ret;
//	long long pos = 0;
//	string token = "";
//	while ((pos = input.find(delimiter)) != string::npos)
//	{
//		token = input.substr(0, pos);
//		ret.push_back(token);
//		input.erase(0, pos + delimiter.length());
//	}
//	ret.push_back(input);
//	return ret;
//}
//
//int main()
//{
//	string s = "안녕하세요 split 함수 코드입니다.";
//	string d = " ";
//	vector<string> a = split(s, d);
//	for (string i : a) cout << i << '\n';
//	return 0;
//}

#pragma endregion