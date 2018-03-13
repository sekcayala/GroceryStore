//Author: Alejandro Ayala
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> grcl;
  string items;
  char input;

     do 
   {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
              

  if ( input == 'A' || input == 'a' )
  {
  cout<<"What is the item?\n";
  cin>>items;
  grcl.push_back(items);
  }
}

 while(!(input== 'Q' || input== 'q'));

if (grcl.size()>0)
{
     for (int j=0; j < grcl.size(); j++)
        {   
            cout<<"==ITEMS TO BUY==\n";
            cout<<j+1<<" "<<grcl.at(j)<<endl;
        }
}  
else
{
cout<<"No items to buy!\n";
}

  return 0;
}
