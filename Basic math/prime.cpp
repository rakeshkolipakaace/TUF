// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i, count = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             count++;
//         }
//     }

//     if (count == 2)
//     {
//         cout << n << " is a prime number.";
//     }
//     else
//     {
//         cout << n << " is not a prime number.";
//     }
//     return 0;
// }


//optimal approach


#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int n, i, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
        }

        if(n/i!=i){
            count++;
        }
    }

    if (count == 2)
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }
    return 0;
}


//optimal approach



