#include<bits/stdc++.h>
using namespace std;
int check(char a, char b) {
	if(a == b)
		return 1;
	return 0;
}
int checklen(long code) {
	int l=0;
	while(code) {
		l++;
		code/=10;
	}
	if(l==10)
		return 1;
	return 0;
}
int main(int argc, char *argv[]) {
	int i;
	long code;
	char a;
	if(argc==1)
		cout<<"Usage ./11_reverse_engineering target\n";
	else {
		int flag=0;
		fstream fio;
		cout<<"Enter the access code: ";
		cin>>code;
		if(checklen(code)==0)
			cout<<"Sorry better try again!\n";
		else {
			fio.open(argv[1],ios::in);
			for(i=0;i<10;i++) {
				fio>>a;
				if(check(a,'a'+(code%10))==0) {
					flag=1;
					break;
				}
				code/=10;
			}
			if(flag==0)
				cout<<"Good job!\n";
			else
				cout<<"Sorry better try again!\n";
			fio.close();
		}
	}
	return 0;
}
