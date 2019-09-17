#include<iostream>
using namespace std;
int partition(int[],int,int);
void quicksort(int[],int,int);
void swap(int *,int*);
int main()
{
    int i,j,arr[100],n;
    cout<<"Please enter the number of elements in the array\n";
    cin>>n;
    cout<<"Start entering the array elements\n";
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your entered array is \n";
    cout<<"******************************************************\n";
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    cout<<"******************************************************\n";
    i=1;
    quicksort(arr,i,n);
    cout<<"the array after sorting is\n";
    cout<<"******************************************************\n";
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    cout<<"******************************************************\n";

}
int partition( int arr[],int start,int end)
{
    int i=start-1;
    int pivot=arr[end];
    int j;
    for(j=start;j<=end-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[end]);
    return(i+1);
}
void quicksort(int arr[],int start,int end)
{
    if(start<end)
    {
        int x=partition(arr,start,end);
        cout<<"******************************************************\n";
        for(int i=start;i<=end;i++)
        {
            cout<<arr[i]<<"\t";
        }
        cout<<"\n";
        cout<<"******************************************************\n";

        quicksort(arr,start,x-1);

        quicksort(arr,x+1,end);
    }
    
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}