#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
	// unique()
	// �������� �ִ� ��� �� �ߺ��Ǵ� ��Ҹ� �����ϰ�
	//�ߺ����� �ʴ� ��ҵ�� �տ������� ���ĵǾ� ä��

	for (char i = 1; i <= 5; i++) {
		v.push_back(i);
		v.push_back(i);
	}

	for (int i = 5; i >= 1; i--){
		v.push_back(i);
		v.push_back(i);
	}
	cout << *v.end() << endl;
	sort(v.begin(), v.end());// unique�Լ��� ������ ���ĸ� �������.

	for (int i : v) cout << i << " ";
	cout << endl;

	auto it = unique(v.begin(), v.end());
	cout << "&*it = "<<& *it << endl;
	cout << "&*v.begin() = " << &*v.begin() << endl;
	
	cout << "*it = "<<*it << endl;

	for (vector<int>::iterator it2 = v.begin(); it2 != it; it2++) {
		cout << &*it2 << ' ';
	}
	cout<<endl;
	cout << "auto ��� ����غ���" << endl;
	for (auto it3 = v.begin(); it3 != it; it3++) {
		cout << &*it3 << ' ';
	}
	cout << endl;
	cout << "it - v.begin() = "<<it - v.begin() << endl;
	cout << "*(v.begin()+3) = " << *(v.begin() + 3) << endl;
	for (int i : v) cout << i << " ";

	cout << endl;

	v.erase(it, v.end());// �� �κ� ����
	for (int i : v) { cout << i << ' '; }

}