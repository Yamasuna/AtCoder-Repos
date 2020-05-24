#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int merchant_num;
    int popular_merchant_num;

    cin >> merchant_num >> popular_merchant_num;

    vector<int> vote_num(merchant_num);

    //総得票数
    int vote_sum = 0;
    double select_criteria;
    for(int i = 0; i < (int)vote_num.size(); i++)
    {
        cin >> vote_num[i];
        vote_sum += vote_num[i];
    }
    select_criteria = (double)vote_sum / (double)(4 * popular_merchant_num);

    int select_cnt = 0;
    //cout << "vote_sum = " << vote_sum << endl;
    //cout << "criteria = " << select_criteria << endl;
    
    for(int i = 0; i < (int)vote_num.size(); i++)
    {
        if(vote_num[i] >= select_criteria)
        {
            select_cnt++;
        }
    }

    if(select_cnt >= popular_merchant_num)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
