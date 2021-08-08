// *****Odd Sum****

#include <iostream>
using namespace std;

int main()
{

    int cnt, i;
    cnt = 0;
    i = 0;

    // must be done by while loop
    while (i <= 100)
    {
        if (i % 2 != 0)
        {
            cnt += i;
        }
        i++;
    }

    cout << "The sum of odds till 100 is: " << cnt << endl;
    return 0;
}