#include <iostream>

using namespace std;

int main()
{
    int sayi;
    int i = 0;

    for(sayi = 0; sayi<10; sayi++)
    {
        if(sayi%3 == 0)
        {
            if(sayi%7 != 0)
                i++;
        }

    }
    cout <<"0 ile 100 arasinda 3'e bolunen 7'ye bolunmeyen sayilarin adeti: "<< i;
    return 0;
}
