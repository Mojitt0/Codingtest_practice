#include <iostream>
#include "addition.h"

using namespace std;

int main()
{
    int n1, n2;
    cout << "input n1: ";
    cin >> n1;
    cout << "input n2: ";
    cin >> n2;

    int sum = add(n1,n2);
    cout << "Your result is " << sum << endl;
    return 0;
}