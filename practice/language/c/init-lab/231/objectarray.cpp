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
    X A[3];
    int sum = 0;
    A[0].setx(5);
    A[1].setx(6);
    A[2].setx(7);
    for (int j = 0; j < 3; j++)
    {
        sum += A[j].putx();
    }
    cout << "The sum of the array of object ... = " << sum << endl;
    system("pause");
    return 0;
}
                            


