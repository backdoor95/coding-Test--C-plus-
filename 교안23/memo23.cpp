#include<bits/stdc++.h>
using namespace std;
int n = 5, k = 3, a[5] = { 1,2,3,4,5 };// 5�� �߿��� 3���� �̴´�. ��������
void print(vector<int> b) {
	for (int i : b)cout << i << " ";
	cout << endl;
}
void combi(int start, vector<int> b) {
	if (b.size() == k) {
		print(b);
		return;
	}
	for (int i = start + 1; i < n; i++) {
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
}
int main() {
	// ����
	// ���տ����� ������ ����.
	// ��͸� �̿��� ����
	vector<int>	b;
	combi(-1, b);


	//��ø for��
	// nCr : r�� ������ �����. r�� 3���� �϶�
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				cout << i << " " << j << " " << k << endl;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < j; k++) {
				cout << i << " " << j << " " << k << endl;
			}
		}
	}

	// r �� 2 , �� 2���� �̴� ���̶���?
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			cout << i << " " << j << endl;
		}
	}

	// nCr = nC(n-r)


	return 0;
}