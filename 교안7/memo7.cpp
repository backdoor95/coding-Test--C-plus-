#include<iostream>
using namespace std;
int a[5], temp[5];
int main() {

	for (int i = 0; i < 5; i++)a[i] = i;
	memcpy(temp, a, sizeof(a));
	for (int i : temp) {
		cout << i << ' ';
	}
	cout << '\n';
	a[4] = 1000;
	for (int i : a)cout << i << " ";
	cout << "\n";
	
	memcpy(a, temp, sizeof(temp));
	for (int i : a)cout << i << ' ';
	cout << '\n';
}

//#include <bits/stdc++.h>
//using namespace std;
//int a[5], temp[5];
//int main() {
//	for (int i = 0; i < 5; i++)a[i] = i;
//	memcpy(temp, a, sizeof(a));
//	for (int i : temp) cout << i << ' ';
//	cout << '\n';
//	// ���� �迭 a�� �����Ͽ� ����ϴ� ����
//	// a�� �����ؼ� ~~�� ���ϴ� ������ �� �� �ְ���?
//	a[4] = 1000;
//	for (int i : a) cout << i << ' ';
//	cout << '\n';
//	// �� ���� �ٽ� temp�� ������� �����迭�� ��� ��.
//	memcpy(a, temp, sizeof(temp));
//	for (int i : a) cout << i << ' ';
//	cout << '\n';
//	return 0;
//}
/*
0 1 2 3 4
0 1 2 3 1000
0 1 2 3 4
*/