#include<iostream>
#include<stdlib.h>
#include<time.h>
#define N 10

using namespace std;

int main()
{
    int rand_pos;
    int i;
    int arr[N];
    int sequence_sum = N*(N+1)/2;
    int arr_sum = 0;

    srand(time(NULL));

    rand_pos = rand() % N;
    cout<<"The Array with the missing element is:\n\n";

    for(i=0; i<rand_pos; i++)
    {
        arr[i] = i;
        cout<<arr[i]<<" ";
        arr_sum += arr[i];
    }

    for(i=rand_pos; i<N; i++)
    {
        arr[i] = rand_pos + 1;
        rand_pos ++;
        cout<<arr[i]<<" ";
        arr_sum += arr[i];
    }

    cout<<"\n\n";

    cout<<"The Missing element in an array is: "<<(sequence_sum - arr_sum);
    cout<<"\n\n";

    return 0;
}