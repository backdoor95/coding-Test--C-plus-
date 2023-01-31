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
	// 순열과 조합

	//- 순열 [permutation]
	// 정해진 임의의 집합을 다른 순서로 섞는 연산을 말함.
	// n개의 집합중 n개를 고르는 순열의개수 n!
	// n!/(n-r)! = nPr
	//
	// 1. next_permutation  ,  prev_permutation 이용
	// next_permutation = 오름차순의 배열을 기반으로 순열을만듬
	// 
	// prev_permutation = 내림차순의 배열을 기반으로 순열을 만듬
	// 각각 매개변수로 [first, last)를 집어넣음
	// 순열을 시작할 범위의 첫번째 주소, 그리고 포함되지 않는 마지막 주소
	// 
	//
	// next_permutation의 주의점은 반드시 오름차순으로 먼저 세팅해야함.
	int a[3] = { 1,2,3 };
	
	// 오름차순으로 순열을 뽑음
	for (int i = 0; i < 3; i++)v.push_back(a[i]);
	
	do {
		printV(v);
	} while (next_permutation(v.begin(), v.end()));

	cout << "========++++++++++=========\n";
	v.clear();/// vector 클리어

	// 내림차순으로 순열을 뽑음
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
next_permutation() 사용시 주의할 점
next_permutation()과 prev_permutation() 두가지 함수중 보통은 next_permutation()을
쓰는데 그 때 배열을 “오름차순"으로 정렬을 해서 쓰는게 중요합니다.
	*/

	// 이 경우는 모든 경우가 출력이 되지않는다.
	//이는 next_permutation() 이라는 함수가 해당 배열의 그 “다음번째 순열"을
	//만들어내는 함수이기 때문에 그렇습니다.
	cout << "정렬되어있지 않은 배열기반\n";
	int b[] = { 1,3,2 };
	do {
		for (int i : b)cout << i << " ";
		cout << endl;
	} while (next_permutation(b, b + 3));
	cout << "정렬된 배열기반\n";
	int c[] = { 1,2,3 };
	do {
		for (int i : c)cout << i << " ";
		cout << endl;
	} while (next_permutation(c, c + 3));

	sort(v.begin(), v.end());

	cout << "-----------------------------------\n";

	makePermutation(3, 3, 0);

	///////////////////////////////////////////////
	// 재귀함수는 정의 단계에서 자신을 재참조하는 함수
	// 전달되는 상태인 매개변수가 달라질뿐 똑같은 일을 하는 함수
	// 큰 문제를 작은 부분문제로 나눠서 풀 때 사용함

	// 반드시 기저조건을 써야함.
	// 싸이클이 있다면 쓰면 안됨
	// 반복문으로 될것같으면 반복문으로 처리하자
	cout << fibo(n) << endl;

	return 0;
}