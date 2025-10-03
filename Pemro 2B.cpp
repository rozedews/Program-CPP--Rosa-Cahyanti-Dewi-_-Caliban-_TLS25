#include <iostream>
#include <string>
using namespace std;
string color (int now)
{
    int lamp = (now - 45) % 103;
    if (lamp <= 3) 
        return "Yellow" ;
    else if (lamp <=83)
        return "Red" ;
    else return "Green" ;

}
int main ()
{
    int detik []= {80,135,150,212};
    cout << "Hasil dari soal ini : " <<endl;
    for (int i : detik) {
        cout << " lamp color :" << color (i) << endl;
    };
    return 0;
}


