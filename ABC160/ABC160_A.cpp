#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    bool like = true;
    cin >> str;

    if(str[2] != str[3]) like = false;
    if(str[4] != str[5]) like = false;

    if(like == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    return 0;
}
