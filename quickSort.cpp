#include<bits/stdc++.h>
using namespace std;
inline vector<long long >add(vector<long long>leftArray,long long pivot, vector<long long>rightArray){
    vector<long long>ans;
    for(auto&it:leftArray)ans.push_back(it);
    ans.push_back(pivot);
    for(auto&it:rightArray)ans.push_back(it);
    return ans;
}
vector<long long> quickSort(vector<long long>&array){
    if(array.size()<2)return array;
    vector<long long> leftArray,rightArray;
    long long pivot=array[array.size()-1];
    for(long long i=0;i<array.size()-1;i++){
        if(array[i]<pivot){
            leftArray.push_back(array[i]);
        }
        else{
            rightArray.push_back(array[i]);
        }
    }
    return add(quickSort(leftArray),pivot,quickSort(rightArray));
}
int main(){
    vector<long long>dat={1,4,5,7,8,9,2,3,4,7,-6,5,4,34,-123,5,-567,23,1,1,1,2,2,2,3,4,56,67,87,9,845,23,-23};
    // for(auto&it:dat)cout<<it<<' ';
    // cout<<endl;
    for(auto&it:quickSort(dat))cout<<it<<' ';
}