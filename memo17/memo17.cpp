#include <bits/stdc++.h>
using namespace std;
//list<int> a;
map<string, int> mp;
string a[] = { "zoo", "yang", "park" };
void print(list <int> a) {
	for (auto it : a) cout << it << " ";
	cout << '\n';
}
int main() {
	////push_front(value) = ����Ʈ�� �տ��� ���� value�� �ֽ��ϴ�.
	//for (int i = 1; i <= 3; i++)a.push_back(i);
	////push_back(value) = ����Ʈ�� �ڿ��� ���� value�� �ֽ��ϴ�.
	//for (int i = 1; i <= 3; i++)a.push_front(i);
	//auto it = a.begin(); it++;
	////insert = ��Ҹ� ���°�� �����մϴ�.
	//// insert(idx, value)
	//// iterator insert (const_iterator position, const value_type& val);
	//a.insert(it, 1000);
	//print(a);
	//it = a.begin(); it++;
	//// erase(idx) ����Ʈ�� idx��° ��Ҹ� ����
	////iterator erase(const_iterator position);
	//// insert, erase �� ���ڷ� ���ͷ����͸� ���ڷ� �Ѱ��ش�.
	//a.erase(it);
	//print(a);
	//// ù��° ��Ҹ� ����
	//a.pop_front();
	//// �ǳ� ��Ҹ� �����.
	//a.pop_back();
	//print(a);
	//// front   =  �� �� ��Ҹ� �����Ѵ�.
	//// back =  �� �� ��Ҹ� �����Ѵ�.
	//cout << a.front() << " : " << a.back() << '\n';
	//a.clear();

	// ��������(random access)�� ������ ����(sequential access)
	// [���� ����==��������]�� ������ �ð��� �迭�� ����
	// �������� �����Ͱ� ������ ������ �ε����� �ش��ϴ�
	// �����Ϳ� ������ �� �ִ� ����̴�.
	// �̴� �����͸� ����� ������� �˻��ؾ� �ϴ� ������ ���ٰ��� �ݴ�

	//vector, Array�� ���� �迭�� ���������� �����ؼ� k���� ��ҿ� ������ ��, O(1)�� �ɸ�
	// ���Ḯ��Ʈ, ����, ť�� ������ ���ٸ��� �����ؼ� k��° ��ҿ� ������ �� o(k)�� �ɸ�
	// �迭�� ���Ḯ��Ʈ ��
	// ���� �迭�� ���Ḯ��Ʋ ���� ���Ѵ�.
	// �迭�� ���ӵ� �޸� ������ �����͸� ����,���Ḯ��Ʈ�� ���ӵ��� �ʴ� �޸� ������ ������ ����
	// �迭�� ���԰� ������ o(n)�� �ɸ�, ���������� o(1) 
	// ���Ḯ��Ʈ�� ���԰� ������ o(1), ���������� o(n)
	// ��� = �������߰��� ������ ���� �ϴ� ���� ���Ḯ��Ʈ, ������ ����
	// �ϴ� ���� �迭�� �ϴ� ���� ����.

	// map 
	// map�� ������ Ű�� ������� Ű - ��( key - value) ������ �̷����
	// ������ �Ǿ��ִ�. ���� �Ҷ����� �ڵ����� �����̵ȴ�.
	// ���� - �� Ʈ���� �����Ǿ� �ִ�.
	// ����, ����, ���� , Ž���� o(logN)�� �ð����⵵�� ������.
	// ������ key ���� ������ ������ Ű ���� �ߺ��� ���� ��������.
	// �ڵ����� �������� ������ �ȴ�. 
	// ���� ������� map�� Ž���� �� �ִ� ���� �ƴ� �ƽ�Ű�ڵ� ������ ���ĵ� ������ ������� Ž����.
	// [ ] �����ڷ� �ش� Ű�� ���� ������ �� �ִ�.
	// map�� key�� value�� string�̳� int �Ӹ� �ƴ϶� �پ��� ���� �� �� �ִ�.
	// �����Ʈ�� : ���� ���� �˻� Ʈ���̸� ����, ����, ����, Ž���� o(logN)
	// 
	// 


	//insert({key, value})
	//map<string, int>::iterator it
	// map���� {key, value}�� ���� �ֽ��ϴ�.
	for (int i = 0; i < 3; i++) {
		mp.insert({ a[i], i + 1 });
		mp[a[i]] = i + 1;
	}
	// [key] = value 
	// ���ȣ []�� ���� key�� �ش��ϴ� value�� �Ҵ���.

	// [key] 
	// ���ȣ[]�� ���� key�� ������� map�� �ִ� ��Ҹ� ����




	// map�� �ش� Ű�� ���ٸ� 0���� �ʱ�ȭ �Ǿ� �Ҵ��(int�� ���)
	// ���� mp�� �ش� Ű�� ������ Ȯ���ϰ� �Ͱ�
	// �ʱⰪ���� 0���� �Ҵ���� �ʾƾ� �Ǵ� ��Ȳ�̶��
	// find�� �����.
	cout << mp["juno"] << "\n";

	// [key] = value 
	// ���ȣ []�� ���� key�� �ش��ϴ� value�� �Ҵ���.
	mp["juno"] = 8;
	// map�� �ִ� ��ҵ��� ������ ��ȯ��.
	cout << mp.size() << endl;

	auto it2 = mp.find("juno");
	if (it2 == mp.end())
		cout << "���� ����!!\n";
	else
		cout << " ã�Ҵ�!!" << endl;

	//mp[1].first; // �̷��� ������ �Ұ�����.
	// erase(key) �ش� Ű�� �ش��ϴ� ��Ҹ� �����.
	mp.erase("juno");

	cout << mp.size() << endl;


	// 
	auto it = mp.find("juno");
	
	if (it == mp.end())
		cout << "��ã�ڴ� !" << endl;

	mp["juno"] = 100;
	it = mp.find("juno");
	if (it != mp.end())
		cout << (*it).first << " : " << (*it).second << "\n";


	for (auto it : mp) {
		cout << (it).first << " : " << (it).second << endl;
	}
	// 
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
	//	cout << *it << ' ';
	//}
	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << (*it).first << " : " << (*it).second << endl;
	}// �̷��� ����Ϸ��� ������ �ؾ���.

	for (auto it = mp.begin(); it != mp.end(); it++) {
		cout << (*it).first << " : " << (*it).second << endl;
	}



	mp.clear();
	return 0;
}