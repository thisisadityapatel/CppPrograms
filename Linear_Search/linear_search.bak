#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

void linearsearch(int arr[30],int size, int search)
{
   int a=0;

	for(int i=0; i<=size; i++)
   {
      if(arr[i] == search)
      {
        cout<<"\n The element "<<(search)<<" is located on position "<<(i+1)<<".";
        a++;
      }
   }

   if(a==0)
   {
     cout<<"\n Invalid Number Entered. ";
   }
}


void main()
{
  int array[30];
  int x, n;
  //prompt the user for desired size of the array
  do
  {
    cout<<"\n Enter the number of rows required in the array : ";
    cin>>x;
  }while(x>=30);


  //prompt the user to enter data into the array
  cout<<"\n Enter the details into the array : ";
  cout<<"\n --------------------------------   ";

  for(int i=0; i<x; i++)
  {
    cout<<"\n Element "<<(i+1)<<" : ";
    cin>>array[i];
  }

  //prompt the user for the element to be searched
  cout<<"\n Enter the Element whose position is to be searched : ";
  cin>>n;

  //function which searches element using Linear Search method
  linearsearch(array, x, n);

getch();
}




















