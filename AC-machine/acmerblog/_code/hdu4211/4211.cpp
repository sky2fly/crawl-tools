#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
	char str[100];
	int a[200];
	while(gets(str) != NULL)
	{
		if(strcmp(str, "END") == 0)
			break;
		int l=strlen(str);
		int i;
		memset(a, 0, sizeof(a));
		for( i=0; i < l; i++ )
		{
			if(str[i] >= 'A' && str[i] <= 'Z')
				a[str[i]]++;
		}
		for( i='A'; i <= 'Z'; i++ )
		{
			if(a[i] > 1)
				break;
		}
		if(i > 'Z')
			puts(str);
	}
	return 0;
}