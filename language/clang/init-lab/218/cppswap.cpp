# include <cstdlib>
# include <iostream>
using namespace std;
int swap (int& x, int& y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int i,j;
    i = 5;
    j = 6;
    cout << "It is to call swap before." << endl
        << " i = " << i << " ; j = " << j << endl;
    swap( i, j);
    cout << "It is to call swap after." << endl
        << " i = " << i << " ; j = " << j << endl;    
    system("pause");
    return 0;
}
                            


