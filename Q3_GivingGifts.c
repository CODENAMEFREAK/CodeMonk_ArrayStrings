#include<stdio.h>

void solveCase()
{
    int numFriends, amount;
    scanf("%d%d",&numFriends,&amount);
    int gift[numFriends];
    int currTotal =0;
    for(int i=0 ; i<numFriends;i++)
            scanf("%d",(gift+i));
    for(int i=0;i<numFriends;i++)
    {
        currTotal =0;
        for(int j=i;(j<numFriends && currTotal<amount);j++)
        {
            currTotal+=gift[j];
            if(currTotal == amount)
            {
                printf("YES\n");
                return;
            }
        }
    }
    printf("NO\n");

}

int main()
{
    int cases =0;
    scanf("%d",&cases);
    for(int i=1;i<=cases;i++)
        solveCase();
    return 0;
}
