#include<bits/stdc++.h>
using namespace std;
vector<int> v;

int main() {

	for (int i = 1; i <= 5; i++)v.push_back(i);
	for (int i = 0; i < 5; i++) {
		cout << i << "��° ��� : " << *(v.begin() + i) << endl;
		cout << i << "�ּ� = " << &*(v.begin() + i) << endl;
	}

	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << '\t';
	}
	cout << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << ' ';
	}
	auto it = v.begin();
	advance(it, 3);// �ش� iterator�� cnt���� ������ŵ�ϴ�.
	cout << endl;
	cout << *it << endl;
	return 0;
}