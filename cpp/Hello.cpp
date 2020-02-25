#include <iostream>
using namespace std;
int main(void)
{
  // cout << "Hello, World!\n";
  // return 0;

  int a[] = {1, 2, 3, 4};

  int *b = a;           // *はポインター。aの0番目を指しているので、*bは1
  cout << *b;
  cout << *b+1;         // *(b+1)。どこを指しているのか表したい時は*をつける。1番目の値
  cout << *++b;         // *(++b)。ポインタが指す場所が右にずれていく
  return 0;
}
