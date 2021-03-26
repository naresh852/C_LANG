#include <stdio.h>
#include <stdlib.h>
/*
#include <math.h>

#include <string.h>

#include <assert.h>
#include <limits.h>
#include <stdbool.h>*/

int main () {
    /*int i;
    scanf(":*9%d",&i);
    printf("%d",i);*/
    int hh, mm, ss;
    char tt[5] ;


    scanf ("%d:%d:%d%s", &hh, &mm, &ss, tt);

    hh = (strcmp (tt, "PM") == 0 && hh != 12) ? hh + 12 : hh;
    if (strcmp (tt, "AM") == 0 && hh == 12) hh = 0;
    printf ("%02d:%02d:%02d", hh, mm, ss);
    return 0;
}
