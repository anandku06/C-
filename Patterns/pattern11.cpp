/*
Write a program to print the following pattern:
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include <iostream>
using namespace std;

void printPattern(int n){
    int num;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            num = 1;
        }
        else num = 0;
        
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num = 1 - num;
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