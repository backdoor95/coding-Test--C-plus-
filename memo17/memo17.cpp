#include <bits/stdc++.h>
#include<iostream>
#include <unordered_set>
#include <unordered_map>

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
	// key �� �ڷ����� ���缭 �־�����Ѵ�. 
	// ���� �ߴ� �Ǽ��� �׳� �ε����� �Ǵ��ؼ� ���ڸ� �־ �����ٶ�

	cout << mp["BBangSSang"] << endl;
	
	// erase(key) �ش� Ű�� �ش��ϴ� ��Ҹ� �����.
	mp.erase("juno");

	cout << mp.size() << endl;


	// 
	auto it = mp.find("juno");
	
	if (it == mp.end())
		cout << "��ã�ڴ� !" << endl;

	mp["juno"] = 100;
	//find(key)
	// map���� �ش� key�� ���� ��Ҹ� ã�� �ش� ���ͷ����͸� ��ȯ��.
	// ���� ��ã�� ��� mp.end() �ش� map�� end() ���ͷ����͸� ��ȯ��.

	it = mp.find("juno");
	if (it != mp.end())
		cout << (*it).first << " : " << (*it).second << "\n";

	// ������� for������map�� �ִ� ��ҵ��� ��ȸ�մϴ�.
	// map�� ��ȸ�� ���� key-> first, value -> second�� ��������
	/*
	for(auto it : mp)
	������� for������ map�� �ִ� ��ҵ��� ��ȸ�մϴ�. map�� ��ȸ�� ���� key�� first,
	value�� second�� ������ �����մϴ�.
	*/
	// map�� ���ͷ����ͷ� ��ȸ�� �� �ִ�.

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


	// map�� �ִ� ��ҵ��� �� �����մϴ�.
	mp.clear();


	//���� �� �� ������ ��
	map<int, int> m1;
	map<string, string> m2;
	//
	// 
	//map ���� ������
	// map�� ��� �ش� �ε����� ������ �ص� �ʿ� ���� �����
	// ���� ��Ұ� �����..int�� ���� ��� 0, string �� ���ڿ��� ��
	// 
	//
	cout << m1[1] << "\n";
	cout << m2["kkkkkkkkk"] << '\n';
	cout << "11111111111111111111111\n";
	for (auto i : m1)cout << i.first << " " << i.second << endl;
	cout << endl;
	cout << "2222222222222222222222\n";
	for (auto i : m2)cout << i.first << " " << i.second << endl;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// map�� ��Ұ� �ִ��� �������� Ȯ���ϰ� �ʿ� �����͸� �Ҵ��ϴ� �κ��� 
	// ������ ������ ���� ������ �� �ֽ��ϴ�.
	if (m1[1] == 0) {
		m1[1] = 2;
	}

	for (auto i : m1)cout << i.first << " " << i.second << endl;
	cout << endl;
	/*
	�ٸ� ���� �ڵ�� �������� �ش� Ű���� 0�� �ƴ� ���� �� �� Ȱ���� �����մϴ�. ����
	�������� Ű�� 0�� ���� ��� ���� �ڵ�� Ȱ���� �Ұ����մϴ�.
	�̹� if�� �ȿ� mp[1] == 0�� �ع��� ���� �̹� mp[1] = 0�� �Ҵ�Ǿ������ ��������.
	*/


	// �������� map�� key - value ���� ���� 0�� ���� ���
	// �Ʒ��� ���� ���°��� ����.
	if (m1.find(1) == m1.end()) {
		m1[1] = 2;
	}
	cout << endl;
	for (auto i : m1)cout << i.first << " " << i.second << endl;

	//unordered_map
	// map�� ������ �Ǵ� ���, unordered_map�� ������ �����ʴ� map
	/*
	map�� unordered_map�� ���ϸ� ������ �����ϴ�.
		- map : ������ �� / �����Ʈ����� / Ž��, ����, ������ O(logN)�� �ɸ�
		- unordered_map : ������ �ȵ� / �ؽ����̺� ��� / Ž��, ����, ������ ���������
			O(1), ���� �־��� ��� O(N)
	*/
	unordered_map<string, int> umap;

	umap["bbb"] = 2;
	umap["kkkk"] = 3;
	umap["wwww"] = 5;
	for (auto it : umap) {
		cout << it.first << " : " << it.second << "\n";
	}
	return 0;
}