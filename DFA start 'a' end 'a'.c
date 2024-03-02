#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int k=0;
	printf("enter the string:\n");
	scanf("%s",&s);
	int n=strlen(s);
	for (int i=0;i<strlen(s);i++){
		if (s[0]=='a'&&s[n-1]=='a'){
			if(s[i]==0||s[i]==1){
			return 0;
		}
		k=1;
		}
		
	}
	if(k==1){
		printf("the string is accepted");
	}
	else {
		printf("the string is not accepted");
	}
	return 0;
}
