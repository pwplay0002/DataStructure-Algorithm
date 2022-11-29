#pragma region my solve 호환성검사 error

//#include <string>
//#include <vector>
//
//using namespace std;
//
//struct standard
//{
//	string lang;
//	string job;
//	string carrer;
//	string food;
//	string score;
//
//	bool operator == (const standard& b)
//	{
//		bool bTemp;
//		if (b.lang != "-" && lang != b.lang)
//			return false;
//		if (b.job != "-" && job != b.job)
//			return false;
//		if (b.carrer != "-" && carrer != b.carrer)
//			return false;
//		if (b.food != "-" && food != b.food)
//			return false;
//		if (stoi(score) < stoi(b.score))
//			return false;
//		
//		return true;
//	}
//};
//
//standard m_info[100004];
//standard m_query[100004];
//int info_index;
//int query_index;
//
//void check(vector<int>& answer)
//{
//	int result_index = 0;
//	for(int i = 0; i < query_index; i++)
//	{
//		for(int j = 0; j < info_index; j++)
//		{
//			if (m_info[j] == m_query[i])
//				answer[result_index]++;
//		}
//		result_index++;
//	}
//}
//
//vector<int> solution(vector<string> info, vector<string> query)
//{
//	for (int i = 0; i < info.size(); i++)
//	{
//		standard temp = {};
//		string s = "";
//		int stand = 0;
//		for (int j = 0; j < info[i].length(); j++)
//		{
//			if (info[i][j] == ' ' || j + 1 == info[i].length())
//			{
//				if (j + 1 == info[i].length())
//					s += info[i][j];
//				switch (stand)
//				{
//				case 0: { temp.lang = s; } break;
//				case 1: { temp.job = s; } break;
//				case 2: { temp.carrer = s; } break;
//				case 3: { temp.food = s; } break;
//				case 4: { temp.score = s; } break;
//				}
//				stand++;
//				s = "";
//				continue;
//			}
//			s += info[i][j];
//		}
//		m_info[i] = temp;
//		info_index++;
//	}
//
//	for(int i = 0; i < query.size(); i++)
//	{
//		standard temp = {};
//		string s = "";
//		int stand = 0;
//		for(int j = 0; j < query[i].length(); j++)
//		{
//			if(query[i][j] == ' ' || j + 1 == query[i].length())
//			{
//				if (j + 1 == query[i].length()) 
//					s += query[i][j];
//				switch (stand)
//				{
//				case 0: { temp.lang = s; } break;
//				case 2: { temp.job = s; } break;
//				case 4: { temp.carrer = s; } break;
//				case 6: { temp.food = s; } break;
//				case 7: { temp.score = s; } break;
//				}
//				stand++;
//				s = "";
//				continue;
//			}
//			s += query[i][j];
//		}
//		m_query[i] = temp;
//		query_index++;
//	}
//    vector<int> answer;
//	answer.reserve(query_index);
//	answer.resize(query_index);
//	check(answer);
//    return answer;
//}
//
//int main()
//{
//	vector<string> info =
//	{
//		"java backend junior pizza 150",
//		"python frontend senior chicken 210",
//		"python frontend senior chicken 150",
//		"cpp backend senior pizza 260",
//		"java backend junior chicken 80",
//		"python backend senior chicken 50"
//	};
//	vector<string> query =
//	{
//		"java and backend and junior and pizza 100",
//		"python and frontend and senior and chicken 200",
//		"cpp and - and senior and pizza 250",
//		"- and backend and senior and - 150",
//		"- and - and - and chicken 100",
//		"- and - and - and - 150"
//	};
//	solution(info, query);
//	return 0;
//}

#pragma endregion

