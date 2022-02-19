# include <cstdlib>
# include <iostream>
using namespace std;
int display (const char *str)
{
    cout << "The string is ... " << str << endl;
}

int display (int i )
{
    cout << "The integer is ... " << i << endl;
}

int main()
{
    int i = 87;
    display("Kan");
    display(i);
    system("pause");
    return 0;
}
                            


