#include <bits/stdc++.h>
using namespace std;

class Solution{
    
    public:
    
    vector<int> leaders(int a[], int n){

        int i=0,mi=0;
        vector<int> v1,v2;
        mi=a[n-1];
        
        for(i=n-1;i>=0;--i)
        {
            if(mi <= a[i])
            {
                v1.push_back(a[i]);
                mi=a[i];
            }
            
        }
        
        int l = v1.size();
        
        for(i=l-1;i>-1;--i)
        {
            v2.push_back(v1[i]);
        }
        return v2;
    }
};


int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
