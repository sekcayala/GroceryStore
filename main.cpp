//Author: Alejandro Ayala
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
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
  cout<<"What is the item? \n";
  cin>>list[numItems+1];
  }
  
 // list[0] = 
 // list[1] = 
 // list[2] =
 // list[3] =
 // list[4] =
 // list[5] =

  if ( numItems > 5)
  {
  cout<<"You'll need a bigger list!\n";
  }
  }

  while (!( input == 'Q' || input == 'q' ));
  return 0;
}
