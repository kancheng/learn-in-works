# include <cstdlib>
# include <iostream>
using namespace std;

int main()
{
    int i, j, k, sum;
    char ch1, ch2;
    float x1, x2, ave;
    cout << "Please enter 2 characters." << endl;
    cin >> ch1 >> ch2;
    cout << "The 2 characters are printed in the reverse order of reception." << endl << " : "
        << ch2 << ch1 << endl;
    cout << "Please enter 3 integers." << endl << " : ";
    cin >> i
        >> j
        >> k;
    sum = i + j + k;
    cout << "The sum is ... " << endl << " : "
        << sum << "\n";
    cout << "Please enter 2 floats." << endl << " : ";
    cin >> x1 >> x2;
    ave = ( x1 + x2 ) / 2.0;

    cout << "The average number is ... " << ave << endl;

    system("pause");
    return 0;
}
                            


