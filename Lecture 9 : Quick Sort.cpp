/*
Does the sorting both in acending order as well as in descending order

Why Quick sort?
A : It has a time complexity similar to merge sort i.e. O(nlogn)
    but it has constant space complexity O(1) compared to linear space complexity of merge sort.

    Thus quick sort is slightly better than merge sort.
    Although there are some problems that can be solved only with the help of merge sort.


Steps:-
    1. Pick up a pivot element
    2. Place it in its correct position
    3. Put the remaining smaller elements on the left of the pivot and the larger ones on its right.

Rules to select the pivot element:
    Any element can be selected as the pivot element.
    We select the first element as the pivot element.


1. Select the pivot element.
2. Find the right place to put the pivot element.
3. Put the smaller elements to the left of the pivot and the larger to the right.

It is a divide and conquer algorithm.
*/



// time complexity : O(nlogn)        n because of the i and j pointers traversing the entire length of the array
//                                   log n because the similar to as in merge sort the array is being split up into two parts in every recursion step

// space complexity : O(1)           recursion stack space is used but it is not taken into account as no temporary array is used and the sorting takes place on the original array only


// Code :-
#include <bits/stdc++.h> 
int pInd(vector<int>& arr, int low, int high)
{
    int pivotElement=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivotElement && i<=high-1)
            i++;
        while(arr[j]>pivotElement && j>=low+1)
            j--;
        if(i<j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int>& arr, int low, int high)
{
    if(low<high)
    {
        int partitionIndex = pInd(arr, low, high);
        qs(arr, low, partitionIndex-1);
        qs(arr, partitionIndex+1, high);
    }
}
vector<int> quickSort(vector<int> arr)
{
    qs(arr,0,arr.size()-1);
    return arr;
}








// Code written again for Ascending Order :

#include <bits/stdc++.h>
using namespace std;
int partionIndex(vector<int>& arr, int low, int high)
{
    int pivotElement = arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivotElement && i<=high-1)
            i++;
        while(arr[j]>pivotElement && j>=low+1)
            j--;
        if(i<j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(vector<int>& arr, int low, int high)
{
    if(low<high)
    {
        int pInd= partionIndex(arr, low, high);
        quickSort(arr, low, pInd-1);
        quickSort(arr, pInd+1, high);        
    }
}
int main()
{
    vector<int> arr{4,6,2,5,7,9,1,3};
    
    quickSort(arr, 0, arr.size()-1);
    
    for(int i: arr)
        cout<<i<<" ";
    
    return 0;
}








// Code to sort the array in Descending order : 

#include <bits/stdc++.h>
using namespace std;
int partionIndex(vector<int>& arr, int low, int high)
{
    int pivotElement = arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]>=pivotElement && i<=high-1)        // change is made here
            i++;
        while(arr[j]<pivotElement && j>=low+1)          // change is made here
            j--;
        if(i<j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(vector<int>& arr, int low, int high)
{
    if(low<high)
    {
        int pInd= partionIndex(arr, low, high);
        quickSort(arr, low, pInd-1);
        quickSort(arr, pInd+1, high);        
    }
}
int main()
{
    vector<int> arr{4,6,2,5,7,9,1,3};
    
    quickSort(arr, 0, arr.size()-1);
    
    for(int i: arr)
        cout<<i<<" ";
    
    return 0;
}
