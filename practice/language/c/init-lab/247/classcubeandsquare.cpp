# include <cstdlib>
# include <iostream>
using namespace std;
class X
{
protected:
    int x;
public:
    virtual void getvalue (int i)
    {
        cout << "X's class - getvalue function" << endl;
        x = i;
    }
    virtual void display()
    {
        cout << "Insufficient information" << endl;
    }
};

class square : public X
{
public:
    void display()
    {
        cout << " x = " << x << endl;
        cout << " x's square = " << x * x << endl;
    }
};

class cube : public X
{
public:
    void display()
    {
        cout << " x = " << x << endl;
        cout << " x's cube =" << x * x * x << endl;
    }
};

int main()
{
    X *A;
    square BB;
    cube CC;
    
    A = &BB;
    A->getvalue(8);
    A->display();

    A = &CC;
    A->getvalue(9);
    A->display();

    system("pause");
    return 0;
}