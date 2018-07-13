#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Square(int x, int y);
double Square(double x, double y);
int factorial(int x);
void passing_arrays(int *fact, string arr[],int size);
class blank_class{
    string name;
    public:
    blank_class(string name)
    {
        name_change(name);
    }
    void printstring()
    {
    cout << "The class is working"<< endl;
    }
    void name_change(string new_name)
    {
        name = new_name;
    }
    void name_show()
    {
        cout << name;
    }
};

int main()
{
    int x = 10, y = 2;
    cout << Square(x, y) << endl;
    int fact = 0;
    string arr[4] = {"This","is","our","array"};
    passing_arrays(&fact,arr,4);
    cout << fact << endl;
    cout << "What'll be the name?\n";
    string inpt;
    cin >> inpt;
    blank_class class_example(inpt), class_example2(inpt);
    class_example2.printstring();
    cout << "wanna change it?" << endl;
    string ans;
    cin >> ans;
    if(ans!="no")
    {
        cin >> inpt;
        class_example2.name_change(inpt);
    }
    class_example2.name_show();
    return 0;
}


void passing_arrays(int *fact,string arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cout  << arr[i] << endl;
    }
    *fact=factorial(5);
}



int factorial(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);

    }
}


double Square(double x = 42, double y = 42)
{
    return x *= ++x + y + rand()%3;
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