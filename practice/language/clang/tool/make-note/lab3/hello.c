# include <stdio.h>
int find_max (int arr[], int n);
int main (int argc, const char *argv[]){
    int arr[] = { 1, 8, 6, 3, 4};
    int m = find_max( arr, 5);
    printf("max = %d\n", m);
    return 0;
}