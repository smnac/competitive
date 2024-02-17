#include<bits/stdc++.h>
using namespace std;

int main()
{
pair<int,int> p = {1,3};
cout<<p.first << " "<<p.second<<" ";

pair<int,pair<int,int>> q = {1,{2,3}};
cout<<q.second.second<<" ";

pair<int,int> arr[]={{1,2},{1,3},{1,4}};
cout<<arr[2].second<<endl;


    return 0;
}
