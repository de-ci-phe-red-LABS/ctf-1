#include<stdio.h>
#include<string.h>
int main() {
	int i,j,flag=0;
	char username[40],passwd[40],x[40]={'f','l','a','g','{'};
	printf("Enter username: ");
	scanf("%40s",username);
	if(strlen(username)==30) {
		if(!strcmp(username,"ghwiorjklahfjkarhvbcxmqpruiqoq")) {
			printf("Enter password: ");
			scanf("%40s",passwd);
			if(strlen(passwd)==30) {
				j=0;
				for(i=28;i>-1;i-=2) {
					if(passwd[j]!=username[i]+2 || passwd[j+1]!=username[i+1]+2) {
						flag=1;
						break;
					}
					j+=2;
				}
				if(flag==1)
					printf("Sorry that's wrong!\n");
				else {
					passwd[30] = '}';
					strcat(x,passwd);
					printf("Great the flag is %s\n", x);
				}
			}
			else
				printf("Sorry that's wrong!\n");
		}
		else
			printf("Sorry that's wrong!\n");
	}
	else
		printf("Sorry that's wrong!\n");
	return 0;
}