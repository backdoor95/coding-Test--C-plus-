#include<bits/stdc++.h>
using namespace std;
vector<int> v(3, 0);
vector<vector<int>> v2;
vector<vector<int>> v3(10, vector<int>(10, 0));
vector<int> v4[10];
int k[3] = { 1,2,3 };
void zo(vector<vector<int>>& v) {
	v[0][0] = 100;
}
void zo2(vector<vector<int>>& v) {
	v[0][0] = 100;
}
void zo3(vector<int> v[]) {
	v[0][0] = 100;
}
void ko(int a[]) {
	a[2] = 100;
}
void ko2(int a[3]) {
	a[2] = 1000;
}
void ko3(int* a) {
	a[2] = 10000000;
}
void go(vector<int>& v) {
	v[1] = 100;
}
int add(int& a, int b) {
	a += 10;
	cout << a << endl;
	return a + b;
}

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL); cout.tie(NULL);
	// �Ű�����
	// ���� ���� ȣ�� : �Ű������� ���纻�� �ش� �Լ� ���η� �ѱ�� ���
	// 
	// ������ ���� ȣ�� : ������ ���� ȣ���� ���� ������ �ּҸ� 
	// �Ű������� �Լ��� �����ϴ� ���
	// �Լ� ���ο��� �ش� �Ű������� �����ϰ� �Ǹ� ���� ���� ��������
	// �ݿ��� �˴ϴ�.
	//

	int a = 1;
	int b = 2;
	int sum = add(a, b);
	cout << a << endl;
	cout << "======================================\n";
	go(v);
	for (int i : v)cout << i << endl;


	// Array�� ��� �����ϱ�
	// Array�� ��Ҹ� ������ ���� ũ�⸦ ������ ���� int a[], �Ǵ�
	// �迭�� ũ���� int a[3], �迭�� �������� int *a �� �Ѱܼ�
	// ������ �����ϴ�.
	//

	ko(k); cout << k[2] << '\n';
	ko2(k); cout << k[2] << endl;
	ko3(k); cout << k[2] << endl;

	//
	//2���� �迭 �����ϱ�
	//

	cout << v2.size() << endl;
	cout << v3.size() << endl;
	cout << v4[0].size() << endl;




	return 0;
}