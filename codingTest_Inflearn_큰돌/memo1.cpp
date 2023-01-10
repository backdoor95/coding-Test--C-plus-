#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double a = 1.23456789;
int main() {

	string a = "love is";
	a += " pain!";
	cout << a << " : " << a.size() << "\n";
	a.pop_back();//한글자 지움
	cout << a << " : " << a.size() << "\n";
	cout << char(*a.begin()) << "\n";// l 출력
	cout << char(*(a.end() - 1)) << "\n"; // n출력
	//cout << char(*(a.end())) << "\n"; // a.end()는 메모리 밖을 참조하므로 error발생, 즉 마지막 원소 그 다음을 가리키는 이터레이터를 반환
	a.insert(0, "test");
	cout << a << " : " << a.size() << "\n";
	a.insert(8, "test");
	cout << a << " : " << a.size() << "\n";
	a.erase(0, 4);// 0, 1,2,3 문자 지움
	cout << a << " : " << a.size() << "\n";
	auto it = a.find("love");// 찾았으면 0 반환, 못 찾았으면 최대값 반환
	cout << "it의 값 =" << it<<'\n';
	if (it != string::npos) {
		cout << "포함되어 있다." << '\n';
	}
	cout << "it의 값 =" << it << '\n';
	cout << "string::npos 값 = " << string::npos << '\n';
	cout << "a = " << a << '\n';
	cout << a.substr(4,4) << "\n";// 1번 파라미터는 시작하는 인덱스, 2번 파라미터는 1번 부터 출력할 문자개수  이때 a의 원본은 불변
	cout << "a = " << a << '\n';

	//보통 문자열에서 문자열을 더할ㄹ때 +=를 써서 문자열 또는 문자를 더함.
	//push_back();
	//begin()과 end()는 자료구조인 vector, Array, 연결리스트, Map, set에서도 존재함.

	return 0;
}