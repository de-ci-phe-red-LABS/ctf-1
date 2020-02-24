#include<stdio.h>
int check(long pwd) {
	char val[10] = {'c','g','h','f','e','i','a','b','d','c'};
	int i,n,count;
	n = pwd;
	count = 0;
	while(n) {
		n/=10;
		count++;
	}
	if(count!=10)
		return 0;
	for(i=0;i<10;i++) {
		val[9-i] = val[9-i] - (pwd % 10);
		pwd /= 10;
	}
	for(i=0;i<10;i++)
		if(val[i]!='a')
			break;
	if(i==10)
		return 1;
	return 0;
}
int main() {
	long pwd;
	printf("Enter the secret code: ");
	scanf("%ld",&pwd);
	if(check(pwd))
		printf("Bingo! you got the correct secret code.\n");
	else
		printf("Sorry! not this time.\n");
	return 0;
}
