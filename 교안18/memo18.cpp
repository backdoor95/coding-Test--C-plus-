#include<bits/stdc++.h>
using namespace std;
int main() {
	// set�� ������ ��Ҹ��� �����ϴ� �����̳��̴�.
	// �ߺ��� ������� �ʴ´�.
	// {key, value}�� ������� �ʾƵ� ��
	// pair, int���� ���� �־ ���� �� �ִ�.
	// �ߺ��� ���� ���� �Ǹ� map�� ���� �ڵ� ���ĵ�
	// �޼���� map�� ����.
	//

	set<pair<string, int>>st;
	st.insert({ "test", 8 });
	st.insert({ "test", 9 });
	st.insert({ "test", 9 });
	st.insert({ "Qest", 8 });
	st.insert({ "test", 8 });
	cout << st.size() << endl;
	set<int> st2;
	st2.insert(2);
	st2.insert(3);
	st2.insert(4);
	st2.insert(2);
	cout << st2.size() << endl;
	for (auto it : st2) cout << it << endl;

	for (auto it : st)cout << it.first<<" "<<it.second << endl;

	// multiset�� �ߺ��Ǵ� ��ҵ� ������� �� �ִ� �ڷᱸ����
	// key, value ���·� ������� �ʿ䵵 ���� ������ �ڵ������� ���ĵ˴ϴ�.

	multiset<int> ms;

	for (int i = 5; i >= 1; i--) {
		ms.insert(i);
		ms.insert(i);
	}

	for (int it : ms)cout << it << " ";
	cout << "\n";

	return 0;
}