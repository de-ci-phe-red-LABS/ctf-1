#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char pwd[30];
	printf("Enter the flag: ");
	scanf("%30s",pwd);
	if(strlen(pwd)!=16)
		printf("Length mismatch! :(\n");
	else {
		if(pwd[0]=='f' && pwd[1]=='l' && pwd[2]=='a' && pwd[3]=='g' && pwd[4]=='{' && pwd[15]=='}')
			if(pwd[5]=='_' && pwd[6]=='t' && pwd[7]=='o' && pwd[8]=='o' && pwd[9]=='_' && pwd[10]=='h' && pwd[11]=='a' && pwd[12]=='r' && pwd[13]=='d' && pwd[14]=='_')
				printf("Good job! :)\n");
			else
				printf("Sorry, that's wrong! :(\n");
		else
			printf("Wrong format! :(\n");
	}
	return 0;
}
