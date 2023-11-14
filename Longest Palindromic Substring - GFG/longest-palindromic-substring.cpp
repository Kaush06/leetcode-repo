//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string S){
        // code here 
        string ans;
        for(int i=0;i<S.size();i++){
            int i1 = i-1;
            int i2 = i+1;
            int x =0;
            while(i1>=0 && i2<S.size() && S[i1]==S[i2]){
                x++;
                i1--;
                i2++;
            }
            if(2*x+1>ans.size()){
                // cout<<i<<" "<<x<<endl;
                ans = S.substr(i-x,2*x+1);
            }
        }
        for(int i=0;i<S.size();i++){
            int i1 = i-1;
            int i2 = i;
            int x =0;
            while(i1>=0 && i2<S.size() && S[i1]==S[i2]){
                i1--;
                i2++;
                x++;
            }
            if(2*x>ans.size()){
                // cout<<i<<" "<<x<<endl;
                ans = S.substr(i-x,2*x);
            }
        }
        if(ans.size()==0 && S.size()!=0){
            ans.push_back(S[0]);
        }
        return ans;
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends