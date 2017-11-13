#include <iostream>
usingn namespace std;
it fact(int n)
{
    //i'm in brach test
    int ans=1;
    if(n==0)
        return 1;
    return (fact(n-1)*n);

}
// this is function main
int main()
{
    //get n
    it n; cin>>n;
    cout<< fact(n);
    return 0;
}