# include <cstdlib>
# include <iostream>
using namespace std;
class sample
{
    int x, y;
public:
    sample (int i, int j)
    {
        x = i;
        y = j;
    }
    friend ostream &operator<<(ostream &stream, sample var);
};

ostream &operator << (ostream &stream, sample var)
{
    stream << var.x << endl;
    stream << var.y << endl;
    return stream;
}

int main()
{
    sample A( 5, 6), B( 7, 8);
    cout << A << B;
    system("pause");
    return 0;
}
                            


