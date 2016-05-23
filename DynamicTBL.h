
class DynamicTBL {

public:
  DynamicTBL();
  DynamicTBL(int initSize);
  ~DynamicTBL();

  void tbl_insert(int value);
  void tbl_delete(int value);
  int get(int position);

  int getSize();
  void resize(int newSize);
  void printTBL();

private:
  int size;
  int *tbl;
  int num;
};
