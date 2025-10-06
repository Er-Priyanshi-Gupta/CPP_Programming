//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution {
public:
    void generateBinaryStringsHelper(int num, string &current, vector<string> &result, char lastChar) {
        if (num == 0) {
            result.push_back(current);  
            return;
        }
        current.push_back('0');
        generateBinaryStringsHelper(num - 1, current, result, '0');
        current.pop_back(); 

        if (lastChar != '1') {
            current.push_back('1');
            generateBinaryStringsHelper(num - 1, current, result, '1');
            current.pop_back();  
        }
    }

    vector<string> generateBinaryStrings(int num) {
        vector<string> result;
        string current = "";
        generateBinaryStringsHelper(num, current, result, '0'); 
        return result;
    }
};



//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends