#include<bits/stdc++.h>
using namespace std;
const int INF = 987654321;
typedef long long ll;
ll INF3 = 1e18;
const int INF2 = 1e9;// ���� �Ұ�
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

	//string s = "����ȣ ����� ��õ�� �� �ǿ�����Ʈ", d = " ";
	//vector<string> a = split(s, d);
	//for (string b : a) cout << b << "\n";

		/////////////////////////////////////

	//for (string b : a)cout << b << '\n';
	//for (int i = 0; i < 2; i++)cout << a[i] << endl;

	// atoi(s.c_str()) // ���ڿ� s�� ������� atoi
	string s = "55";
	string s2 = "ammu";
	cout << atoi(s.c_str()) << '\n';// ���ڿ��� �����̸� ���ڸ� ��ȯ
	cout << atoi(s2.c_str()) << "\n";// ���ڿ��� ���ڰ� �ƴϸ� 0�� ��ȯ

		/////////////////////////////////////

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a = -1;
	cout << bool(a) << endl;
	cout << bool(0) << endl;
	cout << bool(3) << endl;

	//�����÷ο� , ����÷ο�
	
	return 0;
}