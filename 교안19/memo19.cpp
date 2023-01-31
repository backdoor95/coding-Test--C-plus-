#include<bits/stdc++.h>
using namespace std;

typedef struct Ralo {
	int a, b;
	double c, d, e;
}Ralo;
void print(Ralo ralo) {
	cout << ralo.a << " " << ralo.b << " " << ralo.c << " " << ralo.d << " " << ralo.e << endl;
}
struct Point3 {
	// 1순위 = x를 오름차순
	// 2순위 = y가 내림차순
	// 3순위 = z가 오름차순
	int y, x, z;
	Point3(int y, int x, int z) : y(y), x(x), z(z){}
//	Point3(int y, int x, int z) : y(y), x(x), z(z){}
	Point3() { y = -1; x = -1; z = -1; }
	bool operator< (const Point3& a) const {
		if (x == a.x) {
			if (y == a.y)return z < a.z;
			return y > a.y;
		}
		return x < a.x;
	}
};
struct Point2 {
	int y, x;
};
bool cmp2(const Point& a, const Point& b) {
	return a.x > b.x;
}
typedef struct Point {
	int y, x;
	Point() { y = -1; x = -1; }
	//Point(int y, int x) {
	//	this->x = x;
	//	this->y = y;
	//}
	Point(int y, int x): y(y), x(x){}
	bool operator < (const Point& a) const {
		if (x == a.x)return y < a.y;
		return x < a.x;
	}
}Point;
int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL); cout.tie(NULL);

	ios_base::sync_with_stdio;
	cin.tie(NULL); cout.tie(NULL);


	ios_base::sync_with_stdio;
	cin.tie(NULL); cout.tie(NULL);
	// stack은 가장 마지막으로 들어간 데이터가 가장 첫 번째로 나오는 
	// 성질인 후입선출이다.
	// 재귀적인 함수, 알고리즘에 사용
	//웹 브라우저 방문 기록에 쓰임
	// 삽입, 삭제에 o(1), 탐색 o(n) 
	//선입후출
	stack<string> stk;
	stack<int> stk2;

//	stk.push("qqqq");
	stk2.push(1);
	//push(value) : 해당value를 스택에 추가
	stk.push("엄");
	stk.push("준");
	stk.push("식");
	stk.push("화");
	stk.push("이");
	stk.push("팅");
	// size() : 스택의 크기
	while (stk.size()) {
		// top() : 가장 마지막에 있는 요소를 참조
		cout << stk.top() << "\n";
		// pop() : 가장 마지막에 추가한 요소를 지움
		stk.pop();
	}
	// 스택은 주로 문자열 폭발, 아름다운 괄호만들기, 짝찾기 키워드를 기반으로
	// 이루어진 문제에서 사용됨
	// 문제에서	 "교차하지 않고"라는 문장이 나온면 스택을 사용해야 하는 것은 아닐까 염두해야함
	//push(value) : 해당value를 스택에 추가
	// pop() : 가장 마지막에 추가한 요소를 지움
	// top() : 가장 마지막에 있는 요소를 참조
	// size() : 스택의 크기


	// queue : 큐는 먼저 집어넣은 데이터가 먼저나옴
	// 선입선출, 삽입&삭제 o(1), 탐색 o(n)

	queue<int> q;
	// push : value를 큐에 추가합니다.
	for (int i = 1; i <= 10; i++) q.push(i);
	while (q.size()) {// 큐의 크기
		cout << q.front() << ' ';// 가장 앞에 있는 요소 참조
		q.pop();// 가장 앞에 있는 요소를 제거
	}
	cout << endl;

	//
	//deque : 앞서 설명한 queue는 앞에서만 끄집어냄
	// 하지만 deque는 앞뒤로 삽입, 삭제, 참조 가능
	//

	deque<int> dq;
	dq.push_front(1);
	dq.push_back(2);
	dq.push_back(3);

	cout << dq.front() << endl;
	cout << dq.back() << endl;
	cout << dq.size() << endl;
	dq.pop_back();
	dq.pop_front();
	cout << dq.size() << endl;

	/////////////struct 구조체/////////////

	/*
	커스텀한 자료구조를 의미함. 커스텀하게 정렬을 추가하고
	싶거나 문제에서 여러개의 변수 예를 ....
	*/

	Ralo ralo = { 1,1,1,1,1 };
	print(ralo);
	vector<Ralo>ret;
	ret.push_back({ 1,2,3,4,5 });
	ret.push_back({ 1,2,3,4,6 });
	ret.push_back({});// 값을 넣어주지 않으면 0으로 초기화
	ret.push_back({ 1,3 });// char, string 으로 선언했을때
	// 값을 집어넣지 않게 되면 빈문자열이 들어감.

	for (Ralo ralo : ret) {
		print(ralo);
	}

	



}