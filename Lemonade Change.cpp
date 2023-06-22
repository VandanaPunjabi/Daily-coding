//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        
       
        int countFive = 0;
        int countTen = 0;
        int countTwenty = 0;
        
        if(bills[0]==10 || bills[0]==20){
            return false;
        }
        
        for(int i=0;i<N;i++){
            
            if(bills[i]==5){
                countFive++;
            }
            else if(bills[i]==10){
                if(countFive > 0){
                    
                    countFive--;
                    countTen++;
                }
                else{
                    return false;
                }
            }
            else if(bills[i]==20){
                if(countFive>0 && countTen >0){
                    countTen--;
                    countFive--;
                }
                else if(countFive > 2 && countTen==0){
                    for(int i=0;i<3;i++){
                        countFive--;
                    }
                }
                    else{
                        return false;
                    }
                }
            }
        
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends
