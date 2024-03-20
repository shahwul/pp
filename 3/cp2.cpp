#include <iostream>
using namespace std;

int main()
{
    int n, x, y, num = 1;
    cout << "Enter the number of row: ";
    cin >> n;
    x = 1;
    y = 1;
    while (x <= n)
    {
        while (y <= n)
        {
            cout << num << " ";
            num++;
            y++;
        }
        y = 1;
        num = 1;
        cout << "\n";
        x++;
    }

    return 0;
}