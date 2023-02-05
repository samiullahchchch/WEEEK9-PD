#include <iostream>
using namespace std;

int
 main()
{
    string name ="false",name1 ="false";

int num;
cout<<"enter the size of numbers"<<endl;
cin>>num;
int number[num];


for(int x=0;x<num;x++)
{
  cout<<"enter the number"<<endl;
  cin>>number[x];
   
    if (number[x]== 7)
  {

  name ="boom";
   
  }

}
 


  if (name =="boom")
  
  {

  cout<<"    BOOM"<<endl;
   
  }

else   
  {

  cout<<"  there is no 7  number in the array"<<endl;
   
  }

  


  
   }