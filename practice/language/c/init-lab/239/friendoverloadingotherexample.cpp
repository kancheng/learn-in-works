# include <cstdlib>
# include <iostream>
using namespace std;
class sample
{
    int x;
public:
    sample operator=(int i);
    friend sample operator+(sample var, int i);
    friend sample operator+(int i, sample var);
    void display(void);
};

sample sample::operator=(int i)
{
    x = i;
    return *this;
}

sample operator+(sample var, int i)
{
    sample tmp;
    tmp.x = var.x + i;
    return tmp;
}

sample operator+(int i, sample var)
{
    sample tmp;
    tmp.x = var.x + i;
    return tmp;
}

void sample::display(void)
{
    cout << " x = " << x << endl;
}

int main()
{
    
    sample A;

    A = 15;
    A.display();
    A = A + 10;
    A.display();
    A = 10 + A;
    A.display();
    system("pause");
    return 0;
}
                            


