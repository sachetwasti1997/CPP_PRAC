#include<bits/stdc++.h>
using namespace std;

bool verifyPreorder(vector<int>& preorder) {
	stack<int> stk;
	int root = INT_MIN;
	for (auto &i: preorder) {
		if (!stk.empty() && i > stk.top()) {
			root = stk.top();
			stk.pop();
		}
		if (i < root) return false;
		stk.push(i);
	}
	return true;
}

int main() {
	vector<int> t = {5,2,1,3,6};
//	if(verifyPreorder(t)) cout<<"YES";
    int d = 5;
    cout<<(char)d;
}