#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int *val = malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val[i]);
        sum+=val[i];
    }
    printf("%i",sum);
    free(val);
}
//WITHOUT STORING VALUES
/*int main()
{
    int n,val,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&val);
        sum+=val;
    }
    printf("%i",sum);
}*/
