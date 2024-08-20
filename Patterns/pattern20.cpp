/*
*        * 
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        * 
*/

#include <iostream>
using namespace std;

void printPattern(int n)
{
    int space = (2*n)-2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space -= 2;  
    }
    space = 2;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= n-i-1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= n-i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
        space += 2;
    }
}
 
int main()
{
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}