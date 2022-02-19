# include <cstdlib>
# include <iostream>
using namespace std;
class X
{
protected:
    int value;
public:
    virtual void getvalue (int i)
    {
        cout << "X's class - getvalue function" << endl;
        value = i;
    }
    virtual void display()
    {
        cout << "X's class - display function" << endl;
        cout << "value = " << value << endl;
    }
};

class Y : public X
{
    int k;
public:
    void getvalue (int i)
    {
        cout << "Y's class - getvalue function" << endl;
        k = i;
    }
    void display()
    {
        cout << "Y's class - display function" << endl;
        cout << "k = " << k << endl;
    }
};

int main()
{
    X *A, AA;
    Y BB;

    A = &AA;
    A->getvalue(7);;
    A->display();

    A = &BB;
    A->getvalue(8);
    A->display();
    system("pause");
    return 0;
}