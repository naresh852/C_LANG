#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
    scanf("%d", &n);

    char**arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr+i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
    printf("%s\n",arr[0]);
    printf("%s\n",arr[1]);


return 0;
}
