# include <cstdlib>
# include <iostream>
using namespace std;

int main()
{
    int *i;

    i = new int;
    *i = 10;
    cout << " i = " << *i << endl;
    delete i;    
    system("pause");
    return 0;
}
                            


