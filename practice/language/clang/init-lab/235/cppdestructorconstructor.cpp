# include <cstdlib>
# include <iostream>
using namespace std;
class number
{
    int cm;
public:
    number(int x)
    {
        cm = x * 100;
    }
    number(const char *str)
    {
        cm = atoi(str);
    }
    void display()
    {
        cout << "This is ..." << cm << " cm " << endl;
    }

};
int main()
{
    char str[80];

    cout << "Please enter the distance (centimeters). ";
    cin >> str;
    number A(str);
    A.display();
    cout << "Please enter the distance (meters). ";
    int meter;
    cin >> meter;
    number B(meter);
    B.display();
    system("pause");
    return 0;
}
                            


