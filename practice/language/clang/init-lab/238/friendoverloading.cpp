# include <cstdlib>
# include <iostream>
using namespace std;
class sample
{
    int x, y;
public:
    friend sample operator+(sample var1, sample var2);
    sample operator=(sample var);
    void display(void);
    void setxy(int xx, int yy);
};

sample operator+(sample var1, sample var2)
{
    sample tmp;
    tmp.x = var1.x + var2.x;
    tmp.y = var1.y + var2.y;
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
                            


