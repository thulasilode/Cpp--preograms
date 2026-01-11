// Program to print basic data types
#include <iostream>
#include<iomanip>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long long b;
    char c;
    float f;
    double d;
    cin>>a>>b>>c>>f>>d;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(3)<<f<<endl;
    cout<<fixed<<setprecision(6)<<d<<endl;
    
    return 0;
}
