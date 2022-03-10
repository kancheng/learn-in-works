# include <cstdlib>
# include <iostream>
using namespace std;

int main()
{
    float x;
    int y = 9;
    int z = 4;
    x = y/z;

    cout << "x = " << x << endl;
    x = float (y)/ float (z);
    cout << "x = " << x << endl;

    system("pause");
    return 0;
}
                            


