# include <cstdlib>
# include <iostream>
using namespace std;

class sample
{
    int id1, id2;
public:
    sample(int id1, int id2);
    void display();
};
sample::sample(int x, int y)
{
    id1 = x;
    id2 = y;
}
void sample::display ()
{
    cout << "id1 = " << id1 << endl;
    cout << "id2 = " << id2 << endl;
}
int main()
{
    sample A(10,5), B(22,33);
 
    cout << "It is to show tha data of object A." << endl;
    A.display();
    cout << "It is to show tha data of object B." << endl;
    B.display();
    system("pause");
    return 0;
}
                            

