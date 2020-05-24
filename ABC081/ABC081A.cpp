#include <iostream>
using namespace std;

int IsMarble(char s)
{
    if (s == '1')
        return 1;
    
    return 0;
}

int main(void)
{
    char s1, s2, s3;
    int marble_cnt = 0;

    cin >> s1 >> s2 >> s3;

    marble_cnt += IsMarble(s1);
    marble_cnt += IsMarble(s2);
    marble_cnt += IsMarble(s3);

    cout << marble_cnt << endl;

    return 0;
}
