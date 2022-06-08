#include<stdio.h>
#include<cstdlib>
int main()
{
	char n;

	printf("Enter the data : ");
	scanf("%c",&n);
	if (n >= 'A' && n <= 'Z' || n >= 'a' && n <= 'z')
	{
		printf("This is a Character \n");
		if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' ||n=='U')
		{
				printf("& Also it's a vowel \n");
		}
		else
		{
				printf("& Also it's a consonant \n");

		}
	}
	else if(n=='0' || n=='1' || n=='2' || n=='3' || n=='4' || n=='5' || n=='6' || n=='7' || n=='8' ||n=='9')
		{
				printf("It's Numeric \n");
		}

	else if(n=='\0 ')
		{
			printf("This is a Null Character \n");
		}
	else
		{
			printf("It's Symbol \n");
		}

	system("pause");
}
