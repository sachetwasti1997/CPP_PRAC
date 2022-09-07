#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  string smallestNumber(string pattern) {
		vector<int> v(pattern.size() + 1);
		for (int i=1; i<=pattern.size()+1; i++) v.emplace_back(i);
		int i = 0;
		while (i < pattern.size()) {
			int start = i;
			while (i < pattern.size() && pattern[start] == pattern[i]) i++;
			i--;
			if (pattern[start] == 'D') reverse(v.begin()+start, v.begin()+i+2);
		}
		string res = "";
		for (auto &i: v) res+=to_string(i);
		return res;
  }
};