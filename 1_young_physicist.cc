#include<iostream>
#include<chrono>
using namespace std;
 
int main()
{
    auto start = chrono::steady_clock::now();
    int n, x, y, z, sum1=0, sum2=0, sum3=0;
    cin>>n;
 
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y>>z;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
    
    if(sum1 == 0 && sum2 == 0 && sum3 == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    cout <<endl;
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;

}