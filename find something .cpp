
#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100]; string ch;
  	int i, index;
  	i = 0;
  	index = -1;

  	printf("\n Please Enter any String :  ");
  	gets(str);

  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);

  	while(str[i] != '\0')
  	{
  		if(str[i] == ch)
		{
  			index = i;
 		}
 		i++;
	}
    if(index == -1)
  	{
  		printf("\n Sorry!! We haven't found the the Search Element '%c' ", ch);
	}
	else
	{
		printf("\n The Last Occurrence of the Search Element '%c'' at Position %d ", ch, index + 1);
	}
  	return 0;
}
