# include <cstdlib>
# include <iostream>
using namespace std;

int main()
{
    const int loop = 9;

    int i = 5;

    while ( i <= loop ) 
    {
        int j = 1;
        while ( j++ <= (loop - i))
        {
            cout << " ";
        }
        j = loop;
        while ( (j++ - i) < i)
        {
            cout << "A";
        }
        i++;
        cout << endl;
    }

    system("pause");
    return 0;
}
                            


