#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
	// unique()
	// 범위안의 있는 요소 중 중복되는 요소를 제거하고
	//중복되지 않는 요소들로 앞에서부터 정렬되어 채움

	for (char i = 1; i <= 5; i++) {
		v.push_back(i);
		v.push_back(i);
	}

	for (int i = 5; i >= 1; i--){
		v.push_back(i);
		v.push_back(i);
	}
	cout << *v.end() << endl;
	sort(v.begin(), v.end());// unique함수를 쓸때는 정렬를 해줘야함.

	for (int i : v) cout << i << " ";
	cout << endl;

	auto it = unique(v.begin(), v.end());
	cout << "&*it = "<<& *it << endl;
	cout << "&*v.begin() = " << &*v.begin() << endl;
	
	cout << "*it = "<<*it << endl;

	for (vector<int>::iterator it2 = v.begin(); it2 != it; it2++) {
		cout << &*it2 << ' ';
	}
	cout<<endl;
	cout << "auto 기능 사용해보기" << endl;
	for (auto it3 = v.begin(); it3 != it; it3++) {
		cout << &*it3 << ' ';
	}
	cout << endl;
	cout << "it - v.begin() = "<<it - v.begin() << endl;
	cout << "*(v.begin()+3) = " << *(v.begin() + 3) << endl;
	for (int i : v) cout << i << " ";

	cout << endl;

	v.erase(it, v.end());// 뒷 부분 제거
	for (int i : v) { cout << i << ' '; }

}