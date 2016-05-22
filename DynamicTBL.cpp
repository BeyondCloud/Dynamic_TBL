#include <cstdlib>
#include <stdio.h>
#include <iostream>
using namespace std;

#define EXPAND_RATIO 0.75
#define CONTRACT_RATIO 0.25
void TBL_INSERT(int *, int);
void TBL_DELETE(int *, int);
int *tbl = new int[5];
int num = 0; // number of element inside tbl
main(){
    TBL_INSERT(tbl,123);
    cout<<tbl[0]<<endl;
    TBL_DELETE(tbl,123);
    if(tbl[0])
    cout<<tbl[0];
}
void TBL_INSERT(int *tbl,int key){

    tbl[num++] = key;
}

//search inside tbl
//if find tbl[index] = key , then swap x with last element inside
//array , delete last element
//if array num = 1 , delete it directly
//if no tbl[index] = key ,cout key not found
void TBL_DELETE(int *tbl ,int key){
    int index = 0;
    while(key != tbl[index] and index < num){
        index++;
    }
    if(index == num)
        cout << "key not found";
    else
    {
        tbl[index] = tbl[num - 1]; //overwrite slot to delete with last element
        tbl[num - 1] = NULL; //set last element to NIL
    }
}



