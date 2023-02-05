#include<iostream>

using namespace std;

int  main()
{
  string a1;
  int b1;
  float count1=0,count2=0,count3=0,count4=0;
 string fruit[4]= {"peach", "apple", "guava", "watermelon"};
 cout<<"enter the name of fruit"<<endl;
 cin>>a1;
 cout<<"enter the kg of fruit"<<endl;
 cin>>b1;

 for(int x=0;x<4;x++ )
 {
  
   
    if(fruit[x]== "peach")
    {
      count1 = 60*b1;

    }

    if(fruit[x]== "apple")
    {
      count2 = 70*b1;
       cout<<count2;
    }

    if(fruit[x]== "guava")
    {
      count3 = 40*b1;

    }

     if(fruit[x]== "peach")
    {
      count4 = 30*b1;

    }
    
 }


}