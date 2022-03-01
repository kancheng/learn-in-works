# include <stdio.h>
int find_max (int arr[], int n) {
    int i;
    int m = arr[0];
    for (i = 0; i < n; i++ ) {
        if (arr[i] > m) {
            m = arr[i];
        }
    }
    return m;
}
int main (){
    int arr[5] = { 1, 8, 6, 3, 4};
    int m = find_max( arr, 5);
    printf("%d\n", m);
    return 0;
}