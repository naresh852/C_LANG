#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int m;
    int mi;
    int max,maxy,mix;
    if(n>>k){
        mi=k;

    }else{mi=n;}
     if(n>>k){
        m=n;
    }else{m=k;}
    for(int i=1;i<mi;i++){
        for(int j=2;j<=m;j++){
        if((i&j)==1){
            max=1;
        }else if((i&j)==2){
          max=2;
        }else{max=3;}
        if((i|j)==1){
            maxy=1;
        }else if((i|j)==2){
          maxy=2;
        }else{maxy=3;}
        if((i^j)==1){
            mix=1;
        }else if((i^j)==2){
          mix=2;
        }else{mix=3;}
        }

    }
    printf("%d\n%d\n%d",max,maxy,mix);
    return 0;
}*/
//copied from website shows no error working fine//
void calculate_the_maximum(int n, int k) {
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;

    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            if (((i&j) > maxAnd) && ((i&j) < k)) {
                maxAnd = i&j;
            }
            if (((i|j) > maxOr) && ((i|j) < k)) {
                maxOr = i|j;
            }
            if (((i^j) > maxXor) && ((i^j) < k)) {
                maxXor = i^j;
            }
        }
    }

    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

/*//copied from website and shows error
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T, n, k, i, j, val;
    scanf("%d",&T);
    while (T > 0)
    {
        int maximum = 0;
        scanf("%d%d",&n, &k);
        int max_val = 0;
        int a = 0, b = k - 1;

    for (a = n; a > 2; a--)
    {
        if (a == b)
            continue;
        if ((a & b) > max_val)
        {
            max_val = a & b;
        }
    }

    printf("%d\n",max_val );

    T--;
  }
  return 0;
}*/
