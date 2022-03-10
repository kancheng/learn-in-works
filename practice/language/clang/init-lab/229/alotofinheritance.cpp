# include <cstdlib>
# include <iostream>
using namespace std;
class X
{
protected:
    int x;
public:
    void getx()
    {
        cout << "Please enter the data :  ";
        cin >> x;
    }
};
class Y
{
protected:
    int y;
public:
    void gety()
    {
        cout << "Please enter the data :  ";
        cin >> y;
    }
};
class Z : public X, public Y
{
public:
    int makexy()
    {
        return x*y;
    }
};
int main()
{
    Z C;
    C.getx();
    C.gety();
    cout << C.makexy() << endl;
    system("pause");
    return 0;
}
                            


