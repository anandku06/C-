/*
Write a program to print the following pattern:
    *    
   ***   
  *****
 *******
*********
*/

#include <iostream>
using namespace std;

void printPattern7(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++) // spaces
        {
            cout << " ";
        }
        for (int j = 0; j < 2*i+1; j++) // stars
        {
            cout << "*";
        }
        for (int j = 0; j < n-i-1; j++) // spaces
        {
            cout << " ";
        }
        cout << endl;
    }
    
}

int main()
{
    int n;
    cin >> n;
    printPattern7(n);
    return 0;
}