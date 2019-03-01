#include "iostream"
using namespace std;
void BubbleSort(int* pData,int Count)
{ 
int iTemp;
for(int i=1;i<Count;i++)
       { 
         for(int j=Count-1;j>=i;j--)
                { 
                  if(pData[j]<pData[j-1])
                            { 
                              iTemp = pData[j-1];
                              pData[j-1]= pData[j];
                              pData[j]= iTemp; 
                            } 
                } 
       } 
}
void main()
{ 
int data[]= {10,9,8,7,3,6,5,4,2,1};
BubbleSort(data,10);
cout<<"将{10,9,8,7,3,6,5,4,2,1}用冒泡排序法排列为："<<endl;
for (int i=0;i<10;i++)
            cout<<data[i]<<" "; 
cout<<"\n";
}

