#pragma region my solve

//#include <iostream>
//using namespace std;
//int a[24];
//int m, v;
//string f;
//
//ps : const_hash���� ���Ǿ� ���� 5381�̶�� ���� primive number�� �浹�� ���ɼ��� �����̶� ���߰� �˴ϴ�.
//���� 33�� ���ϱ⸦ �ϴ� ���� mul, imul�� ���� CPU clock�� ���� ��� �Դ� �ڵ�� ��ȯ���� �ʰ�
//(32 + 1)�� ���ϱ� �ϴ� ������(shl 5�� add ��ɾ��� ����)���� ����ȭ�� �̷�� ���� ������ �����̳��� CPU ������ ���̰� �˴ϴ�.
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