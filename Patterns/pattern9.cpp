/*
Write a program to print the following pattern:
    *    
   ***   
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/


#include <iostream>
using namespace std;

void pattern7(int n){
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
void pattern8(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        
        for (int j = 0; j < 2*n - (2*i+1); j++)
        {
            cout << "*";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main1()
{
    int n;
    cin >> n;
    pattern7(n);
    // pattern8(n);
    return 0;
}