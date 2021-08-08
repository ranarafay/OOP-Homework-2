// *****Multiplication Table******

#include <iostream>
using namespace std;

int main()
{

    int num, lim;
    cout << "Please Enter the Number for Multiplication Table: " << endl;
    cin >> num;
    cout << "Please Enter the Limit for Multiplication Table: " << endl;
    cin >> lim;

    cout << "\nThe multiplication table of " << num << " till " << lim << " is:\n"
         << endl;

    for (int i = 0; i < lim + 1; i++)
    {
        cout << num << " x " << i << " =  " << num * i << endl;
    }

    return 0;
}