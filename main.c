#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int num=0;
	
	printf("문자열을 입력하세요: ");
	
	while ((c= getchar())!='\n') //입력 문자가 개행문자가 나올때까지 반 복  
	{
		if (c>='0' && c<= '9') //입력된 글자가 숫자인가? 아스키 코드를 암기하지 못 하니 ''를 통해 아스키 코드 이용 
		num+=1; //참이면 하나를 센다. 
	}
	printf("숫자의 개수는 %i입니다.\n", num); //출력  
	return 0;
}
