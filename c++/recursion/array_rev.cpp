#include <stdio.h>
#include <conio.h>


void revarrhelper(int l,int r, vector<int>&arr)
{
    if(l>=r) return;
    

    swap(arr[l],arr[r]);
 
    return revarrhelper(l+1,r-1,arr)
}

void revarr(vector<int>&arr,int m)
{
         revarrhelper(m,arr.size()-1,arr);

}


int main()
{
    
}