#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, sum, num;
	
	printf("�ڿ��� �ϳ��� �Է��ϼ���: ");
	scanf("%d",&i);
	
	for(num=1;num<=i;num++)
		sum+=num;
	
	printf("1���� �Է��� ������ ���� %i�Դϴ�.",sum);
	
	return 0;
}
