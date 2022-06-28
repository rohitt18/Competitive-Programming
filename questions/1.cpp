/*
Given rectangle of length l and b. Print area of rectangle

Constraints: 
1 <= l <= 10^9
1 <= b <= 10^9

Input foramt:
2 space separated integer l & b

Output foramt:
Single number which is area of rectangle

Sample input:
3 4 

Sample output:
12
*/

#include <iostream>
using namespace std;

int main()
{
    int l,b;
    cin>>l>>b;
    cout << 1LL * l * b << endl;

    return 0;
}