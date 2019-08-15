#include<iostream>
#include<cstring>
using namespace std;

class Vehicle
{
private:
	int number;
	char *owner;
public:
	Vehicle() {
		cout << "�⺻ ������ ȣ��" << endl;
		number = 0;
		owner = NULL;
	}
	Vehicle(int n, char* na) {
		cout << "�Ϲ� ������ ȣ��" << endl;
		number = n;
		owner = new char[strlen(na) + 1];
		strcpy_s(owner, strlen(na) + 1, na);
	}
	Vehicle(const Vehicle &src) {
		cout << "���� ������ ȣ��" << endl;
		number = src.number;
		owner = new char[strlen(src.owner) + 1];
		strcpy_s(owner, strlen(src.owner) + 1, src.owner);
	}
	~Vehicle() {
		cout << "�Ҹ��� ȣ��" << endl;
	}
	void set(int n, char *na) {
		number = n;
		delete[] owner;
		owner = new char[strlen(na) + 1];
		strcpy_s(owner, strlen(na) + 1, na);
	}
	void show() {
		cout << "number : " << number << " , owner : " << owner;
		cout << endl;
	}
};

void main()
{
	Vehicle x(1234, "Kim");
	Vehicle y = x;
	Vehicle z(x);

	cout << "x ==>";
	x.show();
	cout << "y ==>";
	y.show();
	cout << "z ==>";
	z.show();


	cout << "--------------x.set()------------------------" << endl;
	x.set(2345, "Hong");
	cout << "x ==>";
	x.show();
	cout << "y ==>";
	y.show();
	cout << "z ==>";
	z.show();

}

