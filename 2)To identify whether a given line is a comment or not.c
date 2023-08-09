#include<stdio.h>
#include<conio.h>
#include <string.h>
int main(){
	char input[30];
	int len;
	printf("Enter a line of text:\n");
	scanf("%[^\n]s",input);
	len = strlen(input);
	if((input[0]=='/') && (input[1]=='/')){
		printf("---Single Line Comment---");
	}
	if(input[0]=='/'){
		if(input[1]=='*'){
			if(input[len-1]=='/'){
				if(input[len-2]=='*'){
					printf("---Multi-Line Comment---");
				}
				else{
					printf("Not a comment");
				}
			}
		}
	}
	else{
		printf("Not a comment");
	}
	getch();
	return 0;
} 
