#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--)
    {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;

        // Output A in hexadecimal format with the following settings:
        //   - left: left-align the output
        //   - hex: use hexadecimal base
        //   - nouppercase: use lowercase letters for hexadecimal digits
        //   - showbase: show the base prefix (0x for hexadecimal)
        //   - static_cast<long long>(A): convert A to a long long integer
        cout << left << hex << nouppercase << showbase << static_cast<long long>(A) << endl;
        // Output B with the following settings:
        //    - setw(15): set the minimum field width to 15 characters
        //    - setfill('_'): use underscores as fill characters
        //    - showpos: show a plus sign for positive numbers
        //    - right: right-align the output
        //    - fixed: use fixed-point notation
        //    - setprecision(2): set the precision to 2 decimal places
        cout << setw(15) << setfill('_') << showpos << right << fixed << setprecision(2) << B << endl;
        // Output C with the following settings:
        //   - noshowpos: do not show a plus sign for positive numbers
        //   - fixed: use fixed-point notation
        //   - scientific: use scientific notation
        //   - uppercase: use uppercase letters for scientific notation
        //   - setprecision(9): set the precision to 9 decimal places
        cout << noshowpos << fixed << scientific << uppercase << setprecision(9) << C << endl;
    }
    return 0;
}
