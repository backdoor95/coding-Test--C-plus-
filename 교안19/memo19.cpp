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
	// 1���� = x�� ��������
	// 2���� = y�� ��������
	// 3���� = z�� ��������
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
	// stack�� ���� ���������� �� �����Ͱ� ���� ù ��°�� ������ 
	// ������ ���Լ����̴�.
	// ������� �Լ�, �˰��� ���
	//�� ������ �湮 ��Ͽ� ����
	// ����, ������ o(1), Ž�� o(n) 
	//��������
	stack<string> stk;
	stack<int> stk2;

//	stk.push("qqqq");
	stk2.push(1);
	//push(value) : �ش�value�� ���ÿ� �߰�
	stk.push("��");
	stk.push("��");
	stk.push("��");
	stk.push("ȭ");
	stk.push("��");
	stk.push("��");
	// size() : ������ ũ��
	while (stk.size()) {
		// top() : ���� �������� �ִ� ��Ҹ� ����
		cout << stk.top() << "\n";
		// pop() : ���� �������� �߰��� ��Ҹ� ����
		stk.pop();
	}
	// ������ �ַ� ���ڿ� ����, �Ƹ��ٿ� ��ȣ�����, ¦ã�� Ű���带 �������
	// �̷���� �������� ����
	// ��������	 "�������� �ʰ�"��� ������ ���¸� ������ ����ؾ� �ϴ� ���� �ƴұ� �����ؾ���
	//push(value) : �ش�value�� ���ÿ� �߰�
	// pop() : ���� �������� �߰��� ��Ҹ� ����
	// top() : ���� �������� �ִ� ��Ҹ� ����
	// size() : ������ ũ��


	// queue : ť�� ���� ������� �����Ͱ� ��������
	// ���Լ���, ����&���� o(1), Ž�� o(n)

	queue<int> q;
	// push : value�� ť�� �߰��մϴ�.
	for (int i = 1; i <= 10; i++) q.push(i);
	while (q.size()) {// ť�� ũ��
		cout << q.front() << ' ';// ���� �տ� �ִ� ��� ����
		q.pop();// ���� �տ� �ִ� ��Ҹ� ����
	}
	cout << endl;

	//
	//deque : �ռ� ������ queue�� �տ����� �����
	// ������ deque�� �յڷ� ����, ����, ���� ����
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

	/////////////struct ����ü/////////////

	/*
	Ŀ������ �ڷᱸ���� �ǹ���. Ŀ�����ϰ� ������ �߰��ϰ�
	�Ͱų� �������� �������� ���� ���� ....
	*/

	Ralo ralo = { 1,1,1,1,1 };
	print(ralo);
	vector<Ralo>ret;
	ret.push_back({ 1,2,3,4,5 });
	ret.push_back({ 1,2,3,4,6 });
	ret.push_back({});// ���� �־����� ������ 0���� �ʱ�ȭ
	ret.push_back({ 1,3 });// char, string ���� ����������
	// ���� ������� �ʰ� �Ǹ� ���ڿ��� ��.

	for (Ralo ralo : ret) {
		print(ralo);
	}

	



}