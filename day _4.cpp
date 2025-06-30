#include <iostream>
using namespace std;

//find the maximum element in the array

int maxElement(int arr[],int size){
    int max = arr[0];
   
    for(int i= 0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<max<<endl;
   
    

 
}


int minElement(int arr[],int size){
    int min = arr[0];
    for(int j = 0;j<size;j++)
    {
        if(min>arr[j])
        {
            min = arr[j];

        }
    }
    cout<<min<<endl;
    
}


//count even and odd
void Even(int arr[],int size){
    //int even = arr[0];
    int count =0,odd=0;
    for(int i = 0 ;i<size;i++){
        if(arr[i]%2==0)
        {
            count++;

        }
        else
        {
            odd++;
        }
        
    }
    cout<<"Even : "<<count<<endl;
    cout<<"Odd : "<<odd<<endl;
}




//reverse and print an array

void reverse(int arr[],int size)
{
    int reverse;
    for(int i=size - 1;i>=0;i--)
    {
     cout<<arr[i]<<" ";
    }
}


//find the first repeating element

int repeatingelement(int arr1[], int size)
{
    for(int i=0; i<size;i++){
        if(arr1[i]==arr1[i+1])
        {
            cout<<arr1[i];
            break;
        }
    }


}


//cheak if the array is sorted or not

bool sortedarray(int arr[], int size)
{
    for(int i=0; i<size;i++){
        if(arr[i]> arr[i+1])
        {
           return false;
        }

    }
    return true;


}

//{1,0,0,1,1,1,0} count 0 and1
//{4,7,8,3,1,10,17}, k= 9 count the number of element greater than k




void count1and0(int arr2[],int size)
{
    int count0 = 0;
    int count1 = 0;
    for(int i = 0;i<size; i++)
    {
        if(arr2[i]==1)
        {
            count1++;
        }
        else if (arr2[i]==0)
        {
            count0++;
        }
        

    }
    cout<<"no. of 1 = "<<count1<<endl;
    cout<<"no. of 0 = "<<count0<<endl;

}




int main(){

   // int arr1[7] = {5,3,8,8,6,1,1};
    int arr2[7] = {1,0,0,1,1,1,0};
    //int arr[5] = {5,3,8,6,1};
    // maxElement(arr,5);
    // minElement(arr,5);
    // Even(arr,5);
    //reverse(arr,5);
    //repeatingelement(arr1,7);
    // if(sortedarray(arr,5)) cout << "Sorted";
    // else cout << "Not Sorted";

    count1and0(arr2,7);
    
    
}