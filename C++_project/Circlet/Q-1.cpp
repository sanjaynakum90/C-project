#include<iostream>

using namespace std;

int main(){

int num = 41;

for (int i=num; i<=45; i++)
{
    for (int j=num; j<=i; j++)
    {
        cout << j << " ";
    }
    cout << endl;
}

    return 0;
}