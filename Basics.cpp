#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Square(int x, int y);

int main()
{
    int x = 10, y = 2;
    cout << Square(x, y);
    return 0;
}

int Square(int x = 42, int y = 42)
{
    return x *= ++x + y + rand()%3;
}


void starters()
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
  //comments
  /*large comments; skipped data types, loops etc since remember them clearly */
}