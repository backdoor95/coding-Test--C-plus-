#include<bits/stdc++.h>
using namespace std;
const int INF = 987654321;
typedef long long ll;
ll INF3 = 1e18;
const int INF2 = 1e9;// 수정 불가
string a[2] = { "out of time","i love you" };
vector<string>split(string input, string delimiter) {
	vector<string>ret;
	int pos = 0;
	string token = "";
	while ((pos = input.find(delimiter)) != string::npos) {
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);
	return ret;

}
int main() {
	/////////////////////////////////////
		//ios::sync_with_stdio(false);
		//cin.tie(NULL);

		//string s = "123";
		//s[0]++;
		//char a = 'a';
		//cout << (int)a << '\n';
	/////////////////////////////////////
		/*string a = "answnsgh";
		cout <<"a = "<< a << '\n';
		reverse(a.begin(), a.end());
		cout <<"a = "<< a << '\n';
		reverse(a.begin(), a.end());
		cout <<"a = "<< a << '\n';
		reverse(a.begin()+5, a.end());
		cout <<"a = "<< a << '\n';*/

		/////////////////////////////////////

	//string s = "문준호 서울시 양천구 목동 건영아파트", d = " ";
	//vector<string> a = split(s, d);
	//for (string b : a) cout << b << "\n";

		/////////////////////////////////////

	//for (string b : a)cout << b << '\n';
	//for (int i = 0; i < 2; i++)cout << a[i] << endl;

	// atoi(s.c_str()) // 문자열 s를 기반으로 atoi
	string s = "55";
	string s2 = "ammu";
	cout << atoi(s.c_str()) << '\n';// 문자열이 숫자이면 숫자를 반환
	cout << atoi(s2.c_str()) << "\n";// 문자열이 숫자가 아니면 0을 반환

		/////////////////////////////////////

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a = -1;
	cout << bool(a) << endl;
	cout << bool(0) << endl;
	cout << bool(3) << endl;

	//오버플로우 , 언더플로우
	
	return 0;
}