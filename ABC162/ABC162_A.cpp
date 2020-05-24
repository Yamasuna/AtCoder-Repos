#include <iostream>
using namespace std;

int main(void)
{
    int N;
    bool is_seven_contain = false;

    cin >> N;

    while( N != 0 )
    {
        if( (N % 10) == 7) is_seven_contain += true;
        N /= 10;
    }

    if(is_seven_contain)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
