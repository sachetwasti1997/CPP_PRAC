#include <bits/stdc++.h>
using namespace std;
typedef vector<vector<int>> vvi;
class Solution {
public:
  bool canAttendMeetings(vvi& intr) {
    if (intr.size() == 0) return true;
    vector<pair<int, int>> v(intr.size());
    int k = 0;
    for (auto &i: intr) v[k++] = {i[0], i[1]};
    sort(v.begin(), v.end(), [](auto& l, auto& r){return l.first < r.first;});
    for (int i = 0; i < v.size()-1; i++) {
      if (v[i].second > v[i+1].first) return false;
    }    
    return true;
  }
};