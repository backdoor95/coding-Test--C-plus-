#include<bits/stdc++.h>
using namespace std;
// ������ 
// �ִ������� �ּҰ����

int gcd(int a, int b) {// �ִ����� Greatest Common Divisor, GCD
	if (a == 0)return b;
	return gcd(b % a, a);
}
int lcm(int a, int b) {//�ּҰ���� least common multiple = lcm
	return(a * b) / gcd(a, b);
}
//vector<int> era(int mx_n) {
//	vector<int> v;
//	for (int i = 2; i <= mx_n; i++) {
//		if (che[i]) continue;
//		for (int j = 2 * i; j <= mx_n; j += i) {
//			che[j] = 1;
//		}
//	}
//	for (int i = 2; i <= mx_n; i++) if (che[i] == 0)v.push_back(i);
//	return v;
//}
bool check(int n) {
	if (n <= 1)return 0;
	if (n == 2)return 1;
	if (n % 2 == 0)return 0;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)return 0;
	}
	return 1;
}
int main() {
	int a = 10, b = 12;
	cout << lcm(a, b) << endl;
	cout << gcd(40, 32) << endl;


	// ��ⷯ ����
	/*
	0. a �� b mod n�� b �� c mod n �� a �� c mod n �� �ǹ�
1. [(a mod n)+(b mod n)] mod n = (a+b) mod n
2. [(a mod n)-(b mod n)] mod n = (a-b) mod n
3. [(a mod n)*(b mod n)] mod n = (a*b) mod n
	*/

	// �����佺�׳׽��� ü
	// �Ҽ��� �ƴ� ���鿡 ���� �Ҹ��� �迭�� ����� �Ҽ����� �ɷ��� �� �ִ� ���
	
	for (int i = 1; i <= 20; i++) {
		if (check(i)) {
			cout << i << "�� �Ҽ��Դϴ�\n";
		}
	}
	// �¼� ���ϱ�
	// pow �Լ��� double�� ���ڸ� 2���� �ް�, �⺻������ double�� ��ȯ��. ���� int������ ����ϰ� 
	// ������ (int) �� ����ȯ�ؾ���
	int q = 4;
	int pow_2 = (int)pow(2, q);
	cout << pow_2 << endl;

	// ������ ���ϱ�
	/*
	�̴� �⺻������ double���� �Ű������� �ް� double���� �����ϱ� ������ int�� �� �Ÿ� int
����ȯ�� �� ���־�� �մϴ�.
	*/
	int n = 16;
	int ret = (int)sqrt(n);
	cout << ret << endl;



	return 0;
}