#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int toplam = 0;
    int j = 0;
    srand(time(0));

    for(int i = 0; i < 10; i++)
    {
        int sayi = rand()%100;
        cout << sayi << endl;
        if(sayi%2 == 1)
        {
            j++;
            toplam += sayi;
        }
    }
    cout <<"Tek sayilarin adeti: "<< j << endl;
    cout <<"Tek sayilarin toplami: "<< toplam;
    return 0;
}
