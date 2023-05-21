#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int sayi, toplam = 0;

    while(i<10)
    {
        cout <<"Sayi girin: ";
        cin >> sayi;
        toplam += sayi;
        i++;
    }
    cout <<"Toplam: "<< toplam;
    return 0;
}
