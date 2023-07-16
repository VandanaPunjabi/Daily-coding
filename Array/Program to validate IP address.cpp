#include <bits/stdc++.h> 
bool isValidIPv4(string ipAddress) {
    // Write your code here.
     
        int idx=0;
       // bool flag=true;     //considering the ip address to be valid initially

        int count=0;

        string temp="";

        while(true)
        {
            if(ipAddress[idx]=='.')
            {
                if(temp.length()>3) return false;
                
                if(temp.length()==0)
                return false;

                int num=stoi(temp);
                //checking for the leading zeros
                if(num>0 and temp.length()>0 and temp[0]=='0')
                return false;
                else if(num==0 and temp.length()>1 and temp[0]=='0')
                return false;


                if(num>=0 and num<=255)
                {
                    count++;
                    temp="";
                }
                else
                {
                    return false;
                }
                //code
            }
            else if(idx>=ipAddress.length())
            {
                if(temp.length()>3) return false;
                
                if(temp.length()==0)
                return false;
                //code
                int num=stoi(temp);


                if(num>0 and temp.length()>0 and temp[0]=='0')
                return false;
                else if(num==0 and temp.length()>1 and temp[0]=='0')
                return false;
                
                if(num>=0 and num<=255)
                {
                    count++;
                    temp="";
                }
                else
                {
                    return false;
                }
                break;
            }
            else if(ipAddress[idx]>='0' and ipAddress[idx]<='9')
            {
               temp=temp+ipAddress[idx];
            }
            else
		    {
                return false;
            }
            idx++;
        }
        if(count==4) return true;
        return false;
   
}
