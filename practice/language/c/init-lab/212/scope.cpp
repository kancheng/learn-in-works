# include <cstdlib>
# include <iostream>
using namespace std;
char ch = 'D';

void modify()
{
    char ch;
    ch = 's';
    cout << "ch = " << ch << endl;
    :: ch = 'T';
    cout << "ch = " << ch << endl;
}

int main()
{
    cout << "It is to call modify before." << endl;
    cout << ch << endl;
    modify();
    cout << "It is to call modify after." << endl;
    cout << ch << endl;

    system("pause");
    return 0;
}
                            


