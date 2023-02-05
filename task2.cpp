#include<iostream>
using namespace std;

int main()
{
    float count=0,count1=0;
   string name;
   cout<<"Enter the name of movie"<<endl;
   cin>>name;

    string movies[5] = {"ladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    for(int x=1 ; x<5;x++)
    {
      if(movies[x]==name)
      {
        
        if((x+1)%2 == 0)
        {
            count1 = (500 * 10/100)+500;
            cout<<count1;

        }
        
        if((x+1)%2 != 0)
        {
            count = (500 * 5/100)+500;
            cout<<count;

        }

        


      }

    }




}