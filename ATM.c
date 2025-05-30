#include<stdio.h>
int main()
{
    int num,i=1;
    for(i=1;i<=3;i++)
    {
        printf("Enter the pin:\t");
        scanf("%d",&num);
        if(num==1213)
        {
            printf("Please collect your cash");
            break;
        }
        else if(i==3)
        {
            printf("your card is block for 24 hrs");
        }
        else
        {
            printf("Incorrect password");
        }
    }
    return 0;
}
