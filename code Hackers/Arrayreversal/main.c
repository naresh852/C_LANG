#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    int rev=0;
    arr = (int*) malloc(num * sizeof(int));

    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    int s=num-1;

    /* Write the logic to reverse the array. */

    for(i = s; i >=0; i--)
        printf("%d ", arr[i]);
    return 0;
}
