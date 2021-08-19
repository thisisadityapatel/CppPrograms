                                                                   #include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<string.h>
#include<math.h>

void main()
{
   int a=0, array[30], small, temp, x, n, pos;

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

	//sorting the array in ascenting order using the bubble sort technique
   int i, j;
   int swapped;
   for (i = 0; i < x-1; i++)
   {
     swapped = 0;
     for (j = 0; j < x-i-1; j++)
     {
        if (array[j] > array[j+1])
        {
           temp = array[j];
           array[j] = array[j+1];
           array[j+1] = temp;
           swapped = 1;
        }
     }
  
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
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
