#include<iostream>
using namespace std;


void linearSearch(int arr[],int size, int key)
{
    // int key = 9;
    for(int i = 0;i<size;i++){
        if(arr[i]==key)
        {
            // cout<<"match"<<endl;
            break;

        }
        
    }
    cout<<"match"<<endl;
}


void position(int arr[],int size,int key)
{
    int postion = 0;
    for(int i = 0; i<size;i++)
    {

        if(arr[i]==key)
        {
            cout<<"position is : "<<i;
        }
    }
}



//Selection sort -> repeatedly find the minimum element

void SelectionSort(int arr[],int size)
{
    for(int i = 0; i<size-1; i++)
    {
        int min = i;
        for(int j = i+1; j<size; j++)
        {
            if(arr[j]<arr[min]) min=j;
        }
        swap(arr[min],arr[i]);
    }
    // cout<<arr[];
}



//Bubble sort

void BubbleSort(int arr[],int n)
{
    for(int i = 0;i<n-i-1; i++)
    {
        bool swapped = false;
        for(int j = 0; j<n-i-1; j++)
        {
            if(arr[j]> arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped = false){
            break;
        }
    }
}




//Inseration Sort



void InsertionSort(int arr[],int n)
{
    for(int i =1; i<n; i++)
    {
        int key = arr[i];
        int j = i -1;
        while (j>=0 && arr[j] >key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = key;
    }
}


int main(){
    int arr[] = {3,6,1,9,4};
    // linearSearch(arr,5,9);
    // position(arr,5,1);

    // SelectionSort(arr,5);
    // // int size =;
    // for(int i = 0; i<5; i++)
    // {
    //     cout<<arr[i];
    // }

    BubbleSort(arr,5);
    for(int i = 0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
    InsertionSort(arr,5);
    for(int i = 0; i<5; i++)
    {
        cout<<arr[i];
    }

}





