# include <cstdlib>
# include <iostream>
using namespace std;

int sum (int a, int b, int c = 0 )
{
    return ( a + b + c );
}

int main()
{
    int i = 3;
    int j = 4;
    int k = 5;
    int result;

    result = sum ( i, j);
    cout << "The result 1 :" << result << endl;
    result = sum ( i, j, k);
    cout << "The result 2 :" << result << endl;
    system("pause");
    return 0;
}
                            


