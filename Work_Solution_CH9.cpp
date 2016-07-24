//4.13
//1
//the code:
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string fname;
    string lname;
    char grade;
    int grade_;
    int age;

    cout << "What is your first name?" << endl;
    cin >> fname;
    cout << "What is your last name?" << endl;
    cin >> lname;
    cout << "What letter grade do you deserve?" << endl;
    cin >> grade;
    grade_ = grade;
    grade_++;
    cout << "What is your age?" << endl;
    cin >> age;
    cout << "Name: " << lname << ", " << fname << endl
         << "Grade:";
    cout.put(grade_);
    cout << endl << "Age: " << age << endl;
    return 0;

}

//2
//the code:
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string name;
    string favourite_dessert;

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favourtite dessert:\n";
    cin >> favourite_dessert;
    cout << "I have some delicious " << favourite_dessert
         << " for you, " << name << ".\n";
    return 0;
}

//3
//the code
#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char fname[20];
    char lname[20];

    cout << "Enter your first name: "<< endl;
    cin >> fname;
    cout << "Enter your last name: " << endl;
    cin >> lname;
    cout << "Here's the information in a single string:"
         << strcat(strcat(fname, ", "),lname)
         << endl;
    return 0;

}

//6
#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
    string brand_name;
    double weight;
    int calorie;
};

int main()
{

    CandyBar sweet_array[3] =
    {
        { "Mocha Munch", 2.3, 350},
        { "something soemthing", 3.1, 343},
        { "another and another", 4.3, 545}
    };

    int count = 0;
    while (count < 3)
    {
        cout << "snack" << count << endl;
        cout << " brand_name:" << sweet_array[count].brand_name << endl;
        cout << " weight:    " << sweet_array[count].weight << endl;
        cout << " calorie:   " << sweet_array[count].calorie<< endl;
        count++;
    };
    return 0;
}

//7
#include <iostream>
#include <string>
using namespace std;
struct pizza
{
    string company_name;
    double double_radius;
    double weight;
};

int main()
{
    cout << "Please enter information about pizza" << endl;
    pizza customer_pizza;
    cout << "First the company name" << endl;
    cin >> customer_pizza.company_name;
    cout << "Then the double_radius " << endl;
    cin >> customer_pizza.double_radius;
    cout << "Finally the weight" << endl;
    cin >> customer_pizza.weight;

    cout << "Now here's the information you entered:" << "\n";
    cout << "company name: " << customer_pizza.company_name << endl;
    cout << "double radius: " << customer_pizza.double_radius << endl;
    cout << "weight: " << customer_pizza.weight << endl;

    return 0;
}

//8
#include <iostream>
#include <string>
using namespace std;
struct pizza
{
    string company_name;
    double double_radius;
    double weight;
};

int main()
{
    cout << "Please enter information about pizza" << endl;
    pizza *cp = new pizza;
    cout << "First the company name" << endl;
    cin >> cp->company_name;
    cout << "Then the double_radius " << endl;
    cin >> cp->double_radius;
    cout << "Finally the weight" << endl;
    cin >> cp->weight;

    cout << "Now here's the information you entered:" << "\n";
    cout << "company name: " << cp->company_name << endl;
    cout << "double radius: " << cp->double_radius << endl;
    cout << "weight: " << cp->weight << endl;

    return 0;
}

//8
#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
    string brand_name;
    double weight;
    int calorie;
};

int main()
{
    CandyBar s01, s02, s03;
    CandyBar * p = new CandyBar[3];

    p->brand_name = "somthing";
    p->weight = 1.3;
    p->calorie = 123;

    p++;
    p->brand_name = "somthing";
    p->weight = 1.3;
    p->calorie = 123;

    p++;p->brand_name = "somthing";
    p->weight = 1.3;
    p->calorie = 123;

    delete[] p;
}


void function(int ar_name, int size_ar, int n)
{
    int ar_name[size_ar];
    int count = 0;
    while (count < size_ar)
        list[count] = n
}

void set_array(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
        arr[i] = value;
}


void set_array(int *arr[0], int *arr[-1], int n)
{
    for (int i = 0; i < sizeof(arr); i++)
        *arr[i] = n;
}


void set_array(int * begin, int * end, int value)
{
    for (int * pt = begin; pt != end; pt++)
    pt* = value;
}


double return_max(const double ar[], int size)
{
    double max = ar[0];
    for (int i = 0; i < size; i++)
        if ar[i] > max:
            max = ar[i];
        else
            continue;

    cout << "max is " << max;






#include <iostream>
using namespace std;
double average(double x, double y);
int main()
{
    double x;
    double y;

    cout << "Please enter two numbers again and again until you hit 0 "<< endl;
    cin >> x;
    cin >> y;
    while (x != 0 && y != 0)
    {
        cout << "The average of x and y is " << average(x, y) << endl;
        cout << "Keep going" << endl;
        cin >> x;
        cin >> y;
    }
    cout << "Bye" << endl;
    return 0;
}

double average(double x, double y)
{
    return 2.0*x*y/(x+y);
}
