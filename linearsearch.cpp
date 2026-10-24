#include<iostream>
using namespace std;

int linear_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
return -1;
}
int main()
{
    int n,x;
    int a[20];

    cout<<"enter the size of the array:";
    cin>>n;

    cout<<"enter"<<n<<"sorted integers:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the target element to search for:";
    cin>>x;

    int location=linear_search(a,n,x);
    if(location!=-1){
        cout<<"element"<<x<<"found at index :"<<location<<endl;
    }
    else{
        cout<<"element"<<x<<"not found in the array"<<endl;
    }

      return 0;
    
}
//output
PS C:\Users\DELL\Downloads\Narendra 228> g++ linearsearch.cpp -o linearsearch.exe
PS C:\Users\DELL\Downloads\Narendra 228> ./linearsearch.exe
enter the size of the array:5
enter5sorted integers:
21
23
45
67
87
enter the target element to search for:23
element23found at index :1

