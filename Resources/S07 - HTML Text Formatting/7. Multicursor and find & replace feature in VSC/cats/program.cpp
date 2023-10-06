#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

int main()
{

    vector<int> wholeNumbers {20, 10, 4, -3, 25};

    double nrOfPeople = 20.5;

    cout << nrOfPeople << endl;
    cout << typeid(nrOfPeople).name() << endl;


    for(auto it = wholeNumbers.begin(); it != wholeNumbers.end(); it++)
    {
        cout << *it << endl;
    }


    return 0;
}
