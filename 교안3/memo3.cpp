#include<bits/stdc++.h>
using namespace std;
pair<int, int> pi;// 2���� ������
tuple<int, int, int> tl;// 3���� �̻� ������
int a, b, c;
int k;
int main() {
	pi = { 1,2 };// pair ����� �� 1.
	// pi = make_pair(1,2); // pair ����� �� 2. ���� ����� �Ѵ�. �̰͵� ���� 
	tl = make_tuple(4, 5, 6);
	tie(a, b) = pi;// tie�� tuple�� ���� ���� ������� ���
	cout << pi.first<<"\t" << pi.second<<endl;
	cout << get<0>(tl) << "\t" << get<1>(tl) << "\t" << get<2>(tl)<<endl;
	// get�� ���ؼ� tuple ���� ������.

	//double�� double ���� ���������. int �� double�� ������ double Ÿ���� ������� ����

	//double��  double ���� , int�� int ����

	cout << &k << endl;




	return 0;
}