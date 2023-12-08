
#include<iostream>
using namespace std;
void func(int n){
if(n > 0){  //printing at returning time
    func(n-1);
    cout<<n<<"\n";
    
}
}
int main()
{
    int x = 5;
    func(x);
    return 0;
}