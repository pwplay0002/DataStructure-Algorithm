#pragma region my solve

//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <tuple>
//using namespace std;
//
//string solution(vector<string> participant, vector<string> completion) {
//    string answer = "";
//    unordered_map<string, pair<string, int>> um;
//    for (int i = 0; i < participant.size(); i++)
//    {
//        um[participant[i]].second++;
//        um[participant[i]].first = participant[i];
//    }
//
//    for (int i = 0; i < completion.size(); i++)
//        um[completion[i]].second--;
//
//    for (auto i : um)
//    {
//        if (i.second.second != 0) return i.first;
//    }
//    return answer;
//}

#pragma endregion

#pragma region solve

//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//string solution(vector<string> participant, vector<string> completion) {
//    string answer = "";
//    sort(participant.begin(), participant.end());
//    sort(completion.begin(), completion.end());
//    for (int i = 0; i < completion.size(); i++)
//    {
//        if (participant[i] != completion[i])
//            return participant[i];
//    }
//    return participant[participant.size() - 1];
//    //return answer;
//}

#pragma endregion