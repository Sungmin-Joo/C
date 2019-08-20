#include <iostream>
#include <vector>

using namespace std;


int main() {
	//Do not use this code in a multi-threaded process.----
	ios_base::sync_with_stdio(false);					//-
	cin.tie(NULL);										//-
	cout.tie(NULL);										//-
	//-----------------------------------------------------
	vector<int> v;

	v.reserve(5); //���� v�� int ������ 5�� �� �ڸ��� �̸� �Ҵ�.

	v.push_back(1);
	v.push_back(2);
	v.push_back(3); //���Ϳ� ������� 1, 2, 3 �� �Է��Ѵ�.
	cout << "---- ũ�⸦ 5�� �Ҵ��ϰ� 3���� ���Ҹ� �Է��� ���� ----" << endl;
	for (vector<int>::size_type i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	cout << "v.size()�� �� : " << v.size() << endl;
	cout << "v.capacity()�� �� : " << v.capacity() << endl;
	cout << "v.max_size()�� �� : " << v.max_size() << endl;
	//������ capacity �� �̸� ������ ũ���� '5' �̰�,
	//���� 3���� ���Ұ� �ԷµǾ��� ������ size�� '3'�� �ȴ�.

	v.resize(10);
	cout << "------- v.resize(10) �� ��� -------" << endl;
	for (vector<int>::size_type i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << "v.size()�� �� : " << v.size() << endl;
	cout << "v.capacity()�� �� : " << v.capacity() << endl;
	cout << "v.max_size()�� �� : " << v.max_size() << endl;
	//������ ���� ũ�⺸�� ū ������ resize�ϸ� capacity�� �����ϰ�,
	//�߰��� ũ�⸸ŭ ���Ұ� 0���� �ʱ�ȭ �ȴ�.
	v.push_back(1);
	v.resize(5);

	cout << "------- v.resize(5) �� ��� -------" << endl;
	for (vector<int>::size_type i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << "v.size()�� �� : " << v.size() << endl;
	cout << "v.capacity()�� �� : " << v.capacity() << endl;
	cout << "v.max_size()�� �� : " << v.max_size() << endl;

	/*
	������ capacity ���� ���� ������ resize�ϸ� capacity�� ��ȭ���� �ʴ´�.
	ũ�⸦ �ʰ��ϴ� ���Ҵ� ���ŵȴ�.
	�Էµ������� ũ�Ⱑ Ȯ���Ѱ�� reserve�� ���������, ���� ���ο� ���Ұ� ���Ϳ� �߰��Ǹ�
	�޸� ������ �߰������� �Ҵ�ȴ�. ���� �׻� max_size�� ��������.*/


	v.clear();
	cout << "------- v.clear() �� ���� ���� ����غ��� -------" << endl;
	for (vector<int>::size_type i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << "�ƹ��͵� ��µ��� �ʴ´�." << endl;

	return 0;
}