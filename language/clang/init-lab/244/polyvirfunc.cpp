# include <cstdlib>
# include <iostream>
using namespace std;
class X
{
protected:
    int value;
public:
    void getvalue(int i)
    {
        value = i;
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
    void makek (int i)
    {
        k = value * i;
    }
    void displayk()
    {
        cout << "k = " << k << endl;
    }
};

int main()
{
    X *A, AA;
    Y *B, BB;

    A = &AA;
    A->getvalue(5);
    A = &BB;
    A->getvalue(6);
    AA.display();
    BB.display();
    B = &BB;
    B->makek(7);
    B->displayk();
    system("pause");
    return 0;
}