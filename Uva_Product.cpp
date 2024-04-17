#include<bits/stdc++.h>
using namespace std;
const long long Mx=600;
int main()
{
   string s1, s2;
   while (cin >> s1)
   {
      cin >> s2;
      long long arr[Mx];
      memset(arr, -1, sizeof(arr));
      for (long long i = 0; i <s1.length(); i++)
      for(long long j = 0; j <s2.length(); j++)
      {
         if( arr[i+j]==-1)arr[i+j]=0;
         arr[i+j]+=(s1[i]-'0')*(s2[j]-'0');
      }
      long long index=Mx-1;
      while(index>0&&arr[index]==-1)index--;
      for(long long i=index; i>0; i--)
      {
         arr[i-1]+=arr[i]/10;
         arr[i]=arr[i]%10;
      }
      long long it=0;
      while(arr[it]==0)
      {
         it+=1;
      }
      for(long long i=it; i<=index; i++)cout<<arr[i];
      cout<<endl;
   }
}