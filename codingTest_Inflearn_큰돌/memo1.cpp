#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double a = 1.23456789;
int main() {

	string a = "love is";
	a += " pain!";
	cout << a << " : " << a.size() << "\n";
	a.pop_back();//�ѱ��� ����
	cout << a << " : " << a.size() << "\n";
	cout << char(*a.begin()) << "\n";// l ���
	cout << char(*(a.end() - 1)) << "\n"; // n���
	//cout << char(*(a.end())) << "\n"; // a.end()�� �޸� ���� �����ϹǷ� error�߻�, �� ������ ���� �� ������ ����Ű�� ���ͷ����͸� ��ȯ
	a.insert(0, "test");
	cout << a << " : " << a.size() << "\n";
	a.insert(8, "test");
	cout << a << " : " << a.size() << "\n";
	a.erase(0, 4);// 0, 1,2,3 ���� ����
	cout << a << " : " << a.size() << "\n";
	auto it = a.find("love");// ã������ 0 ��ȯ, �� ã������ �ִ밪 ��ȯ
	cout << "it�� �� =" << it<<'\n';
	if (it != string::npos) {
		cout << "���ԵǾ� �ִ�." << '\n';
	}
	cout << "it�� �� =" << it << '\n';
	cout << "string::npos �� = " << string::npos << '\n';
	cout << "a = " << a << '\n';
	cout << a.substr(4,4) << "\n";// 1�� �Ķ���ʹ� �����ϴ� �ε���, 2�� �Ķ���ʹ� 1�� ���� ����� ���ڰ���  �̶� a�� ������ �Һ�
	cout << "a = " << a << '\n';

	//���� ���ڿ����� ���ڿ��� ���Ҥ��� +=�� �Ἥ ���ڿ� �Ǵ� ���ڸ� ����.
	//push_back();
	//begin()�� end()�� �ڷᱸ���� vector, Array, ���Ḯ��Ʈ, Map, set������ ������.

	return 0;
}