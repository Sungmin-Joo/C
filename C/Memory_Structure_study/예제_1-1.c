#include <stdio.h>

int main() {
	int *ptr;
	int num = 10;
	ptr = &num;
	printf("%d\n", *ptr);
	//�������� ������ ����.
	//������ ���� ptr�� num�� �ּҸ� �����Ͽ� ptr�� 10�̶�� �������� num�� ����Ű���ִ�.

	return 0;
}