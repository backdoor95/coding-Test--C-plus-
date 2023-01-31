#include<bits/stdc++.h>
#include<cstdio>
#include<vector>
#include<algorithm>	
#include<iostream>
using namespace std;
vector<int>v;
void printV(vector<int>& v) {
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}
void makePermutation(int n, int r, int depth) {
	if (r == depth) {
		printV(v);
		return;
	}
	for (int i = depth; i < n; i++) {
		swap(v[i], v[depth]);
		cout << "i = " << i << endl;
		makePermutation(n, r, depth + 1);
		swap(v[i], v[depth]);
	}

}
int fact(int n) {
	if (n == 1 || n == 0)return 1;
	return n * fact(n - 1);
}
int fact1(int n) {
	int ret = 1;
	for (int i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}
int fibo(int n) {
	cout << "fibo : " << n << endl;
	if (n == 0 || n == 1)return n;
	return fibo(n - 1) + fibo(n - 2);
}
int n = 4;
int main() {
	// ������ ����

	//- ���� [permutation]
	// ������ ������ ������ �ٸ� ������ ���� ������ ����.
	// n���� ������ n���� ���� �����ǰ��� n!
	// n!/(n-r)! = nPr
	//
	// 1. next_permutation  ,  prev_permutation �̿�
	// next_permutation = ���������� �迭�� ������� ����������
	// 
	// prev_permutation = ���������� �迭�� ������� ������ ����
	// ���� �Ű������� [first, last)�� �������
	// ������ ������ ������ ù��° �ּ�, �׸��� ���Ե��� �ʴ� ������ �ּ�
	// 
	//
	// next_permutation�� �������� �ݵ�� ������������ ���� �����ؾ���.
	int a[3] = { 1,2,3 };
	
	// ������������ ������ ����
	for (int i = 0; i < 3; i++)v.push_back(a[i]);
	
	do {
		printV(v);
	} while (next_permutation(v.begin(), v.end()));

	cout << "========++++++++++=========\n";
	v.clear();/// vector Ŭ����

	// ������������ ������ ����
	for (int i = 2; i >= 0; i--)v.push_back(a[i]);
	do {
		printV(v);
	} while (prev_permutation(v.begin(), v.end()));
	cout << "================================\n";
	sort(v.begin(), v.end());
	printV(v);
	cout << "=================================\n";
	do {
		printV(v);
	} while (next_permutation(v.begin(), v.begin() + 2));

	/*
next_permutation() ���� ������ ��
next_permutation()�� prev_permutation() �ΰ��� �Լ��� ������ next_permutation()��
���µ� �� �� �迭�� ����������"���� ������ �ؼ� ���°� �߿��մϴ�.
	*/

	// �� ���� ��� ��찡 ����� �����ʴ´�.
	//�̴� next_permutation() �̶�� �Լ��� �ش� �迭�� �� ��������° ����"��
	//������ �Լ��̱� ������ �׷����ϴ�.
	cout << "���ĵǾ����� ���� �迭���\n";
	int b[] = { 1,3,2 };
	do {
		for (int i : b)cout << i << " ";
		cout << endl;
	} while (next_permutation(b, b + 3));
	cout << "���ĵ� �迭���\n";
	int c[] = { 1,2,3 };
	do {
		for (int i : c)cout << i << " ";
		cout << endl;
	} while (next_permutation(c, c + 3));

	sort(v.begin(), v.end());

	cout << "-----------------------------------\n";

	makePermutation(3, 3, 0);

	///////////////////////////////////////////////
	// ����Լ��� ���� �ܰ迡�� �ڽ��� �������ϴ� �Լ�
	// ���޵Ǵ� ������ �Ű������� �޶����� �Ȱ��� ���� �ϴ� �Լ�
	// ū ������ ���� �κй����� ������ Ǯ �� �����

	// �ݵ�� ���������� �����.
	// ����Ŭ�� �ִٸ� ���� �ȵ�
	// �ݺ������� �ɰͰ����� �ݺ������� ó������
	cout << fibo(n) << endl;

	return 0;
}