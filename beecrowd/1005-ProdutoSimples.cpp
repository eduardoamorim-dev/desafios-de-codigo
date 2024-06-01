#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double notaA, notaB, media;

    cin >> notaA >> notaB;

    media = ((notaA * 3.5) + (notaB * 7.5)) / 11;

    cout << fixed << setprecision(5) << "MEDIA = " << media << endl;

    return 0;
}