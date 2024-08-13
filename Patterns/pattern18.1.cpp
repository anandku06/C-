/*
E
D E
C D E
B C D E
A B C D E
*/




#include <iostream>
using namespace std;

void printPattern(int n){
    for (int i = 0; i < n; i++)
    {
        for (char j = ('A' + (n-1)) - i; j <= 'A' + (n-1); j++)
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