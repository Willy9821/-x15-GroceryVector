// Authors Willy Iparraguirre, Saif Alketbi, Matt Burns, John Crosby

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{ 
    vector <string> list;
    list.resize(1);
    int x; 
    x = 1;
    int i;
    i = 0;
    char input;
    string answer;
    answer = "yes";

do{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (S)how grocery list";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/S/Q): ";
  cin>>input;
  if(input == 'a' || input == 'A')
   {
    do{
     
       cout<<"Please enter your items."<<endl;
       cin>>list[i];
       i++;
       cout<<"Do you want to add another item?"<<endl;
       cin>>answer;
       x++;
       list.resize(x);
       }
        while(answer == "yes" || answer == "Yes");
            
      
      }
      if(input == 's' || input == 'S')
        { 
        cout<<"Here's your list: "<<endl;
        for(int s = 0; s < i; s++)
        {
        cout<<list[s]<<endl;
        }
      }
  } while(input != 'q' && input != 'Q');        
  

return 0;
}








