#include<bits/stdc++.h>
using namespace std;
typedef struct Point {
	int y, x;
	Point(int y, int x):y(y), x(x){}
	Point() { y = -1; x = -1; }
	/*bool operator <(const Point& a)const {
		return x > a.x;
	}*/

	// 우선순위큐에서는 커스텀 정렬을 넣을 때 반대로 넣어야함.
	bool operator < (const Point& a) const {
		return x < a.x;
	}

};
int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL); cout.tie(NULL);
	// 커스텀한 자료구조를 만들 때 보통 class와 struct를 쓴다.
	// 코테에서는 struct만 알아도 ㄱㅊ
	// 둘 차이는 struct의 매개변수는 public 이며 상속이 안됨
	// class 의 멤버변수는 private이며 상속이됨
	// priority queue
	// 우선순위 큐(priority queue)는 각 요소에 어떠한 우선순위가
	//추가로 부여되어있는 컨테이너를 말함.
	//
	/*
	우선순위 큐에서 우선순위가 높은 요소는 우선순위가 
	낮은 요소보다 먼저 제공됨
	일부 구현에서 두 요소의 우선 순위가 같으면 대기열에 포함된 순서에 따라서 제공
	다른 구현에서 동일한 우선 순위을 가진 요소의 순서는 정의되지 않은 상태로 유지
	힙은 완전이진트리로 최소힙 OR 최대힙이 있으며 삽입, 삭제, 탐색, 수정에 대해
	o(logN)의 시간복잡도를 갖습니다.
	최대 HEAP은 루트 노드에 최대값이 있고, 최소 Heap은 루트 노드에 최소값이
	있는 힙을 말함.

	*/


	// int 형 우선순위큐
	/*
	단순하게 int형 우선순위큐는 다음 코드처럼 greater 를 써서 오름차순
	less를 써서 내림차순으로 바꿀 수 있다. 기본값은 내림차순이라 단순하게 priority_queue<타입>을
	쓰면 해당 타입에 대한 내림차순으로 설정됨
	*/
	priority_queue<int, vector<int>, greater<int>>pq;
	priority_queue<int> pq2;// 따로 설정 안하면 내림차순
	priority_queue<int, vector<int>, less<int>> pq3;// 내림차순

	for (int i = 5; i >= 1; i--) {
		pq.push(i);
		pq2.push(i);
		pq3.push(i);
	}
	while (pq.size()) {
		cout << pq.top() << " : " << pq2.top() << " : " << pq3.top() << endl;
		pq.pop(); pq2.pop(); pq3.pop();
	}


	// 구조체를 담은 우선순위큐
	priority_queue<Point> pq4;
	pq4.push({ 1,1 });
	pq4.push({ 2,2 });
	pq4.push({ 3,3 });
	pq4.push({ 4,4 });
	pq4.push({ 5,5 });
	pq4.push({ 6,6 });


	cout << pq4.top().x << "\n";

	// 1이 출력이된다.

	// 핵심은 우선순위큐에 커스텀 정렬을 넣을 때 반대로 넣어야 하는 특징 떄문
	// 즉, 우선순위큐에 커스텀 정렬을 넣을 때는 반대
	// 가장 최소를 끄집어 내고 싶은 로직이면 '>'
	// 가장 최대를 끄집어 내고 싶은 로직이면 '<'





	return 0;
}