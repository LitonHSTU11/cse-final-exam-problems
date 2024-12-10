#include <iostream>
using namespace std;

int main()

{
    int n[5];
    int p = 0;
    int sum = 0;


    // Read 5 numbers
    for (int i = 0; i < 5; i++)

        {
        cout << "Input number " << i + 1 << ": ";
        cin >> n[i];

        // Check if the number is positive
        if (n[i] > 0) {
            sum += n[i];
            p++;
        }
    }
    cout << "Number of positive numbers: " << p << endl;

    if (p>0)
    {
        double average =sum/p++;
        cout << "Average of positive numbers: " << average << endl;
    } else {
        cout << "No positive numbers entered." << endl;
    }

    return 0;
}
