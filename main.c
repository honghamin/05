#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int x;
	int trial =0;
	
	
	do
	{
		printf("Guess a number: "); //입력해라 문구 출력
		scanf("%i", &x); //입력을 받음
		if (x>59)
		    printf("low!\n");
		    
	    else if (x<59)
		    printf("high!\n");
		    
		trial+=1;//입력숫자가 정답보다 큰지 작은지 출력  
	}
	while (x!=answer); //정답과 같은지 여부 판단
	
	printf("Number of trial = %i\n", trial);
	return 0;
}
