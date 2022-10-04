#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	char c;
	int result;
	
	printf("계산식을 쓰시오:");
	scanf("%d%c%d", &a,&c,&b);
	
	if (c=='+')
	    result = a+b;
    else if (c=='-')
        result=a-b;
    else if (c=='/')
        result=a/b;
    else
        result=a*b;
        
    printf("=%i", result);
	return 0;
}
