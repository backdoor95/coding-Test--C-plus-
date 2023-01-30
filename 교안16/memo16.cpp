#include<bits/stdc++.h>	
using namespace std;
const int mxy = 3;
const int mxx = 4;
//int a[mxy][mxx];
void print(list<int> a) {
	for (auto it : a) cout << it << " ";
	cout << endl;
}
//class Node {
//public:
//	int data;
//	Node* next;
//	Node() {
//		data = 0;
//		next = NULL;
//	}
//	Node(int data) {
//		this->data = data;
//		this->next = NULL;
//	}
//};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2차원 배열
	// 벡터를 이용한 2차원 배열을 만드는 3가지 방법이다.
	// 벡터를 중첩해서 만든다.
	//vector<vector<int>> v;
	//vector<vector<int>>v2(10, vector<int>(10, 0));
	//vector<int> v3[10];

	//for (vector<int> v : v2) {
	//	for (int i : v)cout << i << ' ';
	//	cout << endl;
	//}

	//for (int i = 0; i < 10; i++) {
	//	vector<int> vv;
	//	v.push_back(vv);
	//}

	// Array
	// 정적배열, 선언을 할때, 크기를 설정해서 연산을 진행함.
	// 연속된 메모리 공간에 위치한 같은 타입의 용소들의 모음이다.
	// 숫자 인덱스를 기반으로 랜덤접근이 가능
	// 중복을 허용함.
	// 선언하는 방식은 2가지
	// 1. c style
	// ex ) int a[10];
	//2. std style
	// ex) array<int, 10> a;
	// int a[3];
	// int b[] = { 1,2,3,4, };
	// b[4] 와 같은 의미를 가진다.

	// 2차원 배열과 탐색을 빠를게 하는 팁

	//for (int i = 0; i < mxy; i++) {
	//	for (int j = 0; j < mxx; j++)
	//		a[i][j] = (i + j);
	//}
	/*
	첫번째 차원 >> 2번째 차원 순으로 탐색하는게 성능이 좋습니다. 이는 C++에서 캐시를
	첫번째 차원(여기서는 y가 되겠죠?) 를 기준으로 하기 때문에 캐시관련 효율성 때문에
	탐색을 하더라도 순서를 지켜가며 해줍시다.
	*/
	// LIST
	// 연결리스트 (linked list) 
	// 요소가 인접한 메모리 위치에 저장되지 않는 선형 데이터 구조
	// 요소들은 next, prev 라는 포인터로 연결되어 이루어지며 , 중복 허용
	// 연결리스트는 싱글연결리스트, 이중연결리스트, 원형연결리스트 3가지
	
	// 싱글연결리스트는 next 포인터밖에 존재하지 않으며 한 방향으로 데이터 연결
	
	// 이중연결리스트는 prev, next 2개의 포인터 양방향으로 데이터가 연결됨

	// 원형연결리스트는 마지막 노드와 첫번째 노드가 연결되어 원을 형성함.
	// 싱글연결리스트 도는 이중연결리스트로 이루어진 2가지 타입의 원형연결리스트
	// 1. 원형싱글연결리스트, 2. 원형이중연결리스트

	list<int> a;

	for (int i = 1; i <= 3; i++)a.push_back(i);
	for (int i = 1; i <= 3; i++)a.push_front(i);
	auto it = a.begin();
	it++;
	a.insert(it, 1000);
	print(a);

	it = a.begin(); it++;
	a.erase(it);
	print(a);
}