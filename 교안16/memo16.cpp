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

	// 2���� �迭
	// ���͸� �̿��� 2���� �迭�� ����� 3���� ����̴�.
	// ���͸� ��ø�ؼ� �����.
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
	// �����迭, ������ �Ҷ�, ũ�⸦ �����ؼ� ������ ������.
	// ���ӵ� �޸� ������ ��ġ�� ���� Ÿ���� ��ҵ��� �����̴�.
	// ���� �ε����� ������� ���������� ����
	// �ߺ��� �����.
	// �����ϴ� ����� 2����
	// 1. c style
	// ex ) int a[10];
	//2. std style
	// ex) array<int, 10> a;
	// int a[3];
	// int b[] = { 1,2,3,4, };
	// b[4] �� ���� �ǹ̸� ������.

	// 2���� �迭�� Ž���� ������ �ϴ� ��

	//for (int i = 0; i < mxy; i++) {
	//	for (int j = 0; j < mxx; j++)
	//		a[i][j] = (i + j);
	//}
	/*
	ù��° ���� >> 2��° ���� ������ Ž���ϴ°� ������ �����ϴ�. �̴� C++���� ĳ�ø�
	ù��° ����(���⼭�� y�� �ǰ���?) �� �������� �ϱ� ������ ĳ�ð��� ȿ���� ������
	Ž���� �ϴ��� ������ ���Ѱ��� ���ݽô�.
	*/
	// LIST
	// ���Ḯ��Ʈ (linked list) 
	// ��Ұ� ������ �޸� ��ġ�� ������� �ʴ� ���� ������ ����
	// ��ҵ��� next, prev ��� �����ͷ� ����Ǿ� �̷������ , �ߺ� ���
	// ���Ḯ��Ʈ�� �̱ۿ��Ḯ��Ʈ, ���߿��Ḯ��Ʈ, �������Ḯ��Ʈ 3����
	
	// �̱ۿ��Ḯ��Ʈ�� next �����͹ۿ� �������� ������ �� �������� ������ ����
	
	// ���߿��Ḯ��Ʈ�� prev, next 2���� ������ ��������� �����Ͱ� �����

	// �������Ḯ��Ʈ�� ������ ���� ù��° ��尡 ����Ǿ� ���� ������.
	// �̱ۿ��Ḯ��Ʈ ���� ���߿��Ḯ��Ʈ�� �̷���� 2���� Ÿ���� �������Ḯ��Ʈ
	// 1. �����̱ۿ��Ḯ��Ʈ, 2. �������߿��Ḯ��Ʈ

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