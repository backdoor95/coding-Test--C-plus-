#include<bits/stdc++.h>	
using namespace std;
vector<int> v;
int main() {
	for (int i = 1; i <= 10; i++)
		v.push_back(i);
	/*
	push_back() = 벡터의 뒤에서부터 요소를 더함.
	emplace_back()도 같은 기능을 하지만 시간 차이는 별로나지 않음
	*/
	for (int a : v)cout << a << " ";
	cout << '\n';
	v.pop_back();
	/*
	벡터의 맨 뒤의 요소를 지움
	*/

	for (int a : v)cout << a << " ";
	cout << '\n';

	v.erase(v.begin(), v.begin() + 3);
	/*
	iterator erase(const_iterator position);
	iterator erase(const_iterator first, const_iterator last);
	erase로 한 요소만을 지운다면, erase(위치)로 쓴다.
	[from, to) 로 지우고 싶다면, erase[from, to) 를 통해서 지운다.
	참고로 (, )은 해당 요소를 포함하지 않는 구간, [,] 는 해당 요소를 포함하는 수학적 기호

	*/

	for (int a : v)cout << a << " ";
	cout << "\n";
	// find는 vector의 메서드가 아닌 stl 함수이다. 
	// [from, to)에서 value 를 찾는다.
	// vector 내의 요소들을 찾고 싶을 때 이를 통해서 찾음.
	// O(n)의 시간복잡도를 가진다.
	auto a = find(v.begin(), v.end(), 100);
	if (a == v.end())cout << "not found" << "\n";

	//fill(from, to, value) 
	// [from, to) 구간에 value를 초기화 한다.
	fill(v.begin(), v.end(), 10);
	// 범위기반 for 루프가 추가되어
	for (int a : v)cout << a << " ";
	cout << endl;
	//clear는 벡터의 모든 요소를 지운다.
	v.clear();// 
	cout << "all clear!!\n";


	// 범위기반 for 루프가 추가되어
	for (int a : v)cout << a << " ";
	// 
	cout << endl;
	for (auto a : v)cout << a << " ";
	cout << endl;

	//for(int i=0;i<v.size();i++) 위와 같은 의미이다.
		
	for (int a : v)cout << a << " ";
	for (int i = 0; i < v.size(); i++)cout << v[i] << ' ';
	// 벡터도 배열로 접근이 가능하다.
	vector < pair<int, int> >v2;
	//for (pair<int, int> a : v2)cout << a.first << " ";


	cout << '\n';

	// vector의 정적할당 
	// vector라고 해서 무조건 크기가 0인 빈 vector를 만들어 동적할당으로 추가하는 것은 아님
	// 애초에 크기를 정해놓거나 해당 크기에 대해 어떠한 값으로 초기화
	// 해놓고 시작할 수도 있다. 
	// 5개의 요소를 담을 수 있는 vector를 선언하고 모든 값을 100으로 
	// 채운모습이다.
	vector<int> v3(5, 100);
	// v3(number, value)

	for (int a : v3)cout << a << " ";
	cout << endl;

	vector<int> v4{ 10,20,30,40,50 };
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i : v4)
		cout << i << " ";
	cout << endl;

	// 2차원 배열
	// 벡터를 이용한 2차원 배열을 만드는 3가지 방법이다.
	// 벡터를 중첩해서 만든 




	return 0;
}