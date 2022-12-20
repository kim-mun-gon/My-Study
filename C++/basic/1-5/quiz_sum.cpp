#include <iostream>

int main()
{
    using namespace std;

    int num;
    int sum = 0;

    cout << "Please enter num: " << endl;
    cin >> num;

    for(int i = 1; i<=num; i++)
    {
        sum += i;
    }

    cout << "sum: " << sum << endl;
    return 0;
}