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
    friend istream &operator>>(istream &stream, sample &var);
};

ostream &operator << (ostream &stream, sample var)
{
    stream << var.x << endl;
    stream << var.y << endl;
    return stream;
}

istream &operator >> (istream &stream, sample &var)
{
    cout << "Please enter x and y : ";
    stream >> var.x >> var.y;
    return stream;
}

int main()
{
    sample A( 5, 6);
    cout << A;
    cin >> A;
    cout << A;
    system("pause");
    return 0;
}
                            


