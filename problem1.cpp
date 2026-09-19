 #include<iostream>
 #include<stdlib.h>
 #include<time.h>

 using namespace std;

 int main()
 {
    int arr[10];
    int j=0;
    int i;
    int rand_num;

    srand(time(NULL));

    cout<<"The randomly generated array is:\n\n";

    for(i=0; i<10; i++)
    {
        rand_num = rand() % 90 + 23;

        if(rand_num % 2 == 0)
            arr[i] = 0;
        else
            arr[i] = rand_num;

        cout<<arr[i]<<" ";
    }

    for(i=0; i<10; i++)
    {
        if(arr[i] != 0)
        {
            arr[j] = arr[i];
            j ++; 
        }
    }

    for(i=j; i<10; i++)
        arr[i] = 0;

    cout<<"\n\n";

    cout<<"The Organized Array is: \n\n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";

    cout<<"\n\n";

    return 0;
 }