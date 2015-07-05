#include<stdio.h>

void solveCase()
{
    char str[30];
    scanf("%s",str);
    int strLen =0;
    while(*(str+strLen)!='\0')
        strLen+=1;
    for(int i=strLen-1;i>=0;i--)
      printf("%c",*(str+i));
    printf("\n");
}

int main()
{
    int cases = 0;
    scanf("%d",&cases);
    for(int i=1;i<=cases;i++)
            solveCase();
    return 0;
}
