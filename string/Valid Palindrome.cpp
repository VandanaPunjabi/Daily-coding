class Solution {
    public:
    char check(char ch){

        if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
            return 1;
        }
        else{
            return 0;
        }
    }

   char toLowercase(char ch){

       if( (ch>='a' && ch<='z') || (ch>='0' && ch<='9') ){
           return ch;
       }
       else{
           char temp = ch - 'A' + 'a';
           return temp;
       }
   }

   bool palindrom(string s){

       int st = 0;
       int e = s.length()-1;

       while(st <= e){
           if(s[st] != s[e]){
               return 0;
           }
           else{
               st++;
               e--;
           }
       }

       return 1;
   }
public:
    bool isPalindrome(string s) {
        
        string temp = "";
        int i=0;

      //faltu ka hatado
        for(int j=0;j<s.length();j++){
          if(check(s[j])){
              temp.push_back(s[j]);
          }
        }

        for(int j=0;j<temp.length();j++){
                temp[j] = toLowercase(temp[j]);
        }
         return palindrom(temp);
    }
};
