# include <cstdlib>
# include <iostream>
using namespace std;

class sample
{
    int id1, id2;
public:
    sample(int d1, int d2)
    {
        id1 = d1;
        id2 = d2;
    }
    void display()
    {
        cout << "id1 = " << id1 << endl;
        cout << "id2 = " << id2 << endl;
    }
};
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
                            


