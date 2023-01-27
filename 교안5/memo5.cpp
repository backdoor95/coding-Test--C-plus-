#include<bits/stdc++.h>
using namespace std;
const int max_n = 1004;
const int INF = 987654321;
// 벡터 10개 생성
vector<int> v[10];
//초기값이 0인 vector 1개를 생성
vector<int>v2(10, 0);
vector<vector<int>>v3(10, vector<int>(10, 0));
int a[max_n];
int a2[max_n][max_n];
int main() {
	// fill 함수, memset 함수

	// 이터레이터 기반으로 초기화
	fill(v2.begin(), v2.end(), INF);
	//10으로 초기화, 1004까지 전체적으로 초기화
	fill(a, a + max_n, 10);
	return 0;
}