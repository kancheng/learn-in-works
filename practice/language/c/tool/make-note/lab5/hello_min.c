# include "foo.h"
# include "bar.h"
# include <stdio.h>
int main (int argc, const char *argv[]){
    int arr[] = { 1, 8, 6, 3, 4};
    int min = find_min( arr, 5);
    printf("min = %d\n", min);
    return 0;
}