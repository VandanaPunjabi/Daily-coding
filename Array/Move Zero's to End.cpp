vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.

    vector<int>ans;

    for(int i=0;i<n;i++){
        if(a[i] != 0){
            ans.push_back(a[i]);
        }
    }
        for(int i=0;i<n;i++){
        if (ans.size() != a.size()) {
            ans.push_back(0);
        }
   }

    return ans;
}
