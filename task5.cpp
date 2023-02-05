#include<iostream>
using namespace std;

int main()
{
int num;
cout<<"enter the size of array "<<endl;
cin>>num;
string name[num];
string name1[num];

 for(int x=0; x<num;x++)
 {
  cout<<"enter the word"<<endl;
  cin>>name[x];
  
  


}
 if((name[0] == name[1]) || (name[3] ==name[4]) )
 {
   cout<<"true"<<endl;

 }
 else
 {
   cout<<"false"<<endl;
 }
}