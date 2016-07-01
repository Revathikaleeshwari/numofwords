#include<stdio.h>
#include<conio.h>
int main()
{
char n[100];
int i,count;
printf("Enter the words\n");
scanf("%s",&n);
for(i=0;i<n;i++)
{
if(n[i]!='\t')
{
}
count++;
}
count++;
printf("\n number of word",count);
return 0;
}
