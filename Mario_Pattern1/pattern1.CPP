#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<math.h>


void main()
{
   int n;

	//prompt the user for desired number of rows required
   cout<<"\n Enter the Desired number of rows required : ";
   cin>>n;

    //Computing
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        //Loop for initial Spacing
        for (int j = 0; j < space; j++)
        {
            cout<<" ";
        }

        //Loops for printing #
        for (int k = 0; k < i; k++)
        {
            cout<<"#";
        }

        cout<<"  ";

        for (int z = 0; z < i; z++)
        {
            cout<<"#";
        }
        space--;

        cout<<"\n";

    }
getch();
}

