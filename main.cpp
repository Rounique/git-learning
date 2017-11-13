#include <iostream>
usingn namespace std;
it fact(int n)
{
    int ans=1;
    for (int i = 1; i < =n; ++i)
    {
        ans *= i;
    }
    return ans;
}
int main()
{
    it n; cin>>n;
    cout<< fact(n);
    return 0;
}