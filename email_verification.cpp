#include<bits/stdc++.h>
using namespace std;
int main()
{
    string email;
    cin>>email;
    int x,y;
    bool bl=true;
    if(email[0]-'0'>=0 && email[0]-'0'<=9)bl=false;
    int count=0,crt=0,grt=0;
    for(int i=email.size()-1;i>=0;i--)
    {
        if(email[i]=='@' && count==0)
        {
            x=i;
            count++;
        }
        else if(email[i]=='.' && crt==0)
        {
            y=i;
            crt++;
        }else if(((int(email[i]))>=32 && (int(email[i]))<=47) || 
        ((int(email[i]))>=58 && (int(email[i]))<=64) || 
        ((int(email[i]))>=91 && (int(email[i]))<=96) ||
        ((int(email[i]))>=123 && (int(email[i]))<=126))
        {
            grt++;
        }
    }
   
   
    if(y-x>=1 && email.size()-y>=1 && x-0>=1 && grt==0 && bl==true)
    {
        cout<<"valid email";
    }
    else{
        cout<<"invalid email";
    }
}