#include<bits/stdc++.h>	
using namespace std;
vector<int> v;
int main() {
	for (int i = 1; i <= 10; i++)
		v.push_back(i);
	/*
	push_back() = ������ �ڿ������� ��Ҹ� ����.
	emplace_back()�� ���� ����� ������ �ð� ���̴� ���γ��� ����
	*/
	for (int a : v)cout << a << " ";
	cout << '\n';
	v.pop_back();
	/*
	������ �� ���� ��Ҹ� ����
	*/

	for (int a : v)cout << a << " ";
	cout << '\n';

	v.erase(v.begin(), v.begin() + 3);
	/*
	iterator erase(const_iterator position);
	iterator erase(const_iterator first, const_iterator last);
	erase�� �� ��Ҹ��� ����ٸ�, erase(��ġ)�� ����.
	[from, to) �� ����� �ʹٸ�, erase[from, to) �� ���ؼ� �����.
	����� (, )�� �ش� ��Ҹ� �������� �ʴ� ����, [,] �� �ش� ��Ҹ� �����ϴ� ������ ��ȣ

	*/

	for (int a : v)cout << a << " ";
	cout << "\n";
	// find�� vector�� �޼��尡 �ƴ� stl �Լ��̴�. 
	// [from, to)���� value �� ã�´�.
	// vector ���� ��ҵ��� ã�� ���� �� �̸� ���ؼ� ã��.
	// O(n)�� �ð����⵵�� ������.
	auto a = find(v.begin(), v.end(), 100);
	if (a == v.end())cout << "not found" << "\n";

	//fill(from, to, value) 
	// [from, to) ������ value�� �ʱ�ȭ �Ѵ�.
	fill(v.begin(), v.end(), 10);
	// ������� for ������ �߰��Ǿ�
	for (int a : v)cout << a << " ";
	cout << endl;
	//clear�� ������ ��� ��Ҹ� �����.
	v.clear();// 
	cout << "all clear!!\n";


	// ������� for ������ �߰��Ǿ�
	for (int a : v)cout << a << " ";
	// 
	cout << endl;
	for (auto a : v)cout << a << " ";
	cout << endl;

	//for(int i=0;i<v.size();i++) ���� ���� �ǹ��̴�.
		
	for (int a : v)cout << a << " ";
	for (int i = 0; i < v.size(); i++)cout << v[i] << ' ';
	// ���͵� �迭�� ������ �����ϴ�.
	vector < pair<int, int> >v2;
	//for (pair<int, int> a : v2)cout << a.first << " ";


	cout << '\n';

	// vector�� �����Ҵ� 
	// vector��� �ؼ� ������ ũ�Ⱑ 0�� �� vector�� ����� �����Ҵ����� �߰��ϴ� ���� �ƴ�
	// ���ʿ� ũ�⸦ ���س��ų� �ش� ũ�⿡ ���� ��� ������ �ʱ�ȭ
	// �س��� ������ ���� �ִ�. 
	// 5���� ��Ҹ� ���� �� �ִ� vector�� �����ϰ� ��� ���� 100���� 
	// ä�����̴�.
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

	// 2���� �迭
	// ���͸� �̿��� 2���� �迭�� ����� 3���� ����̴�.
	// ���͸� ��ø�ؼ� ���� 




	return 0;
}