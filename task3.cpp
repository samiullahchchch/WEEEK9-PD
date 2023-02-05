#include<iostream>
using namespace std;


int main()
{
    int y=0;
 string name;
 cout<<"enter the word"<<endl;
 getline(cin,name);
 for(int x=0; name[x] != '\0'; x++)
{
 y = y +1;
 }
   if(y%2==0)
   {
    cout<<"True"<<endl;
   }

   if(y%2!=0)
   {
    cout<<"false"<<endl;
   }
}