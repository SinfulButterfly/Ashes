#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <random>
using namespace std;

int Square(int x, int y);
double Square(double x, double y);
int factorial(int x);
void passing_arrays(int *fact, string arr[], int size);
class blank_class {
	string name;
public:
	blank_class(string name)
	{
		name_change(name);
	}
	void printstring()
	{
		cout << "The class is working" << endl;
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
	string arr[4] = { "This","is","our","array" };
	passing_arrays(&fact, arr, 4);
	cout << fact << endl;
	cout << "What'll be the name?\n";
	string inpt;
	cin >> inpt;
	blank_class class_example(inpt), class_example2(inpt);
	class_example2.printstring();
	cout << "wanna change it?" << endl;
	string ans;
	cin >> ans;
	if (ans != "no")
	{
		cin >> inpt;
		class_example2.name_change(inpt);
	}
	class_example2.name_show();
	default_random_engine randomEngine(time(NULL));
	uniform_real_distribution<double> hit(0.1, 1.0);
	string name;
	int age;
	int goblin_amount, human_amount, goblin_attack = 7, human_attack = 8, goblin_dodge = 10, human_dodge = 5, goblin_losses, human_losses;
	double goblin_hp = 10, human_hp = 7, goblin_accuracy = 0.5, human_accuracy = 0.7, human_strike, goblin_strike;
	cout << "So your name is..?\n";
	cin >> name;
	cout << "How old are you?\n";
	cin >> age;
	if (age < 18)
	{
		cout << "Don't you think you are too young for the adventures ahead?\n";
		system("PAUSE");
		return 0;
	}
	else
	{
		cout << "oh, hio, " << age << "-year old traveler\n";
	}
	cout << "The amount of 1st - goblins, 2nd - humans:\n";
	cin >> goblin_amount >> human_amount;
	do {string proceed;
		cout << "Engage into battle?";
		cin >> proceed;
		if (proceed == "no") { return 0; }
		cout << "\n ==================================================================== \n";
		human_strike = human_amount * human_attack * human_accuracy;
		goblin_strike = goblin_amount * goblin_attack * goblin_accuracy;
		goblin_losses = floor(human_strike / goblin_dodge * hit(randomEngine));
		goblin_amount -= goblin_losses;
		human_losses = floor(goblin_strike / human_dodge * hit(randomEngine));
		human_amount -= human_losses;
		cout << "\n Humans striked with the power of " << human_strike << " ATK points which wiped out " << goblin_losses << " goblins.\n "
			<< goblin_amount << " left\n"
			<<"\n Meanwhile goblins hit for " << goblin_strike << " ATK points which is a total of " << human_losses <<" human lives.\n "
			<< human_amount << " survived\n";
		if ((goblin_amount <= 0) && (human_amount <= 0)) 
		{ cout << "ONSLAUGHT!!!! \n\n (no one survived)"; system("PAUSE"); return 0; }
		else if (goblin_amount < 0) { goblin_amount = 0; cout << "Humans performed OVERKILL\n";}
		else if (human_amount < 0) { human_amount = 0; cout << "Goblins performed OVERKILL\n"; }
	} while (goblin_amount != 0 and human_amount != 0);
	system("PAUSE");
	return 0;
}


void passing_arrays(int *fact, string arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	*fact = factorial(5);
}



int factorial(int x)
{
	if (x == 0)
	{
		return 1;
	}
	else
	{
		return x * factorial(x - 1);

	}
}


double Square(double x = 42, double y = 42)
{
	return x *= ++x + y + rand() % 3;
}


int Square(int x = 42, int y = 42)
{
	return x *= ++x + y + rand() % 3;
}


void starters()
{
	double *pointer_to_double = NULL;
	pointer_to_double = new double[20];
	double variable1 = 1, variable2 = 2, sum = variable2 + variable1;
	cout << " Hello frckng world" << endl <<
		" Standart endl\n Standart endl\n This is variable usage: " << variable1 + variable2 << endl;
	cin >> variable1 >> variable2;
	cout << "You've just changed the variables with 'cin' \n Here's division for floating points: " << variable1 / variable2 << endl;
	pointer_to_double = &variable2;
	cout << *pointer_to_double << endl;
	delete[]pointer_to_double;
	//comments
	/*large comments; skipped data types, loops etc since remember them clearly */
}