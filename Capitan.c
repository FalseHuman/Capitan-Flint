#include <stdio.h>
int main()
{
char str[5];
int x=0,y=0,last_digit,i=0,number=0;
scanf("%d",&number);
do{
scanf("%s",&str);
switch (str[0]){
case'N': scanf("%d",&last_digit);y+=last_digit;break;
case'E': scanf("%d",&last_digit);x+=last_digit;break;
case'S': scanf("%d",&last_digit);y-=last_digit;break;
case'W': scanf("%d",&last_digit);x-=last_digit;break;
default :break;
}
i++;
}while(i<number);
printf("%d %d\n", x,y);
return(0);
}