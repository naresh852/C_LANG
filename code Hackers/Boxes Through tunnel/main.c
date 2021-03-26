/*#include <stdio.h>
#include <stdlib.h>
//THIS MY OWN WRITTEN CODE
int main()
{
    int n;
    scanf("%d",&n);
    int sum[n];
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][2]<41){

                sum[i]=arr[i][0]*arr[i][1]*arr[i][2];

            }else if(arr[i][2]>=41){
            sum[i]=0;

            }
        }

    }for(int i=0;i<n;i++){
        if(sum[i]>>0){
    printf("%d\n",sum[i]);}
    }
    return 0;

}*/

//CODE FROM BLOGGERSPOT WHICH USES STRUCT
#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
    int length;
    int width;
    int height;
	/**
	* Define three fields of type int: length, width and height*/

};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box*/
	return b.height*b.length*b.width;
}

int is_lower_than_max_height(box b) {
    if(b.height<MAX_HEIGHT){

     return 1;
    }else{return 0;};
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise*/

}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
