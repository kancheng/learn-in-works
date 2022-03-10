# include <cstdlib>
# include <iostream>
using namespace std;
class sample
{
    int i;
public:
    void initial();
    void increment();
    void display();
};

void sample::initial()
{
    this->i = 0;
}

void sample::increment()
{
    this->i++;
}

void sample::display()
{
    cout << this->i << endl;
}

int main()
{
    
    sample A, B;

    A.initial();
    B.initial();

    cout << "It is to show the data of object A.";
    A.display();
    cout << "It is to show the data of object B.";
    B.display();

    A.increment();
    cout << "It is to show the data of object A.";
    A.display();
    cout << "It is to show the data of object B.";
    B.display();
    system("pause");
    return 0;
}
                            


