#include<iostream>
#include<stdlib.h>
#define N 10

using namespace std;

int main()
{
    int arr[N];
    int i,j;
    int rand_pos;
    int series_sum = N*(N+1)/2;
    int arr_sum = 0;

    rand_pos = rand() % N;

    for(i=0; i<rand_pos; i++)
    {
        arr[i] = i;
    }
    for(j=i; j<N; j++)
    {
        arr[j] = rand_pos+1;
        rand_pos ++;
    }

    cout<<"The missing array is:\n\n";

    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";

    for(i=0; i<N; i++)
        arr_sum += arr[i];

    cout<<"\n\nThe missing element in the array is: "<<(series_sum - arr_sum);

    cout<<"\n\n";
    return 0;
}