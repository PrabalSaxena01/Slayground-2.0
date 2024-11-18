#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

double areaSwitchCase(int ch, vector<double> a) {
    double area = 0.0;
    switch (ch) {
        case 1: {
            // Area of a circle
            double r = a[0];
            area = M_PI * r * r;
            break;
        }
        case 2: {
            // Area of a rectangle
            double l = a[0], b = a[1];
            area = l * b;
            break;
        }
        default:
            return 0.0; // Invalid choice
    }
    return area;
}

int main() {
    int ch;
    cin >> ch; // Input choice

    vector<double> a;
    if (ch == 1) {
        double r;
        cin >> r; // Input radius
        a.push_back(r);
    } else if (ch == 2) {
        double l, b;
        cin >> l >> b; // Input length and breadth
        a.push_back(l);
        a.push_back(b);
    }

    double area = areaSwitchCase(ch, a);
    cout << fixed << setprecision(5) << area << endl;

    return 0;
}
