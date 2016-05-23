#include "DynamicTBL.h"
#include <string.h>
#include <iostream>
using namespace std;

DynamicTBL::DynamicTBL() {
}

DynamicTBL::DynamicTBL(int initSize) {
  num = 0;
  size = initSize;
  tbl = new int[size];
  memset(tbl,0,sizeof(tbl));
  cout << "table initialize with size:"<<size;
}

DynamicTBL::~DynamicTBL() {
  delete[] tbl;
}
void DynamicTBL::tbl_insert(int value) {

  if( num / (float)size > 0.75)
  {
      cout << "table size double\n";
      cout <<"from "<<size;
      this->resize(size*2);
      cout <<" to "<<size <<endl;
  }
  cout << value <<" is inserted\n";
  tbl[num] = value;
  num ++;

  //tbl[position] = value;
}
void DynamicTBL::tbl_delete(int value) {

  int i;
  for(i = 0 ; i < num ; i++)
  {
      if(value == tbl[i])
      {
          tbl[i] = tbl[num - 1];
          tbl[num - 1] = NULL;
          cout<<"remove "<< value<<" successfully\n";
          break;
      }
  }
  if( i == num )
  {
      cout << "element you try to delete:"<<value<<" not found\n";
      return;
  }
  num --;
  if( num / (float)size < 0.25)
  {
      cout << "table size contract\n";
      cout <<"from "<<size;
      this->resize(size/2);
      cout <<" to "<<size <<endl;
  }
}
int DynamicTBL::get(int position) {
    if( position < size)
        return tbl[position];
    else
    {
        cout << "position get error: ";
        cout << "expect position 0~"<< size-1;
        cout << "\nbut you request for" << position;
        return NULL;
    }
}

int DynamicTBL::getSize() {
  return size;
}

void DynamicTBL::resize(int newSize) {
  int *temp;
  temp = new int[newSize];
  for (int i = 0; i < (newSize); i++) {
     temp[i] = tbl[i];
  }
  delete[] tbl;
  tbl = temp;
  size = newSize;
}
void DynamicTBL::printTBL() {
    cout << endl << "Here is your table:"<<endl;
     cout<<"=========================\n";
     cout<<"index:\t";
     for(int i = 0; i < size; i++)
        cout << i << "\t";
     cout<<endl;
     cout<<"data:\t";
     for(int i = 0; i < num; i++)
        cout << tbl[i] << "\t";
   cout<<"\n=========================\n";
}
