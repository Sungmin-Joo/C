#include <stdio.h>

int main() {
    char str[10] = "apple";
    str[0] = 'B';
    printf("%s\n", str);
    //char�� �����Ͱ� 10�� �� �� �ִ� ������ ������ �� "apple" �̶�� ���ڿ��� �ʱ�ȭ
    //�̸� �Ҵ�� �迭�� ������ �õ��ϴ� �۾��� ok
    return 0;
}