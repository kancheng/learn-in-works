# include <cstdlib>
# include <iostream>
using namespace std;

class sample
{
    int i;
public:
    sample();
    void increment();
    void display();
};
sample::sample()
{
    cout << "Constructor function" << endl;
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
                            


