#include <iostream>
#include "DynamicTBL.h"

using namespace std;

int main(int argc, char **argv) {
    DynamicTBL tbl = DynamicTBL(4); //initialize tbl with size 4
    tbl.printTBL();
    tbl.tbl_insert(1);
    tbl.tbl_insert(13);
    tbl.tbl_insert(15);
    tbl.tbl_insert(12);

    tbl.tbl_insert(123);
    tbl.printTBL();
    tbl.tbl_delete(124);
    tbl.printTBL();
    tbl.tbl_delete(12);
    tbl.printTBL();
    tbl.tbl_delete(15);
    tbl.tbl_delete(13);
    tbl.tbl_delete(123);
    tbl.tbl_delete(1);
    tbl.printTBL();
    return 0;
}
