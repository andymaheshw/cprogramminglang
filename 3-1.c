#include <stdio.h>

int main()
{
    int low, high, mid;
    //binsearch below
    low = 0;
    high = n-1;
    while(low <= high)
    {
        mid = (low+high) /2;
        if (x < v[mid])
            high = mid - 1;
        else if( x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    while(low <= high)
    {
        if(x < v[mid])
            high = mid
        else
            low= mid+1
    }
    return (x == v[low]) x : -1
    return -1;
}
