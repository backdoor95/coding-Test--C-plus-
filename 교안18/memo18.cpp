#include<bits/stdc++.h>
using namespace std;
int main() {
	// set은 고유한 요소만을 저장하는 컨테이너이다.
	// 중복을 허용하지 않는다.
	// {key, value}로 집어넣지 않아도 됨
	// pair, int형을 집어 넣어서 만들 수 있다.
	// 중복된 값은 제거 되며 map과 같이 자동 정렬됨
	// 메서드는 map과 같다.
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

	// multiset은 중복되는 요소도 집어넣을 수 있는 자료구조임
	// key, value 형태로 집어넣을 필요도 없고 넣으면 자동적으로 정렬됩니다.

	multiset<int> ms;

	for (int i = 5; i >= 1; i--) {
		ms.insert(i);
		ms.insert(i);
	}

	for (int it : ms)cout << it << " ";
	cout << "\n";

	return 0;
}