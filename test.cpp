#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    // ofstream file("test.txt");
    // file << "My name is Raj.";

    ifstream file("test.txt");
    // file >> str;
    getline(file, str);
    cout << str << endl;
    return 0;
}