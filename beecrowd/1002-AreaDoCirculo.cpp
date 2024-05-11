#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double raio, area;
    cin >> raio;

    area = 3.14159 * (raio * raio);
    
    cout << fixed << setprecision(4) << "A=" << area  << endl;

    return 0;
}

/* ou

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double raio, area;
    cin >> raio;

    area = 3.14159 * pow(raio, 2); // Usando pow() para calcular o quadrado do raio
    
    cout << fixed << setprecision(4) << "A=" << area  << endl;

    return 0;
}

*/