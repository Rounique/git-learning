#include <iostream>
usingn namespace std;
it fact(int n)
{
    int ans=1;
    if(n==0)
        return 1;
    return (fact(n-1)*n);

}
// this is function main
int main()
{
    it n; cin>>n;
    cout<< fact(n);
    return 0;
}