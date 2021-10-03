#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int arr[10];
    arr[0] = 0;
    int x;
    for(x = 1; x < 10; x++){
        arr[x] = rand();
    }

    for(x = 0; x < 10; x++){
        printf("%i\n", arr[x]);
    }

    int sep[10];
    int *p;
    int reverse = 9;
    for(x = 0; x < 10; x++){
        p = arr[x];
        sep[reverse] = p;
    }
    printf("\n");
    for(x = 0; x < 10; x++){
        printf("%i\n", sep[x]);
    }
    srand( time(NULL) );

}