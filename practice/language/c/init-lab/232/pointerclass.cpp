# include <cstdlib>
# include <iostream>
using namespace std;
class X
{
    int x;
public:
    void setx(int i);
    int putx();
};
void X::setx(int i)
{
    x = i;
}
int X::putx()
{
    return x;
}
int main()
{
    X A, *B;

    A.setx(10);
    B = &A;
    cout << "The result is ... " << B->putx() << endl;
    system("pause");
    return 0;
}
                            


