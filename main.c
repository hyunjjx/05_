#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, sum, num;
	
	printf("자연수 하나를 입력하세요: ");
	scanf("%d",&i);
	
	for(num=1;num<=i;num++)
		sum+=num;
	
	printf("1부터 입력한 정수의 합은 %i입니다.",sum);
	
	return 0;
}
