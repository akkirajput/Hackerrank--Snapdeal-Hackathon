#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int n;
    cin>>n;
    if(1<=n<=200000)
    {
        int t,x,k,q;
        cin>>q;
        if(1<=q<=20)
        {
            int a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                if(1<=a[i]<=1000000000)
                {}
            }
            while(q--)
                    {   int count,result;
                        cin>>x>>k>>t;
                        if(1<=x<=1000000000&&1<=k<=n&&0<=t<=1)
                        { count=0;
                          result=-1;
                            if(t==0)
                            {
                                for(int i=0;i<n;i++)
                                {
                                    if(a[i]>x)
                                    {
                                        count=count+1;
                                        if(count==k)
                                        {
                                             result=a[i];
                                            break;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                for(int i=n-1;i>-1;i--)
                                {
                                    if(a[i]<x)
                                    {
                                        count=count+1;
                                        if(count==k)
                                        {
                                            result =a[i];
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                cout<<result<<endl;
                        
                    }
            
        }
    }
}
    
