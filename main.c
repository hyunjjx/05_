#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int answer=59;
	int tryn=0;
	
	do
	{
		printf("숫자를 하나 입력하세요: ");
		scanf("%i",&i);
		tryn++;
		
		if(i<answer)
			printf("정답보다 작습니다.\n");
			
		else if(i>answer)
			printf("정답보다 큽니다.\n") ;
	}
	while(i!=answer);
	
	printf("정답입니다. 시도횟수: %d",tryn);
	
	return 0;
}
