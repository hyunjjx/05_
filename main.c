#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int answer=59;
	int tryn=0;
	
	do
	{
		printf("���ڸ� �ϳ� �Է��ϼ���: ");
		scanf("%i",&i);
		tryn++;
		
		if(i<answer)
			printf("���亸�� �۽��ϴ�.\n");
			
		else if(i>answer)
			printf("���亸�� Ů�ϴ�.\n") ;
	}
	while(i!=answer);
	
	printf("�����Դϴ�. �õ�Ƚ��: %d",tryn);
	
	return 0;
}
