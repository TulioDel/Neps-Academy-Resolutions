#include <iostream>

using namespace std;

int main()
{
    int n, r = 1;
    cin >> n;
    

    for (int i = 1; i < n+1; i++)
        r = r * i;
    
    cout << r;
    
    return 0;
}
