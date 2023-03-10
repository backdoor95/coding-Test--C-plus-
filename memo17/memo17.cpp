#include <bits/stdc++.h>
#include<iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;
//list<int> a;
map<string, int> mp;

string a[] = { "zoo", "yang", "park" };
void print(list <int> a) {
	for (auto it : a) cout << it << " ";
	cout << '\n';
}
int main() {
	////push_front(value) = 리스트의 앞에서 부터 value를 넣습니다.
	//for (int i = 1; i <= 3; i++)a.push_back(i);
	////push_back(value) = 리스트의 뒤에서 부터 value를 넣습니다.
	//for (int i = 1; i <= 3; i++)a.push_front(i);
	//auto it = a.begin(); it++;
	////insert = 요소를 몇번째에 삽입합니다.
	//// insert(idx, value)
	//// iterator insert (const_iterator position, const value_type& val);
	//a.insert(it, 1000);
	//print(a);
	//it = a.begin(); it++;
	//// erase(idx) 리스트의 idx번째 요소를 삭제
	////iterator erase(const_iterator position);
	//// insert, erase 는 인자로 이터레이터를 인자로 넘겨준다.
	//a.erase(it);
	//print(a);
	//// 첫번째 요소를 지움
	//a.pop_front();
	//// 맨끝 요소를 지운다.
	//a.pop_back();
	//print(a);
	//// front   =  맨 앞 요소를 참조한다.
	//// back =  맨 뒤 요소를 참조한다.
	//cout << a.front() << " : " << a.back() << '\n';
	//a.clear();

	// 랜덤접근(random access)과 순차적 접근(sequential access)
	// [직접 접근==랜덤접근]은 동일한 시간에 배열과 같은
	// 순차적인 데이터가 있을때 임의의 인덱스에 해당하는
	// 데이터에 접근할 수 있는 기능이다.
	// 이는 데이터를 저장된 순서대로 검색해야 하는 순차적 접근과는 반대

	//vector, Array와 같은 배열은 랜덤접근이 가능해서 k번쨰 요소에 접근할 때, O(1)이 걸림
	// 연결리스트, 스택, 큐는 순차적 접근만이 가능해서 k번째 요소에 접근할 때 o(k)가 걸림
	// 배열과 연결리스트 비교
	// 보통 배열과 연결리스틀 많이 비교한다.
	// 배열은 연속된 메모리 공간에 데이터를 저장,연결리스트는 연속되지 않는 메모리 공간에 데이터 저장
	// 배열은 삽입과 삭제에 o(n)이 걸림, 참조에서는 o(1) 
	// 연결리스트는 삽입과 삭제에 o(1), 참조에서는 o(n)
	// 결론 = 데이터추가와 삭제를 많이 하는 것은 연결리스트, 참조를 많이
	// 하는 것은 배열로 하는 것이 좋다.

	// map 
	// map은 고유한 키를 기반으로 키 - 값( key - value) 쌍으로 이루어짐
	// 정렬이 되어있다. 삽입 할때마다 자동으로 정렬이된다.
	// 레드 - 블랙 트리로 구현되어 있다.
	// 삽입, 삭제, 수정 , 탐색이 o(logN)의 시간복잡도를 가진다.
	// 고유한 key 값을 가지기 때문에 키 값에 중복된 값이 들어갈수없다.
	// 자동으로 오름차순 정렬이 된다. 
	// 넣은 순서대로 map을 탐색할 수 있는 것이 아닌 아스키코드 순으로 정렬된 값들을 기반으로 탐색함.
	// [ ] 연산자로 해당 키로 직접 참조할 수 있다.
	// map의 key와 value는 string이나 int 뿐만 아니라 다양한 값이 들어갈 수 있다.
	// 레드블랙트리 : 균형 이진 검색 트리이며 삽입, 삭제, 수정, 탐색에 o(logN)
	// 
	// 


	//insert({key, value})
	//map<string, int>::iterator it
	// map에다 {key, value}를 집어 넣습니다.
	for (int i = 0; i < 3; i++) {
		mp.insert({ a[i], i + 1 });
		mp[a[i]] = i + 1;
	}
	// [key] = value 
	// 대괄호 []를 통해 key에 해당하는 value를 할당함.

	// [key] 
	// 대괄호[]를 통해 key를 기반으로 map에 있는 요소를 참조




	// map에 해당 키가 없다면 0으로 초기화 되어 할당됨(int의 경우)
	// 만약 mp에 해당 키가 없는지 확인하고 싶고
	// 초기값으로 0으로 할당되지 않아야 되는 상황이라면
	// find를 써야함.
	cout << mp["juno"] << "\n";

	// [key] = value 
	// 대괄호 []를 통해 key에 해당하는 value를 할당함.
	mp["juno"] = 8;
	// map에 있는 요소들의 개수를 반환함.
	cout << mp.size() << endl;

	auto it2 = mp.find("juno");
	if (it2 == mp.end())
		cout << "정보 없음!!\n";
	else
		cout << " 찾았다!!" << endl;
	// key 의 자료형에 맞춰서 넣어줘야한다. 
	// 내가 했던 실수는 그냥 인덱스로 판단해서 숫자를 넣어서 빨간줄뜸

	cout << mp["BBangSSang"] << endl;
	
	// erase(key) 해당 키에 해당하는 요소를 지운다.
	mp.erase("juno");

	cout << mp.size() << endl;


	// 
	auto it = mp.find("juno");
	
	if (it == mp.end())
		cout << "못찾겠다 !" << endl;

	mp["juno"] = 100;
	//find(key)
	// map에서 해당 key를 가진 요소를 찾아 해당 이터레이터를 반환함.
	// 만약 못찾을 경우 mp.end() 해당 map의 end() 이터레이터를 반환함.

	it = mp.find("juno");
	if (it != mp.end())
		cout << (*it).first << " : " << (*it).second << "\n";

	// 범위기반 for루프로map에 있는 요소들을 순회합니다.
	// map을 순회할 때는 key-> first, value -> second로 참조가능
	/*
	for(auto it : mp)
	범위기반 for루프로 map에 있는 요소들을 순회합니다. map을 순회할 때는 key는 first,
	value는 second로 참조가 가능합니다.
	*/
	// map은 이터레이터로 순회할 수 있다.

	for (auto it : mp) {
		cout << (it).first << " : " << (it).second << endl;
	}
	// 
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
	//	cout << *it << ' ';
	//}
	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << (*it).first << " : " << (*it).second << endl;
	}// 이렇게 사용하려면 참조를 해야함.

	for (auto it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " : " << (*it).second << endl;
	}


	// map에 있는 요소들을 다 제거합니다.
	mp.clear();


	//맵을 쓸 때 주의할 점
	map<int, int> m1;
	map<string, string> m2;
	//
	// 
	//map 쓸때 주의점
	// map의 경우 해당 인덱스에 참조만 해도 맵에 값이 생기며
	// 맵의 요소가 생긴다..int형 같은 경우 0, string 은 빈문자열로 들어감
	// 
	//
	cout << m1[1] << "\n";
	cout << m2["kkkkkkkkk"] << '\n';
	cout << "11111111111111111111111\n";
	for (auto i : m1)cout << i.first << " " << i.second << endl;
	cout << endl;
	cout << "2222222222222222222222\n";
	for (auto i : m2)cout << i.first << " " << i.second << endl;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// map에 요소가 있는지 없는지를 확인하고 맵에 데이터를 할당하는 부분의 
	// 로직을 다음과 같이 구축할 수 있습니다.
	if (m1[1] == 0) {
		m1[1] = 2;
	}

	for (auto i : m1)cout << i.first << " " << i.second << endl;
	cout << endl;
	/*
	다만 앞의 코드는 문제에서 해당 키값에 0이 아닌 값이 들어갈 때 활용이 가능합니다. 만약
	문제에서 키에 0이 들어가는 경우 앞의 코드는 활용이 불가능합니다.
	이미 if문 안에 mp[1] == 0을 해버린 순간 이미 mp[1] = 0이 할당되어버리기 때문이죠.
	*/


	// 문제에서 map의 key - value 에서 값에 0이 들어가는 경우
	// 아래와 같이 쓰는것이 좋다.
	if (m1.find(1) == m1.end()) {
		m1[1] = 2;
	}
	cout << endl;
	for (auto i : m1)cout << i.first << " " << i.second << endl;

	//unordered_map
	// map은 정렬이 되는 방면, unordered_map은 정렬이 되지않는 map
	/*
	map과 unordered_map을 비교하면 다음과 같습니다.
		- map : 정렬이 됨 / 레드블랙트리기반 / 탐색, 삽입, 삭제에 O(logN)이 걸림
		- unordered_map : 정렬이 안됨 / 해시테이블 기반 / 탐색, 삽입, 삭제에 평균적으로
			O(1), 가장 최악의 경우 O(N)
	*/
	unordered_map<string, int> umap;

	umap["bbb"] = 2;
	umap["kkkk"] = 3;
	umap["wwww"] = 5;
	for (auto it : umap) {
		cout << it.first << " : " << it.second << "\n";
	}
	return 0;
}