#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
	/// 
	///  �������� ����  Ȯ��
	/// 
	/// 
	//long long * p = new long long[5];
	//cout << "size of p = " << sizeof(p);
	//cout << endl;
	//
	//for (int i = 0; i < 5; i++) {
	//	cout << "�ּ� = " << p + i << endl;
	//}

	//cout << "===========================" << endl;
	//for (long long *v = p; v < (p + 5); v++) {
	//	cout << "&�ּ� = " << (v) << endl;
	//}


	int* p = new int[5];
	cout << "size of p = " << sizeof(p);
	cout << endl;

	for (int i = 0; i < 5; i++) {
		cout << "�ּ� = " << p + i << endl;
	}

	cout << "===========================" << endl;
	for (int* v = p; v < (p+20); v+=2) {
		cout << "&�ּ� = " << &(v) << endl;
	}

	return 0;
}