#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv)
{
int a,b,c;
if(argc==2)
{
a=(int)atoi(argv[1]);
b=(int)atoi(argv[2]);
a+b;
printf("The Value of C is %d",c);
}
else
{
printf("Not a valid command line argument\n");
}
return 0;
}
