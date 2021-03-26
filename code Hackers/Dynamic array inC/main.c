#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d",&n);
    int q;
    scanf("%d",&q);

    int pages;
    int books;
    int b[n];
    int ar[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&ar[i][j]);
        }
        if(ar[i][0]==1|| ar[i][0]==2){scanf("%d",&b[i]);}

    }

    for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                if(ar[i][0]==2 && ar[i][1]==ar[j][1]){
                    pages=b[j];
                }
            }

    }

    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
    if(ar[i][0]==3 && ar[i][1]==b[j]){
                  books=ar[j][1];}
                }}
    printf("%d\n",pages);
    printf("%d",books);

    return 0;
}
/*//code from hacker solution in c.
#include <stdio.h>
#include <stdlib.h>


 //This stores the total number of books in each shelf.

int* total_number_of_books;


 //This stores the total number of pages in each book of each shelf.
 //The rows represent the shelves and the columns represent the books.

int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    total_number_of_books = calloc(total_number_of_shelves, sizeof(int));

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    total_number_of_pages = malloc(total_number_of_shelves * sizeof(int *));
    for (int i = 0; i < total_number_of_shelves; i++) {
        total_number_of_pages[i] = calloc(1100, sizeof(int));
    }

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1) {
            /*
             //Process the query of first type here.

            int shelf, pages;
            scanf("%d %d", &shelf, &pages);
            total_number_of_books[shelf]++;
            int *book = total_number_of_pages[shelf];
            while (*book != 0)
                book++;
            *book = pages;

        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }

    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }

    if (total_number_of_pages) {
        free(total_number_of_pages);
    }

    return 0;
}*/
