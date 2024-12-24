#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long b = ceil((double)n / a);
    long long c = ceil((double)m / a);
    cout << b * c << endl;
    return 0;
}