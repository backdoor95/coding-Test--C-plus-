#include<bits/stdc++.h>
using namespace std;
// 정수론 
// 최대공약수와 최소공배수

int gcd(int a, int b) {// 최대공약수 Greatest Common Divisor, GCD
	if (a == 0)return b;
	return gcd(b % a, a);
}
int lcm(int a, int b) {//최소공배수 least common multiple = lcm
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


	// 모듈러 연산
	/*
	0. a ≡ b mod n과 b ≡ c mod n 은 a ≡ c mod n 을 의미
1. [(a mod n)+(b mod n)] mod n = (a+b) mod n
2. [(a mod n)-(b mod n)] mod n = (a-b) mod n
3. [(a mod n)*(b mod n)] mod n = (a*b) mod n
	*/

	// 에라토스테네스의 체
	// 소수가 아닌 값들에 대한 불리언 배열을 만들어 소수만을 걸러낼 수 있는 방법
	
	for (int i = 1; i <= 20; i++) {
		if (check(i)) {
			cout << i << "는 소수입니다\n";
		}
	}
	// 승수 구하기
	// pow 함수는 double형 인자를 2개를 받고, 기본적으로 double을 반환함. 따라서 int형으로 사용하고 
	// 싶으면 (int) 로 형변환해야함
	int q = 4;
	int pow_2 = (int)pow(2, q);
	cout << pow_2 << endl;

	// 제곱근 구하기
	/*
	이는 기본적으로 double형을 매개변수로 받고 double형을 리턴하기 때문에 int로 쓸 거면 int
형변환을 꼭 해주어야 합니다.
	*/
	int n = 16;
	int ret = (int)sqrt(n);
	cout << ret << endl;



	return 0;
}