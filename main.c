#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int sum=0;
    int x; 
    int i;
	
	printf("정수를 입력하시오.") ;
	scanf("%d", &x);
	
	//for문을 활용해서 1부터 x까지 sum 에 더하는 코드
	for (i=0;i<=x;i++)
	    sum=sum+i;
	  
	
	printf("합은 %d입니다.",sum);
	return 0;
}
