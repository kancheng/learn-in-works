# include <cstdlib>
# include <iostream>
using namespace std;

class sample
{
    int value;
    int id;
public:
    sample(int id);
    void increment();
    void display();
};
sample::sample(int x)
{
    cout << "Constructor function" << endl;
    value = 0;
    id = x;
}
void sample::increment ()
{
    value++;
}
void sample::display ()
{
    cout << "id = " << id << " , value = ";
    cout << value << endl;
}
int main()
{
    sample A(1), B(2);
 
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
                            


