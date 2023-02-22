#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

    string parolaInserita;
    cout << "Inserisci una parola\n";
    cin >> parolaInserita;

    ifstream fileInput("maggio.txt");

    while (getline(fileInput, riga))
    {

        cout << "Inserisci una parola, per fermare il programma inserisci EXIT " << endl;
        cin >> parolaInserita;
        if (parolaInserita == "EXIT")
        {
            return 0;
        }
    

}