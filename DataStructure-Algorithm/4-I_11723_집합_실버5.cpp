#pragma region my solve

//#include <iostream>
//using namespace std;
//int a[24];
//int m, v;
//string f;
//
//ps : const_hash에서 사용되어 지는 5381이라는 값은 primive number로 충돌의 가능성을 조금이라도 낮추게 됩니다.
//또한 33을 곱하기를 하는 것은 mul, imul과 같이 CPU clock을 많이 잡아 먹는 코드로 변환되지 않고
//(32 + 1)을 곱하기 하는 것으로(shl 5와 add 명령어의 조합)으로 최적화가 이루어 지기 때문에 조금이나마 CPU 연산을 줄이게 됩니다.
//
//static constexpr uint32_t const_hash(const char* p)
//{
//	return *p ? static_cast<uint32_t>(*p) + 33 * const_hash(p + 1) : 5381;
//}
//
//void all()
//{
//	for(int i = 1; i < 24; i++)
//		a[i] = i;
//}
//
//void clear()
//{
//	for (int i = 1; i < 24; i++)
//		a[i] = 0;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> m;
//	for(int i = 0; i < m; i++)
//	{
//		cin >> f;
//		if (f != "all" && f != "empty") cin >> v;
//		
//		switch (const_hash(f.c_str()))
//		{
//		case const_hash("add"): if (a[v] == 0) a[v] = 1; break;
//		case const_hash("remove"): a[v] = 0; break;
//		case const_hash("check"): if (a[v] == 0) cout << 0 << '\n'; else cout << 1 << '\n'; break;
//		case const_hash("toggle"): if (a[v] != 0) a[v] = 0; else a[v] = 1; break;
//		case const_hash("all"): all(); break;
//		case const_hash("empty"):clear(); break;
//		}
//	}
//
//	return 0;
//}

#pragma endregion

#pragma region my solve 2

//#include <iostream>
//using namespace std;
//int a[21];
//int m, v;
//string s;
//
//enum string_code
//{
//	eAdd,
//	eRemove,
//	eCheck,
//	eToggle,
//	eAll,
//	eEmpty
//};
//
//string_code hashit (std::string const& inString)
//{
//	if (inString == "add") return eAdd;
//	if (inString == "remove") return eRemove;
//	if (inString == "check") return eCheck;
//	if (inString == "toggle") return eToggle;
//	if (inString == "all") return eAll;
//	if (inString == "empty") return eEmpty;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> m;
//	for(int i = 0; i < m; i++)
//	{
//		cin >> s;
//		if (s != "all" && s != "empty") cin >> v;
//		switch (hashit(s))
//		{
//			case eAdd: if (a[v] == 0) a[v] = 1; break;
//			case eRemove: a[v] = 0; break;
//			case eCheck: if (a[v] == 0) cout << 0 << '\n'; else cout << 1 << '\n'; break;
//			case eToggle: if (a[v] != 0) a[v] = 0; else a[v] = 1; break;
//			case eAll: for (int i = 1; i < 21; i++) a[i] = i; break;
//			case eEmpty:for (int i = 1; i < 21; i++) a[i] = 0; break;
//		}
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve with bitmasking

//#include <iostream>
//using namespace std;
//int n, m, x;
//char s[11];
//int main()
//{
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    cin >> m;
//    for (int i = 0; i < m; i++) 
//    {
//        cin >> s;
//        if (!((s[0] == 'a' && s[1] == 'l') || s[0] == 'e')) cin >> x;
//        if (s[0] == 'a' && s[1] == 'd') n |= (1 << x);
//        else if (s[0] == 'r') n &= ~(1 << x);
//        else if (s[0] == 'c') cout << ((n & (1 << x)) == 0 ? 0 : 1) << '\n';
//        else if (s[0] == 't') n ^= (1 << x);
//        else if (s[0] == 'a' && s[1] == 'l') n = (1 << 21) - 1;
//        else n = 0;
//    }
//}


#pragma endregion