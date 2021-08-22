#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
{
	int m1[3][3], m2[3][3], m3[3][3];

   cout<<"\n MATRIX ADDITION ";

   //prompt the user to enter the first matrix
   cout<<"\n Enter the First Matrix";
   cout<<"\n ----------------------";
   for(int i=0;i<3;i++)
   {
   	cout<<"\n Row "<<(i+1)<<":";
      for(int j=0;j<3;j++)
      {
      	cout<<"\n\t Element "<<(j+1)<<" : ";
         cin>>m1[i][j];
      }
   }

   //prompt the user to enter the second matrix
   cout<<"\n Enter the second Matrix";
   cout<<"\n ----------------------";
   for(int i=0;i<3;i++)
   {
   	cout<<"\n Row "<<(i+1)<<":";
      for(int j=0;j<3;j++)
      {
      	cout<<"\n\t Element "<<(j+1)<<" : ";
         cin>>m2[i][j];
      }
   }


   //Addition of the rwo matrix
   for(int i=0;i<3;i++)
   {
   	for(int j=0;j<3;j++)
      {
      	m3[i][j] = m1[i][j] + m2[i][j];
      }
   }

   //Showing the user the first matrix
   cout<<"\n First Matrix";
   cout<<"\n";
   for(int i=0;i<3;i++)
   {
   	for(int j=0;j<3;j++)
      {
      	cout<<m1[i][j]<<" ";
      }
    	cout<<"\n";
   }

   //Showing the user the second matrix
   cout<<"\n Second Matrix";
   cout<<"\n";
   for(int i=0;i<3;i++)
   {
   	for(int j=0;j<3;j++)
      {
      	cout<<m2[i][j]<<" ";
      }
    	cout<<"\n";
   }


   //Showing the user the final matrix

   cout<<"\n Final Matrix ";
   cout<<"\n ************** ";
   cout<<"\n";
   for(int i=0;i<3;i++)
   {
   	for(int j=0;j<3;j++)
      {
      	cout<<m3[i][j]<<" ";
      }
    	cout<<"\n";
   }


getch();
}


