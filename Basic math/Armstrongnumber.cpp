#include <iostream>
using namespace std;

int main()
{
    int n, original, sum = 0, r, temp;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (sum == original)
    {
        cout << original << " is an Armstrong number.";
    }
    else
    {
        cout << original << " is not an Armstrong number.";
    }
    return 0;
}