/*
A
A B
A B C
A B C D
A B C D E
*/

#include <iostream>
using namespace std;

void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}

int main()
{
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}