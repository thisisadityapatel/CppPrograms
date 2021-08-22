#include<iostream.h>
#include<conio.h>
#include<stdio.h>


void main()
{

   int n, arr[30];

   //prompt the user to enter the desired array size
	cout<<"\n Enter the desired array size : ";
   cin>>n;

   //prompt the user to input the array
   cout<<"\n Enter the array details : ";
   cout<<"\n -----------------------   ";
   for(int i=0;i<n;i++)
   {
   	cout<<"\n Element "<<(i+1)<<" : ";
      cin>>arr[i];
   }


	//showing the user the unsorted array
   cout<<"\n Current Array : ";
   cout<<"\n";
   for(int i=0;i<n;i++)
   {
   	cout<<arr[i]<<"  ";
   }

   //sorting the array
   int small, temp, pos;

   for(int i=0; i<n; i++)
   {
      small = arr[i];
      pos = i;
      for(int j=i+1; j<n; j++)
      {
      	if(arr[j] <= small)
         {
         	small = arr[j];
            pos = j;
         }
      }

      temp = arr[i];
      arr[i] = arr[pos];
      arr[pos] = temp;
   }

   //showing user the sorted array
   cout<<"\n\n Sorted Array : ";
   cout<<"\n";
   for(int i=0;i<n;i++)
   {
   	cout<<arr[i]<<"  ";
   }



   //prompt the user to enter the element to be inserted
   int element;
   int pos2;

   cout<<"\n/n Enter the element which is to be added to the array : ";
   cin>>element;

   if(arr[0]>element)
   {
   	pos2=0;
   }

   else if(arr[n-1]<element)
   {
      arr[n] = element;
      n++;
   }
   else
   {
   	for(int i=0;i<n-1;i++)
      {
        if(arr[i]<=element && element<=arr[i+1])
        {
        	pos2 = i+1;
        }
      }
   }

	for(int i=n ;i>pos2 ;i--)
   {
     arr[i] = arr[i-1];
   }

   n++;
   arr[pos2] = element;

getch();
}


















