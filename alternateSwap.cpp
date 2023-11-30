#include<iostream>
#include<vector>
using namespace std;
void swapAlternate(vector<int> v, int size){
    for(int i = 0; i < 8; i = i + 2){
        swap(v[i], v[i+1]);
    }
    cout<<"The vector with swapped alternate elements is:\n";
    for(int i = 0; i < 8; i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v(8);
    cout<<"Enter the vector elements\n";
    for(int i = 0; i < 8; i++){
        cin>>v[i];
    }
    swapAlternate(v,8);

    return 0;
}