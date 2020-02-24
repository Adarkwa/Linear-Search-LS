#include <iostream>

using namespace std;

 int search(int arr[], int x, int y)
 {
     int i;
     for (i = 0; i < x; i++)
        if (arr[i] == y)
           return i;
     return -1;
 }

int main(void)
{
   int arr[] = {3, 6, 8, 15,20,36};
    int y = 10;
     int x = sizeof(arr) / sizeof(arr[0]);
       int result = search(arr, x, y);
    (result == -1)? cout <<"Element is not found in array"
                  : cout <<"Element is found at index " <<result;




    return 0;
}
