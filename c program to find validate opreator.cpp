#include <stdio.h>
#include <stdbool.h>
bool is_operator (char op)
{
    if(op=='+'|| op=='-'|| op=='*'|| op=='/'||op=='%')
  {
      return true;
}
    return false;
}
int main()
{
char operator;
printf("enter an operators=");
scanf("%c",&operator);
if(is_operator(operator))
{
printf("'%c'is valid",operator);
}
else
{
    printf("'%c'is not valid",operator);
}
}


