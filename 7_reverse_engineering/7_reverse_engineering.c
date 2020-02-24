#include<stdio.h>
#include<string.h>
int main() {
	char flag[21]={'f','l','a','g','{','s','f','t','o','_','o','e','i','_','1','8','r','p','a','}','\0'};
	char pwd[21];
	printf("Enter the flag: ");
	scanf("%21s",pwd);
	if(!strcmp(pwd,flag))
		printf("Access granted!\n");
	else
		printf("Access denied!\n");
	return 0;
}
