
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, s, x = 0;
    cin >> n;
    for (int i = 0; i < 7; i++)
        A[i] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x
        if (x % 7 == 0)
            A[0]++;
        if (x % 7 == 1)
            A[1]++;
        if (x % 7 == 2)
            A[2]++;
        if (x % 7 == 3)
            A[3]++;
        if (x % 7 == 4)
            A[4]++;
        if (x % 7 == 5)
            A[5]++;
        if (x % 7 == 6)
            A[6]++;
    };
    s = A[0] * (A[0] - 1) + A[1] * A[6] + A[2] * A[5] + A[3] * A[4];
    cout << s;
    return 0;
}
