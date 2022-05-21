#include<iostream>
using namespace std;

class bub_sort{
    int size;
    int *arr;
    public:
        bub_sort(){
            size=0;
            arr = new int[0] ;
        }
        bub_sort(int a[],int n){
            size =n;
            arr = new int[n];
            arr=a;

        }
        void input(){
            cout<<"Enter the size of array  : ";
            cin>>size;
            arr = new int[size];
            for (int i = 0; i <size ; i++)
            {
                cin>>arr[i];
            }
        }

        void sort(){
            for (int i = 0; i < size; i++)
            {   int temp;
                int show =1;
                for(int j=size-1;j>i;j--){

                    if(arr[j]<arr[j-1]){
                        temp = arr[j];
                        arr[j]=arr[j-1];
                        arr[j-1]=temp;
                    }
                    cout<<"Array after "<<show<<"th iteration is : \n"<<endl;
                    for (int i = 0; i < size; i++)
                    {
                        cout<<arr[i]<<" ";
                    }
                    cout<<"\n";
                    show++;
                    
                }
                cout<<"Next Loop \n";
                
            }
            
            
        }
        void display()
        {
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
        }
        ~bub_sort(){
            cout<<"\nSorting Done\n";
        }
};
int main()
{
    int n=5;
    int a[n]={5,1,9,12};
    bub_sort ob(a,n);
    ob.sort();
    return 0;
}
