# include <cstdlib>
# include <iostream>
using namespace std;
int larger_value (int a, int b)
{
    if ( a < b ) 
    {
        cout << "The higher number is ..." << b << endl;
    }
    else if ( a > b )
    {
        cout << "The higher number is ..." << a << endl;
    }
    else
    {
        cout << "The two values are the same." << endl;
    }
}

int main()
{
    int i, j;

    cout << "Please enter two number." << endl << " : ";
    cin >> i >> j;
    larger_value( i, j);
    system("pause");
    return 0;
}
                            


