# include <cstdlib>
# include <iostream>
using namespace std;
class X
{
    int x;
public:
    X(int i)
    {
        cout << "X initial" << endl;
        x = i;
    }
    void display()
    {
        cout << "The x vlaue of Class X show.";
        cout << x << endl;
    }
};
void displayx(X sam)
{
    sam.display();
}
int main()
{
    X A(5);
    displayx(A);
    system("pause");
    return 0;
}
                            


