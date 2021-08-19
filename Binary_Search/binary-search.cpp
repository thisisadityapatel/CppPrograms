#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

void binarysearch(int arr[30], int size, int search)
{
   int a=0;
   int first=0;
   int last=size-1;
   int mid;

	while(first <= last)
   {
     mid = (first + last)/2;

     if(arr[mid] == search)
     {
       cout<<"\n The element "<<(search)<<" is at position "<<(mid+1)<<".";
       a++;
       break;
     }

     else if(arr[mid] > search)
     {
       last=mid-1;
     }

     else if(arr[mid] < search)
     {
       first=mid+1;
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
  cout<<"\n Enter the details into the array :(Please Enter the numbers such that they are is ascending order) ";
  cout<<"\n --------------------------------   ";

  for(int i=0; i<x; i++)
  {
    cout<<"\n Element "<<(i+1)<<" : ";
    cin>>array[i];
  }

  //prompt the user for the element to be searched
  cout<<"\n Enter the Element whose position is to be searched : ";
  cin>>n;

  //function which searches element using Binary Search method
  binarysearch(array, x, n);

getch();
}



