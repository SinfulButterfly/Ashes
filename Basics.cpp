#include <iostream>
using namespace std;


int main ()
{ double *pointer_to_double = NULL;
  pointer_to_double = new double[20];
  double variable1 = 1, variable2 = 2, sum = variable2 + variable1;
  cout << " Hello frckng world" << endl <<
    " Standart endl\n Standart endl\n This is variable usage: " << variable1 + variable2 << endl;
  cin >> variable1 >> variable2;
  cout << "You've just changed the variables with 'cin' \n Here's division for floating points: "<< variable1 / variable2 << endl;
  pointer_to_double = &variable2;
  cout << *pointer_to_double << endl;
  delete []pointer_to_double;
  return 0;
  //comments
  /*large comments; skipped data types, loops etc since remember them clearly */
}