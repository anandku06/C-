/*
A
B B
C C C
D D D D
E E E E E
*/

#include <iostream>
using namespace std;

void printPattern(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    }
    
}

int main()
{
    int n;
    cin >> n;
    printPattern(n);   
    return 0;
}