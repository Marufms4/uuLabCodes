/*#include <iostream>
using namespace std;

int main()
{
    std::string addrWithMask("10.0.1.11/10");
    std::size_t pos = addrWithMask.find("/");
    std::string addr = addrWithMask.substr(0,pos);
    std::cout << addr << std::endl;
    return 0;
 }


*/

/*
 #include <stdio.h>
#include <string.h>

#define SIZE 40

int main(void)
{
  char buffer1[SIZE] = "computer/program";
  char * ptr;
  int    ch = '/';

  ptr = strchr( buffer1, ch )-1;
  printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );

}
*/
// A C/C++ program for splitting a string
// using strtok()
#include <stdio.h>
#include <string.h>
#include <cctype>
#include <iostream>
#include <cstring>

int main()
{
    char str[] = "printf(Test)";

    char str1[] = "Hello World!";
    char ch = 'd';
    char *p = strrchr(str1, ch);
    // Returns first token

    printf("%s\n",p);
    char* token = strtok(str, "(");

  for (int i=0; i<strlen(token); i++)
    {
        if (isupper(token[i]))
          printf("Ok");
    }

        printf("%s\n", token);



    return 0;
}
