#include<iostream>
#include<vector>
#include<tuple>
using namespace std;
int T;
int x, y;
string N;
vector<tuple<string, int, int>> v;
tuple<string, int, int> t;
void gift() {

}
int main() {


	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N >> x >> y;
		v.push_back(make_tuple(N, x, y));
	}
	
	for (auto a : v) {
		cout << get<0>(a) << " " << get<1>(a) << " " << get<2>(a) << "\n";
	}
	return 0;
}