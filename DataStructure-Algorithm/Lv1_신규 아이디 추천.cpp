//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//string step1(string new_id)
//{
//	for(int i  = 0; i < new_id.length(); i++)
//	{
//		if(new_id[i] >= 'A' && new_id[i] <= 'Z')
//			new_id[i] += 32;
//	}
//	return new_id;
//}
//
//string step2(string new_id)
//{
//	for(int i = 0; i < new_id.length(); i++)
//	{
//		if(new_id[i] >= 'a' && new_id[i] <= 'z') continue;
//		if(new_id[i] >= '0' && new_id[i] <= '9') continue;
//		if (new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.') continue;
//		new_id.erase(i, 1);
//		i--;
//	}
//	return new_id;
//}
//
//string step3(string new_id)
//{
//	while (true)
//	{
//		if (new_id.find("..") != string::npos)
//			new_id.erase(new_id.find(".."), 1);
//		else
//			break;
//	}
//	return new_id;
//}
//
//string step4(string new_id)
//{
//	if(new_id[0] == '.')
//		new_id.erase(0, 1);
//	if (new_id[new_id.length() - 1] == '.')
//		new_id.erase(new_id.length() - 1, 1);
//	return new_id;
//}
//
//string step5(string new_id)
//{
//	if (new_id.length() == 0)
//		new_id += "a";
//	return new_id;
//}
//
//string step6(string new_id)
//{
//	if(new_id.length() >= 16)
//	{
//		new_id.erase(15);
//		return step4(new_id);
//	}
//	return new_id;
//}
//
//string step7(string new_id)
//{
//	if(new_id.length() <= 2)
//	{
//		char temp = new_id[new_id.length() - 1];
//		while (new_id.length() != 3)
//		{
//			new_id += temp;
//		}
//	}
//	return new_id;
//}
//
//string solution(string new_id)
//{
//	new_id = step1(new_id);
//	new_id = step2(new_id);
//	new_id = step3(new_id);
//	new_id = step4(new_id);
//	new_id = step5(new_id);
//	new_id = step6(new_id);
//	new_id = step7(new_id);
//	return new_id;
//}
//
//	string a;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	solution("abcdefghijklmn.p");
//	cout << a << endl;
//	cout << a.length();
//	return 0;
//}