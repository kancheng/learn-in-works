# include <cstdlib>
# include <iostream>
using namespace std;

class X
{
protected:
    int value;
public:
    void getvalue()
    {
        cout << "Please enter the data :  ";
        cin >> value;
    }
    void display()
    {
        cout << "value = " << value << endl;
    }
};
class Y : public X
{
    int k;
public:
    void makek() 
    {
        k = value * 3;
    }
    void displayk()
    {
        cout << "k = " << k << endl;
    }
};
int main()
{
    Y A;
    A.getvalue();
    A.display();
    A.makek();
    A.displayk();
    system("pause");
    return 0;
}
                            


