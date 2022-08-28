#include<iostream>

using namespace std;

int main()
{
   int array1[10], array2[10], array3[10], i, j, k=0, x, common;
   cout<<"Enter 10 Elements for First Array: ";
   for(i=0; i<10; i++)
      cin>>array1[i];
   cout<<"Enter 10 Elements for Second Array: ";
   for(i=0; i<10; i++)
      cin>>array2[i];

   // Finding and storing common elements
   for(i=0; i<10; i++)
   {
      for(j=0; j<10; j++)
      {
         if(array1[i]==array2[j])
         {
            common = 0;
            for(x=0; x<k; x++)
            {
               if(array1[i]==array3[x])
                  common++;
            }
            if(common==0)
            {
               array3[k] = array1[i];
               k++;
            }
         }
      }
   }

   // Printing common elements
   cout<<"\nCommon Elements are:\n";
   for(i=0; i<k; i++)
      cout<<array3[i]<<" ";

   cout<<endl;
   return 0;
}
