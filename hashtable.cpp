#include<iostream>
using namespace std ;
int main()
{
    int a[7];
    for(int i=0;i<7;i++)
    {
        a[i]=-1;

    }
    int keys[]={10,24,17,12};
    for(int i=0;i<4;i++)
    {
        int key=keys[i];
       int index=key%7;
        while(a[index]!=-1)
        index=(index+1)%7;
        a[index]=key;
    }
    cout<<"hash table is "<<endl;
    for(int i=0;i<7;i++)
    cout<<i<<" \t"<<a[i]<<endl;
}

//output
PS C:\Users\DELL\Downloads\Narendra 228> g++ hashtable.cpp -o hashtable.exe
PS C:\Users\DELL\Downloads\Narendra 228> ./hashtable.exe
hash table is 
0       -1
1       -1
2       -1
3       10
4       24
5       17
6       12


 