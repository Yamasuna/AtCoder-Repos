#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int m, n;

    if(b < a)
    {
        m = a;
        n = b;
    }
    else
    {
        m = b;
        n = a;
    }
    

    while( n != 0 )
    {
        int tmp;
        tmp = n;
        n = m % n;
        m = tmp;
    }
    return m;
}

int gcd3(int a, int b, int c)
{
    int gcd_1, gcd_2;
    gcd_1 = gcd(a, b);
    gcd_2 = gcd(a, c);
    return (gcd_1, gcd_2);
}


int main(void)
{
    int sum_gcd = gcd3(1, 1, 1);

    cout << sum_gcd << endl;

    return 0;
}
