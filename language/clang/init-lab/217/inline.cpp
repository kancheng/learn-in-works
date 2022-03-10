# include <cstdlib>
# include <iostream>
using namespace std;
inline int abs (int i)
{
    return ( i < 0 ? -i : i );
}
inline int min (int v1, int v2)
{
    return ( v1 <= v2 ? v1 : v2 );
}
int main()
{
    int i,j;
    cout << "Please enter the first number(i) : ";
    cin >> i;
    cout << "Please enter the first number(j) : ";
    cin >> j;
    cout << endl << " min = " << min(i,j) << endl;
    i = abs(i);
    j = abs(j);
    cout << endl << "abs (i) : " << i << endl;
    cout << endl << "abs (j) : " << j << endl;
    system("pause");
    return 0;
}
                            


