#include <iostream>
using namespace std;
int pillingDomino(int x, int y){
return (x*y)/2;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<pillingDomino(x,y);
    return 0;
}
