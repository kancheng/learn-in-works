# include <cstdlib>
# include <iostream>
using namespace std;
class number
{
    int i;
public:
    number(int x)
    {
        i = x;
    }
    number(const char *str)
    {
        i = atoi(str);
    }
    void display()
    {
        cout << "The number is ..." << i << endl;
    }

};
int main()
{
    number A(5);
    A.display();
    number B("543");
    B.display();
    system("pause");
    return 0;
}
                            


