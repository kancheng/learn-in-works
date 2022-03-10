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
void sample::initial ()
{
    i = 0;
}
void sample::increment ()
{
    i++;
}
void sample::display ()
{
    cout << i << endl;
}
int main()
{
    sample A,B;
    int *i;

    A.initial();
    B.initial();
    cout << "It is to show tha data of object A.";
    A.display();
    cout << "It is to show tha data of object B.";
    B.display();
    A.increment();
    cout << "It is to show tha data of object A.";
    A.display();
    cout << "It is to show tha data of object B.";
    B.display();
    system("pause");
    return 0;
}
                            


