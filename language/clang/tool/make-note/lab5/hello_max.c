# include "foo.h"
# include "bar.h"
# include <stdio.h>
int main (int argc, const char *argv[]){
    int arr[] = { 1, 8, 6, 3, 4};
    int max = find_max( arr, 5);
    printf("max = %d\n", max);
    return 0;
}