#include <iostream>
using namespace std;
int main()
{

    /* int num, sum;
     sum = 0;
     cout << "enter a positive intgers: " << endl;
     cin >> num;

     for (int i = 1; i < 10; i++)
     {
         sum += i;
     }

     cout << " sum = " << sum << endl;*/
    // finding the factorial of number!
    int n;
    long double factorial = 1.0;
    cout << "enter a positve integer: " << endl;
    cin >> n;
    if (n < 0)
        cout << "error* " << endl;
    else
    {
        for (int i = 1; i < n; i++)
        {
            factorial *= i;
        }
        cout << "factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}
