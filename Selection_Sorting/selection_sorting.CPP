#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<string.h>
#include<math.h>

void main()
{
   int array[30], small, temp, x, n, pos;

	//prompt the user for the desired array size
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

   //Showing Initial Array
   cout<<"\n Initial Array : ";
   cout<<"\n";
   for(int i=0; i<x; i++)
   {
      cout<<array[i]<<", ";
   }

	//sorting the array in ascenting order using the selection sort technique
   for(int i=0; i<x; i++)
   {
      small = array[i];
      pos = i;
      for(int j=i+1; j<x; j++)
      {
      	if(array[j] <= small)
         {
         	small = array[j];
            pos = j;
         }
      }

      temp = array[i];
      array[i] = array[pos];
      array[pos] = temp;
   }

   //Showing the final sorted array
   cout<<"\n\n";
   cout<<"\n Final Sorted Array : ";
   cout<<"\n";
   for(int i=0; i<x; i++)
   {
      cout<<array[i]<<", ";
   }

getch();
}

   







