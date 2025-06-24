#include<iostream>
#include<vector>
using namespace std;
int mountainPeak(vector<int> vec){
    int st=0, end=vec.size()-1;
    while (st<=end)
    {
        int mid = st + (end-st)/2;
        if(vec[mid-1]<vec[mid] && vec[mid]>vec[mid+1]){
            return mid;
        }
        if(vec[mid]>vec[mid-1]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {1, 2, 3 ,2, 1};
    cout << mountainPeak(vec) << endl;
    return 0;
}