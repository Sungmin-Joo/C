#include <stdio.h>

int main() {
    char *str = "apple";
    str[0] = 'B';
    printf("%s\n", str);
    //������ str�� "apple" �� �ʱ�ȭ �߱� ������
    //str �� init������ �����ϴ� ���ͷ� Ÿ��("apple")�� ����Ű�� �ȴ�.
    //���� ��α� �����ÿ��� init�� rodata�� ���̸� ������ �� ����.
    return 0;
}