#include<stdio.h>
main()
{
    int rows,i,n,space,no_of_stars=0;
    scanf("%d",&n);
    rows=n/2+1;
    for(i=1;i<=rows;i++,no_of_stars=0)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        while(no_of_stars!= 2*i-1)
        {
            printf("*");
            no_of_stars++;
        }
        printf("\n");
    }
}
