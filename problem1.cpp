#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int arr[10], sorted[10];
    int i;
    int num;
    int counter = 0;

    srand(time(NULL));

    for(i=0; i<10; i++)
    {
        num = rand() % 100 + 11;

        if(num % 2 == 0)
            arr[i] = num;
        else
            arr[i] = 0;

        sorted[i] = 0;
    }

    for(i=0; i<10; i++)
    {
        if(arr[i] != 0)
        {
            sorted[counter] = arr[i];
            counter ++;
        }
    }

    cout<<"The unorganized array is:\n\n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    
    cout<<"\n\n";

    cout<<"The Organized array is:\n\n";
    for(i=0; i<10; i++)
        cout<<sorted[i]<<" ";

    cout<<"\n\n";

    return 0;
}