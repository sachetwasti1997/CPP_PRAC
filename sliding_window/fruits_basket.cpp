#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int totalFruit(vector<int>& fruits) {
		unordered_map<int, int> endInx;
		int i = 0;
		int j = 0;
		int total = 1;
		while (j < fruits.size()) {
			if (endInx.size() <= 2) {
				endInx[fruits[j]]++;
				j++;
			}
			if (endInx.size() > 2) {
				int min_inx = fruits.size() - 1;
				for (auto &i: endInx) {
					min_inx = min(i.second, min_inx);
				}
				i = min_inx + 1;
				endInx.erase(fruits[min_inx]);
			}
			total = max(total, j - i);
		}
		return total;
  }
};