# include <cstdlib>
# include <iostream>
using namespace std;
class sample
{
public:
    int x, y;
    sample (int i, int j)
    {
        x = i;
        y = j;
    }
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
                            


