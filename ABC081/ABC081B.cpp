#include <iostream>
#include <vector>
using namespace std;

bool IsAllEven(vector<int> &array)
{
    for(int i = 0; i < array.size(); i++)
    {
        if (array[i] % 2 != 0)
            return false;
    }
    return true;
}

int main(void)
{
    int num;
    unsigned int input_integer;
    unsigned int sum = 0;

    cin >> num;
    vector<int> input(num);

    for(int i = 0; i < num; i++)
    {
        cin >> input[i];
    }

    int max_operation_cnt = 0;
    while(IsAllEven(input) == true)
    {
        max_operation_cnt++;
        for(int i = 0; i < input.size(); i++)
        {
            input[i] /= 2;
        }
    }

    cout << max_operation_cnt << endl;

    return 0;
}
