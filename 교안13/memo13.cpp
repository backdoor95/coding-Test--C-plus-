#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>	
using namespace std;
int main() {
	vector<int> v;
	int a[5] = { 1,2,2,2,3 };

	for (int i = 0; i < 5; i++) {
		v.push_back(a[i]);
	}
	auto itEnd = v.end();
	cout << &*v.end() << endl;
	int x = 3;
	// 해당 값의 위치를 반환해준다. !!! 반환되는 것은 이터레이터이다.
	//
	// upper_bound, lower_bound
	int c = (int)(upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x));
	int f = (int)(lower_bound(v.begin(), v.end(), x) - v.begin());
	int t = (int)(upper_bound(v.begin(), v.end(), x) - v.begin());
	int f2 = *lower_bound(v.begin(), v.end(), x);

	 upper_bound(v.begin(), v.end(), x);

	printf("%d의 갯수 : %d, 시작되는 점 : %d 끝나는 점 : %d\n", x, c, f, t);

	//printf("lower bound가 시작되는 점의 값 : %d, upper bound가 시작되는 점의 값 : % d\n", f2, t2);

	

	c = (int)(upper_bound(a, a + 5, x) - lower_bound(a, a + 5, x));
	f = (int)(lower_bound(a, a + 5, x) - a);
	t = (int)(upper_bound(a, a + 5, x) - a);
	f2 = *lower_bound(a, a + 5, x);
	//t2 = *upper_bound(a, a + 5, x);
	printf("%d의 갯수 : %d, 시작되는 점 : %d 끝나는 점 : %d\n", x, c, f, t);
	//printf("lower bound가 시작되는 점의 값 : %d, upper bound가 시작되는 점의 값 : % d\n", f2, t2);


	return 0;

}