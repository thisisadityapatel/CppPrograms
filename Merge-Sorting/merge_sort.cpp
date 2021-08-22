#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>


void main()
{
	int n1, n2;
   int arr1[30], arr2[30], arr3[60];
   int n3;

	//Prompt the user to Enter the size of the first array
   cout<<"\n Size of the 1st Array : ";
   cin>>n1;

   //Prompt the user to Enter the size of the first array
   cout<<"\n Size of the 2nd Array : ";
   cin>>n2;

   clrscr();

   //Prompt the user to enter the first array
   cout<<"\n 1st Array " ;
   cout<<"\n --------- " ;

   for(int i=0;i<n1;i++)
   {
   	cout<<"\n Element "<<(i+1)<<" : ";
   	cin>>arr1[i];
   }

   cout<<"\n\n\n";

   //Prompt the user to enter the first array
   cout<<"\n 2nd Array " ;
   cout<<"\n --------- " ;

   for(int i=0;i<n2;i++)
   {
   	cout<<"\n Element "<<(i+1)<<" : ";
   	cin>>arr2[i];
   }


   //sorting the first array
   int pos1, temp1, small1;
   for(int i=0; i<n1; i++)
   {
      small1 = arr1[i];
      pos1 = i;
      for(int j=i+1; j<n1; j++)
      {
      	if(arr1[j] <= small1)
         {
         	small1 = arr1[j];
            pos1 = j;
         }
      }

      temp1 = arr1[i];
      arr1[i] = arr1[pos1];
      arr1[pos1] = temp1;
   }

   //sorting the second array
   int pos2, temp2, small2;
   for(int i=0; i<n2; i++)
   {
      small2 = arr2[i];
      pos2 = i;
      for(int j=i+1; j<n2; j++)
      {
      	if(arr2[j] <= small2)
         {
         	small2 = arr2[j];
            pos2 = j;
         }
      }

      temp2 = arr2[i];
      arr2[i] = arr2[pos2];
      arr2[pos2] = temp2;
   }



   //Showing the final sorted arra
   cout<<"\n\n\n";
   cout<<"\n Sorted Arrays : ";
   cout<<"\n 1st array: ";
   for(int i=0; i<n1; i++)
   {
      cout<<arr1[i]<<" ";
   }

   cout<<"\n 2nd array: ";
   for(int i=0; i<n2; i++)
   {
      cout<<arr2[i]<<" ";
   }

   //Merging the two arrays
   int a=0, b=0, c=0;
   while(a<n1 || b<n2)
   {
   	if(arr1[a]<arr2[b])
      {
      	arr3[c] = arr1[a];
         a++;
         c++;
      }

      else if(arr1[a]>arr2[b])
      {
      	arr3[c] = arr2[b];
         b++;
         c++;
      }

      else if(arr1[a] == arr2[b])
      {
      	arr3[c++] = arr1[a++];
         arr3[c++] = arr2[b++];
      }
   }

   if(a != (n1-1))
   {
   	while(a<n1)
      {
      	arr3[c++] = arr1[a++];
      }
   }

   if(b != (n2-1))
   {
   	while(b<n2)
      {
      	arr3[c++] = arr2[b++];
      }
   }

   cout<<"\n\n\n Final Array: ";
   n3 = n1+n2;
   for(int i=0; i<n3; i++)
   {
      cout<<arr3[i]<<" ";
   }


getch();
}


















