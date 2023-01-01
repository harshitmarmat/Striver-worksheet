#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int low=0;

    int mid=0;

    int high=n-1;
    while(mid<=high)

    {

        if(mid<=high && arr[mid]==0)

        {

            swap(arr[mid] ,arr[low]);

            mid++;

            low++;
        }

        if(mid<=high && arr[mid]==1)

        {

            mid++;

        }

        if(mid<=high && arr[mid]==2)

        {
            swap(arr[mid] ,arr[high]);
            high--;
        }

    }
}