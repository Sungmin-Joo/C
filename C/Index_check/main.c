#include <stdio.h>


int main() {
	int i, a[40];

	for (i = 0; i < 40; i++) {
		a[i] = i;
	}

	for (i = 0; i < 50000000; i += 1) {
		printf("a[%d]�� �ּ� ���� : 0x%08p, ���� : 0x%08x\n", i, &a[i], a[i]);
	}
    //https://sungmin-joo.tistory.com/9 �� ���� ����

	return 0;
}a