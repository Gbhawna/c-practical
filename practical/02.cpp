#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int arr[] = {24, 8, 9, 3, 8, 45, 24} ;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << ' ';
    }

    return (0);
} 
