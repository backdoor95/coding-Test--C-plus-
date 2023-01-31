#include<bits/stdc++.h>
using namespace std;
int n = 5, k = 3, a[5] = { 1,2,3,4,5 };// 5개 중에서 3개를 뽑는다. 조합으로
void print(vector<int> b) {
	for (int i : b)cout << i << " ";
	cout << endl;
}
void combi(int start, vector<int> b) {
	if (b.size() == k) {
		print(b);
		return;
	}
	for (int i = start + 1; i < n; i++) {
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
}
int main() {
	// 조합
	// 조합에서는 순서가 없다.
	// 재귀를 이용한 조합
	vector<int>	b;
	combi(-1, b);


	//중첩 for문
	// nCr : r이 작을때 사용함. r이 3이하 일때
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				cout << i << " " << j << " " << k << endl;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < j; k++) {
				cout << i << " " << j << " " << k << endl;
			}
		}
	}

	// r 이 2 , 즉 2개를 뽑는 것이란면?
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			cout << i << " " << j << endl;
		}
	}

	// nCr = nC(n-r)


	return 0;
}