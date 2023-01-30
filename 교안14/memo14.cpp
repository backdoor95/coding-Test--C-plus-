#include<bits/stdc++.h>	
using namespace std;
int main() {

	//vector<int>	a;
	//for (int i = 1; i <= 3; i++)a.push_back(i);
	//for (int i = 5; i <= 10; i++)a.push_back(i);
	//cout <<"&*a.begin() = "<< & *a.begin() << endl;
	//cout << "*a.begin() = " << *a.begin() << endl;
	////lower_bound , upper_bound는 이터레이터 반환

	//cout << *lower_bound(a.begin(), a.end(), 4) << endl;
	//cout << lower_bound(a.begin(), a.end(), 4) - a.begin() << endl;

	//cout << "=================================" << '\n';
	//vector<int> v;
	//for (int i = 2; i <= 5; i++)v.push_back(i);
	//v.push_back(7);
	//// 2 3 4 5 7
	//// 찾으려는 값이 이상인 지점의 첫번째 지점을 반환함.
	//cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
	//cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
	//cout << upper_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
	//cout << lower_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
	//cout << upper_bound(v.begin(), v.end(), 0) - v.begin() << "\n";
	//cout << lower_bound(v.begin(), v.end(), 0) - v.begin() << "\n";


	//lower_bound(), upper_bound()는 꼭 정렬된 배열에서 써야함.
	vector<int> a{ 1,2,3,3,3,4 };
	cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << endl;
	//cout << lower_bound(a.begin(), a.end(), 3) << endl;// 이렇게는 못 사용함.
	// [tip !!] = lower_bound가 리턴하는 값은 타깃이 처음 나타는 인덱스 값이다.
	//2 return 2는 인덱스임. 즉 3번째에  3이 나타난다는 의미

	cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << endl;
	// upper_bound가 리턴하는 값은 배열의 뒤에서 부터 찾았을때,
	// 타깃 인덱스의 '그 다음 인덱스' 를 반환함.
	//5 return 5는 인덱스임. 즉 5번째에 3이 나타난다는 의미 ( 인덱스 4에서 3값이 나옴)
	// 배열를 뒤에서 부터 서치했을때, 처음 나타나는 타깃의 인덱스의 그 다음값을 반환


	cout << &*lower_bound(a.begin(), a.end(), 3) << '\n';
	cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << endl;
	//cout << &*a.end() << "\n";
	cout << &*(a.begin() + 1) << "\n";

	vector<int> b{ 1,2,3,3,4,100 };
	cout << *lower_bound(b.begin(), b.end(), 100) << endl;
	//cout << *upper_bound(b.begin(), b.end(), 100) << endl;// 이렇게 하면 에러가 난다. end()는 역참조 불가
	auto ub = upper_bound(b.begin(), b.end(), 100);
	auto lb = lower_bound(b.begin(), b.end(), 100);
	cout << ub - b.begin() << endl;
	cout << lb - b.begin() << endl;

	vector<int> c{ 1,2,3,3,3,4 };
	cout << &*lower_bound(a.begin(), a.end(), 3) - &*a.begin() << endl;

	vector<int> d{ 0,0,0,0 };
	cout << &*(b.begin() + 3) - &*b.begin() << endl;
	// 주소값끼리 - 하게 되면 해당 주소값에서
	// 몇번쨰에 이 요소가 들어있음을 반환하게됨.
	// 배열은 순회가 가능한 컨테이너임.

	vector<int> e{ 1,2,3,3,3,3,4,100 };
	// 이를 통해서 다음 코드처럼 해당 요소를 출력이 가능함.
	cout << *lower_bound(e.begin(), e.end(), 100) << endl;

	// 3이 몇개 들어있는지 확인가능
	cout << upper_bound(e.begin(), e.end(), 3) - lower_bound(e.begin(), e.end(), 3) << endl;

	cout << "=====================\n";

	// 원하는 값을 찾지 못했을때, 그 근방 지점을 반환
	vector<int> f;
	for (int i = 2; i <= 5; i++)f.push_back(i);
	f.push_back(7);

	// target 값이 없으면  근방 지점을 반환하게 되는데
	// 이럴경우 lower_bound, upper_bound는 같은 값을 반환함.
	cout << upper_bound(f.begin(), f.end(), 6) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 에서 근방지점인 4번째 (7보다 6이 더 작으므로)
	cout << lower_bound(f.begin(), f.end(), 6) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 에서 근방지점인 4번째 (7보다 6이 더 작으므로)
	cout << upper_bound(f.begin(), f.end(), 9) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 에서 근방지점인 5번째(7보다 9가 더 크므로)

	cout << lower_bound(f.begin(), f.end(), 9) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 에서 근방지점인 5번째(7보다 9가 더 크므로)
	cout << upper_bound(f.begin(), f.end(), 0) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 에서 근방지점인 0번째(0보다 2가 더 크므로)
	cout << lower_bound(f.begin(), f.end(), 0) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 에서 근방지점인 0번째(0보다 2가 더 크므로)

	cout << upper_bound(f.begin(), f.end(), 2) - f.begin() << "\n";

	cout << lower_bound(f.begin(), f.end(), 2) - f.begin() <<"\n";


	return 0;
}