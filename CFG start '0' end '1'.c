#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("enter the string:\n");
	scanf("%s",s);
	if(s[0]=='0'&& s[strlen(s)-1]=='1')
	{
		int i;
		for(i==0;i<strlen(s);i++){
			if(s[i]<'0'||s[i]>'1'){
				printf(" in valid !\n");
				return 0;
			}
		}
		printf("valid the string satrts with '0' and end with '1'.\n");
		
	}
	else {
		printf(" invalid  the string does not start with '0' and end with '1':\n");
	}
	return 0;
}
