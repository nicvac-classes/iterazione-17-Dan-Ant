#include <iostream>
using namespace std;

int main() {
float i, k, l, n, max, min, p;
i=0;
k=0;
l=0;
p=0;
do
{
 cout << "Inserisci il numero" << endl;
 cin >> n;
 if (i=0)
 {
    max=n;
 }
 else
 {
    if (n>max)
    {
        max=n;
    }
    else
    {

    }
 }
  if (i=0)
 {
    min=n;
 }
 else
 {
    if (n<min)
    {
        min=n;
    }
    else
    {

    }
 }
 if (n>=0)
 {
    p=n+p;
    l=l+1;
 }
 else
 {
    k=k+1;
 }
 i=i+1;

} while (n !=0);
cout << "Il valore massimo è " << max;
cout << "Il valore minimo è " << min;
cout << "Sono stati inseriti " << k << " valori negativi";
cout << "La media dei valori positivi è " << (p/l);


}


