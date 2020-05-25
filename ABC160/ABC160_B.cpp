#include <iostream>

using namespace std;

int main(void)
{
    const int Gladness_500yen = 1000;
    const int Gladness_5yen = 5;
    int X;
    int totalGladness = 0;

    cin >> X;

    //500円硬貨で両替
    int num_500yen = X / 500;
    totalGladness += num_500yen * Gladness_500yen;
    X = X % 500;

    //5円硬貨で両替
    int num_5yen = X / 5;
    totalGladness += num_5yen * Gladness_5yen;
    
    cout << totalGladness << endl;
    return 0;
}
