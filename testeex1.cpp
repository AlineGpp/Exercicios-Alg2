#include <iostream>
#include <random>
#include <iomanip>
using namespace std;


int main()
{
    random_device rd;
    default_random_engine eng(rd());
    uniform_real_distribution<float> distr(0, 100);
    float h;

    for (int n = 0; n < 5; ++n) {
            h = distr(eng);
        cout << setprecision(10)

             << h << "\n";
    }

    return EXIT_SUCCESS;
}
