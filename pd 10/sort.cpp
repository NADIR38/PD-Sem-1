#include<iostream>
using namespace std;
main()
{int min;
    int arr[10]={6,9,1,9,56,123,98,132,86,12};
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10-i-1;j++)
       {
         if(arr[j]>arr[j+1])
        { min=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=min;}
         
       }


    }
 cout << "Sorted Array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

}