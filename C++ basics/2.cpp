#include <iostream>
using namespace std;

int main()
{
    // // Calculation order in datatypes
    // // Order - Double, float, long long int, long int, int, char
    cout << 7 / 2 << endl;
    cout << 7 / 2.0 << endl;
    cout << 'a' + 1 << endl;
    // *** Toh hamesha pehle calculation hogi and fir voh order precedence ke hisab se store hoga

    // // Operator Precedence (using brackets is the best way)
    cout<<7/2*3<<endl;
    cout<<3*7/2<<endl;

    // // Overflow 
    // range of int is ==> -10^9 < int < 10^9
    // range of long int is ==> -10^12 < int < 10^12
    // range of long long int is ==> -10^18 < int < 10^18

    int a = 1000000000;
    int b = 1000000000;
    long long int c = a * 1LL * b;
    cout<<c<<endl; // output should be 10^10 but we will get wrong ans bec it will get overflow

    cout<<INT_MAX<<endl;

    return 0;
}