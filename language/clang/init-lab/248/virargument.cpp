# include <cstdlib>
# include <cmath>
# include <iostream>
using namespace std;
class X
{
protected:
    int x, y;
public:
    virtual void getvalue (int i, int j = 0)
    {
        cout << "X's class - getvalue function" << endl;
        x = i;
        y = j;
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

class chpow : public X
{
public:
    void display()
    {
        cout << "x = " << x << " ; y = " << y << endl;
        cout << "pow( x, y) = "
            << pow( double(x), double(y)) << endl;
    }
};

int main()
{
    X *A;
    square BB;
    cube CC;
    chpow DD;
    
    A = &BB;
    A->getvalue(8);
    A->display();

    A = &CC;
    A->getvalue(9);
    A->display();

    A = &DD;
    A->getvalue(5,4);
    A->display();
    system("pause");
    return 0;
}