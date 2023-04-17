//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int N)
		{
		    // Code here.
		    int dup=N;
		    int revNum=0;
		    int lastdigit;
		    while(N>0){
		        lastdigit=N%10;
		        N=N/10;
		        revNum=(revNum)*10+lastdigit;
		    }
		    if(revNum==dup) return "Yes";
		    else return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends