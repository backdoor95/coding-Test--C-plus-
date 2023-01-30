#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
int main() {

	for (int i = 10; i >= 1; i--) {
		v.push_back({ i,10 - i });
	}

	for (pair<int, int> i : v) {
		cout << "1 = " << i.first << " ,2 = " << i.second << endl;
	}
	sort(v.begin(), v.end());
	for(auto it: v)cout<<it.first<<" : "<<it.second<<endl;



	return 0;
}