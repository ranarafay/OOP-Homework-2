// *****Even Sum*****

#include <iostream>
using namespace std;

int main()
{

    int e_cnt, i;
    e_cnt = 0;

    i = 0;
    
    // must be done by do while loop
    do
    {
        if (i % 2 == 0)
        {

            e_cnt += i;
        }
        i++;
    } while (i <= 100);

    cout << "The sum of evens till 100 is: " << e_cnt << endl;

    return 0;
}