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
	// 매개변수
	// 값에 의한 호출 : 매개변수의 복사본을 해당 함수 내부로 넘기는 방식
	// 
	// 참조에 의한 호출 : 참조에 의한 호출은 원본 변수의 주소를 
	// 매개변수로 함수에 전달하는 방법
	// 함수 내부에서 해당 매개변수를 변경하게 되면 실제 원본 변수에도
	// 반영이 됩니다.
	//

	int a = 1;
	int b = 2;
	int sum = add(a, b);
	cout << a << endl;
	cout << "======================================\n";
	go(v);
	for (int i : v)cout << i << endl;


	// Array의 요소 수정하기
	// Array의 요소를 수정할 때는 크기를 정하지 않은 int a[], 또는
	// 배열의 크기인 int a[3], 배열의 포인터인 int *a 를 넘겨서
	// 수정이 가능하다.
	//

	ko(k); cout << k[2] << '\n';
	ko2(k); cout << k[2] << endl;
	ko3(k); cout << k[2] << endl;

	//
	//2차원 배열 수정하기
	//

	cout << v2.size() << endl;
	cout << v3.size() << endl;
	cout << v4[0].size() << endl;




	return 0;
}