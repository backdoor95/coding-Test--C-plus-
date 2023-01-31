#include<bits/stdc++.h>
using namespace std;
typedef struct Point {
	int y, x;
	Point(int y, int x):y(y), x(x){}
	Point() { y = -1; x = -1; }
	/*bool operator <(const Point& a)const {
		return x > a.x;
	}*/

	// �켱����ť������ Ŀ���� ������ ���� �� �ݴ�� �־����.
	bool operator < (const Point& a) const {
		return x < a.x;
	}

};
int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL); cout.tie(NULL);
	// Ŀ������ �ڷᱸ���� ���� �� ���� class�� struct�� ����.
	// ���׿����� struct�� �˾Ƶ� ����
	// �� ���̴� struct�� �Ű������� public �̸� ����� �ȵ�
	// class �� ��������� private�̸� ����̵�
	// priority queue
	// �켱���� ť(priority queue)�� �� ��ҿ� ��� �켱������
	//�߰��� �ο��Ǿ��ִ� �����̳ʸ� ����.
	//
	/*
	�켱���� ť���� �켱������ ���� ��Ҵ� �켱������ 
	���� ��Һ��� ���� ������
	�Ϻ� �������� �� ����� �켱 ������ ������ ��⿭�� ���Ե� ������ ���� ����
	�ٸ� �������� ������ �켱 ������ ���� ����� ������ ���ǵ��� ���� ���·� ����
	���� ��������Ʈ���� �ּ��� OR �ִ����� ������ ����, ����, Ž��, ������ ����
	o(logN)�� �ð����⵵�� �����ϴ�.
	�ִ� HEAP�� ��Ʈ ��忡 �ִ밪�� �ְ�, �ּ� Heap�� ��Ʈ ��忡 �ּҰ���
	�ִ� ���� ����.

	*/


	// int �� �켱����ť
	/*
	�ܼ��ϰ� int�� �켱����ť�� ���� �ڵ�ó�� greater �� �Ἥ ��������
	less�� �Ἥ ������������ �ٲ� �� �ִ�. �⺻���� ���������̶� �ܼ��ϰ� priority_queue<Ÿ��>��
	���� �ش� Ÿ�Կ� ���� ������������ ������
	*/
	priority_queue<int, vector<int>, greater<int>>pq;
	priority_queue<int> pq2;// ���� ���� ���ϸ� ��������
	priority_queue<int, vector<int>, less<int>> pq3;// ��������

	for (int i = 5; i >= 1; i--) {
		pq.push(i);
		pq2.push(i);
		pq3.push(i);
	}
	while (pq.size()) {
		cout << pq.top() << " : " << pq2.top() << " : " << pq3.top() << endl;
		pq.pop(); pq2.pop(); pq3.pop();
	}


	// ����ü�� ���� �켱����ť
	priority_queue<Point> pq4;
	pq4.push({ 1,1 });
	pq4.push({ 2,2 });
	pq4.push({ 3,3 });
	pq4.push({ 4,4 });
	pq4.push({ 5,5 });
	pq4.push({ 6,6 });


	cout << pq4.top().x << "\n";

	// 1�� ����̵ȴ�.

	// �ٽ��� �켱����ť�� Ŀ���� ������ ���� �� �ݴ�� �־�� �ϴ� Ư¡ ����
	// ��, �켱����ť�� Ŀ���� ������ ���� ���� �ݴ�
	// ���� �ּҸ� ������ ���� ���� �����̸� '>'
	// ���� �ִ븦 ������ ���� ���� �����̸� '<'





	return 0;
}