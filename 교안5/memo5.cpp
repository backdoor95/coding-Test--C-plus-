#include<bits/stdc++.h>
using namespace std;
const int max_n = 1004;
const int INF = 987654321;
// ���� 10�� ����
vector<int> v[10];
//�ʱⰪ�� 0�� vector 1���� ����
vector<int>v2(10, 0);
vector<vector<int>>v3(10, vector<int>(10, 0));
int a[max_n];
int a2[max_n][max_n];
int main() {
	// fill �Լ�, memset �Լ�

	// ���ͷ����� ������� �ʱ�ȭ
	fill(v2.begin(), v2.end(), INF);
	//10���� �ʱ�ȭ, 1004���� ��ü������ �ʱ�ȭ
	fill(a, a + max_n, 10);
	return 0;
}