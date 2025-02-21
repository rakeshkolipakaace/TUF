// #include <iostream>
// using namespace std;

// int main(){

//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     int gcd=1;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }
//     }
//     cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd;
//     return 0;

// }



//optimal way

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {  // Continue until remainder is 0
        int temp = b;
        b = a % b;  // Update b as remainder of a / b
        a = temp;   // Update a to the previous b
    }
    return a;  // Final GCD is stored in `a`
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}


// another way

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);  // Recursively call gcd
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}
