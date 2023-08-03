#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main(){
    
    unordered_map<string,int>umap;
    
    umap["sbc"] = 33;
    umap["abc"] = 90;
    umap["Ajiknya"] = 10;
    
    // for(auto x : umap){
        
    //     cout<<x.first <<" "<<x.second <<endl;
        
    // }
    
    for(auto itr = umap.begin() ; itr!=umap.end();itr++){
        cout<<itr->first <<" "<<itr->second<<endl;
    }
    
    string key = "abc";
    
    if(umap.find(key) != umap.end()){
        cout<<"key found"<<endl;
    }
    else{
        cout<<"key not fonud"<<endl;
    }
    
    if(umap.find(key) != umap.end()){
        auto temp = umap.find(key);
        
        cout<<"Key is:" <<temp->first<<endl;
        cout<<"value is "<<temp->second<<endl;
    }
    
    umap.insert(make_pair("mobile", 18000));
    
    key = "abc";
    umap.erase(key);
     for(auto itr = umap.begin() ; itr!=umap.end();itr++){
        cout<<itr->first <<" "<<itr->second<<endl;
    }
    
    cout<<umap.size()<<endl;
    
    int arr[] = {0,9,3,67,54,2,3,8,9,9};
    
    unordered_map<int,int>umaped;
    for(int i=0;i<10;i++){
        int key = arr[i];
        umaped[key]++;
    }
     for(auto itr = umaped.begin() ; itr!=umaped.end();itr++){
        cout<<itr->first <<" "<<itr->second<<endl;
    }
    
    return 0;
}
