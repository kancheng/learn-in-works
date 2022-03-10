# include <cstdlib>
# include <iostream>
using namespace std;
class sample
{
    int x, y;
public:
    sample operator+(sample var);
    sample operator=(sample var);
    void display(void);
    void setxy(int xx, int yy);
};

sample sample::operator+(sample var)
{
    sample tmp;
    tmp.x = x + var.x;
    tmp.y = y + var.y;
    return tmp;
}

sample sample::operator=(sample var)
{
    x = var.x;
    y = var.y;
    return *this;
}

void sample::display(void)
{
    cout << " x = " << x << endl;
    cout << " y = " << y << endl;
}

void sample::setxy(int xx, int yy)
{
    x = xx;
    y = yy;
}

int main()
{
    
    sample A, B, C;

    A.setxy( 10, 15);
    B.setxy( 20, 30);

    C = A + B;
    cout << "It is to show object C." << endl;
    C.display();
    cout << "It is to show the data of object A." << endl;
    A.display();
    C = A;
    cout << "It is to show the data of object C." << endl;
    C.display();
    system("pause");
    return 0;
}
                            


