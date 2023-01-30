#include<bits/stdc++.h>	
using namespace std;
int main() {

	//vector<int>	a;
	//for (int i = 1; i <= 3; i++)a.push_back(i);
	//for (int i = 5; i <= 10; i++)a.push_back(i);
	//cout <<"&*a.begin() = "<< & *a.begin() << endl;
	//cout << "*a.begin() = " << *a.begin() << endl;
	////lower_bound , upper_bound�� ���ͷ����� ��ȯ

	//cout << *lower_bound(a.begin(), a.end(), 4) << endl;
	//cout << lower_bound(a.begin(), a.end(), 4) - a.begin() << endl;

	//cout << "=================================" << '\n';
	//vector<int> v;
	//for (int i = 2; i <= 5; i++)v.push_back(i);
	//v.push_back(7);
	//// 2 3 4 5 7
	//// ã������ ���� �̻��� ������ ù��° ������ ��ȯ��.
	//cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
	//cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
	//cout << upper_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
	//cout << lower_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
	//cout << upper_bound(v.begin(), v.end(), 0) - v.begin() << "\n";
	//cout << lower_bound(v.begin(), v.end(), 0) - v.begin() << "\n";


	//lower_bound(), upper_bound()�� �� ���ĵ� �迭���� �����.
	vector<int> a{ 1,2,3,3,3,4 };
	cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << endl;
	//cout << lower_bound(a.begin(), a.end(), 3) << endl;// �̷��Դ� �� �����.
	// [tip !!] = lower_bound�� �����ϴ� ���� Ÿ���� ó�� ��Ÿ�� �ε��� ���̴�.
	//2 return 2�� �ε�����. �� 3��°��  3�� ��Ÿ���ٴ� �ǹ�

	cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << endl;
	// upper_bound�� �����ϴ� ���� �迭�� �ڿ��� ���� ã������,
	// Ÿ�� �ε����� '�� ���� �ε���' �� ��ȯ��.
	//5 return 5�� �ε�����. �� 5��°�� 3�� ��Ÿ���ٴ� �ǹ� ( �ε��� 4���� 3���� ����)
	// �迭�� �ڿ��� ���� ��ġ������, ó�� ��Ÿ���� Ÿ���� �ε����� �� �������� ��ȯ


	cout << &*lower_bound(a.begin(), a.end(), 3) << '\n';
	cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << endl;
	//cout << &*a.end() << "\n";
	cout << &*(a.begin() + 1) << "\n";

	vector<int> b{ 1,2,3,3,4,100 };
	cout << *lower_bound(b.begin(), b.end(), 100) << endl;
	//cout << *upper_bound(b.begin(), b.end(), 100) << endl;// �̷��� �ϸ� ������ ����. end()�� ������ �Ұ�
	auto ub = upper_bound(b.begin(), b.end(), 100);
	auto lb = lower_bound(b.begin(), b.end(), 100);
	cout << ub - b.begin() << endl;
	cout << lb - b.begin() << endl;

	vector<int> c{ 1,2,3,3,3,4 };
	cout << &*lower_bound(a.begin(), a.end(), 3) - &*a.begin() << endl;

	vector<int> d{ 0,0,0,0 };
	cout << &*(b.begin() + 3) - &*b.begin() << endl;
	// �ּҰ����� - �ϰ� �Ǹ� �ش� �ּҰ�����
	// ������� �� ��Ұ� ��������� ��ȯ�ϰԵ�.
	// �迭�� ��ȸ�� ������ �����̳���.

	vector<int> e{ 1,2,3,3,3,3,4,100 };
	// �̸� ���ؼ� ���� �ڵ�ó�� �ش� ��Ҹ� ����� ������.
	cout << *lower_bound(e.begin(), e.end(), 100) << endl;

	// 3�� � ����ִ��� Ȯ�ΰ���
	cout << upper_bound(e.begin(), e.end(), 3) - lower_bound(e.begin(), e.end(), 3) << endl;

	cout << "=====================\n";

	// ���ϴ� ���� ã�� ��������, �� �ٹ� ������ ��ȯ
	vector<int> f;
	for (int i = 2; i <= 5; i++)f.push_back(i);
	f.push_back(7);

	// target ���� ������  �ٹ� ������ ��ȯ�ϰ� �Ǵµ�
	// �̷���� lower_bound, upper_bound�� ���� ���� ��ȯ��.
	cout << upper_bound(f.begin(), f.end(), 6) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 ���� �ٹ������� 4��° (7���� 6�� �� �����Ƿ�)
	cout << lower_bound(f.begin(), f.end(), 6) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 ���� �ٹ������� 4��° (7���� 6�� �� �����Ƿ�)
	cout << upper_bound(f.begin(), f.end(), 9) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 ���� �ٹ������� 5��°(7���� 9�� �� ũ�Ƿ�)

	cout << lower_bound(f.begin(), f.end(), 9) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 ���� �ٹ������� 5��°(7���� 9�� �� ũ�Ƿ�)
	cout << upper_bound(f.begin(), f.end(), 0) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 ���� �ٹ������� 0��°(0���� 2�� �� ũ�Ƿ�)
	cout << lower_bound(f.begin(), f.end(), 0) - f.begin() <<"\n";
	// 2 3 4 5 7
	// 0 1 2 3 4 ���� �ٹ������� 0��°(0���� 2�� �� ũ�Ƿ�)

	cout << upper_bound(f.begin(), f.end(), 2) - f.begin() << "\n";

	cout << lower_bound(f.begin(), f.end(), 2) - f.begin() <<"\n";


	return 0;
}