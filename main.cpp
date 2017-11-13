#include <iostream>
usingn namespace std;
int main()
{
    it n; cin>>n;
    int ans=1;
    for (int i = 1; i < =n; ++i)
    {
        ans *= i;
    }
    cout<<ans;
    return 0;
}