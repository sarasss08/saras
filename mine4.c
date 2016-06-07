#include<stdio.h>
void main()
{
	char c;
	scanf("%c",&c);
	if((c>=65&&c<=91)||(c>=97&&c<=123))
	{
		printf("\n Character is alphabet");
	}
	else
	{
		printf("\n Not a Character");
	}
	return 0;
}
