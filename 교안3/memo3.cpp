#include<bits/stdc++.h>
using namespace std;
pair<int, int> pi;// 2가지 담을때
tuple<int, int, int> tl;// 3가지 이상 담을때
int a, b, c;
int k;
int main() {
	pi = { 1,2 };// pair 만드는 법 1.
	// pi = make_pair(1,2); // pair 만드는 법 2. 위에 기능을 한다. 이것도 가능 
	tl = make_tuple(4, 5, 6);
	tie(a, b) = pi;// tie는 tuple로 부터 값을 끄집어낼때 사용
	cout << pi.first<<"\t" << pi.second<<endl;
	cout << get<0>(tl) << "\t" << get<1>(tl) << "\t" << get<2>(tl)<<endl;
	// get을 통해서 tuple 값을 빼낸다.

	//double은 double 끼리 나누어야함. int 를 double로 나누면 double 타입의 결과값이 나옴

	//double은  double 끼리 , int는 int 끼리

	cout << &k << endl;




	return 0;
}