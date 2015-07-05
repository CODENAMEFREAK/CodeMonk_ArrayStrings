#include<stdio.h>

void solveCase()
{
    char str[30];
    scanf("%s",str);
    printf("%c",str[0]);
    for(int i=1;(i<30 && str[i]!='\0');i++)
    {
        if(str[i]!=str[i-1])
            printf("%c",str[i]);
    }

    printf("\n");
    return;
}

int main()
{
    int cases=0;
    scanf("%d",&cases);
    for(int i=1;i<=cases;i++)
        solveCase();
    return 0;
}
