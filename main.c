#include <stdio.h>

int enkucuk(int deg[], int n) {
   int min = deg[0]; // Dizinin ilk elemaný en küçük eleman olarak atadým.
   for(int i=1; i<n; i++) { // dizinin ikinci elemanýndan son elemanýna kadar döngü oluþturdum.
      if(deg[i] < min) { // eðer dizinin i. elemaný mevcut en küçük elemandan küçükse
         min = deg[i]; // yeni en küçük eleman olarak atanýr
      }
   }
   return min; // en küçük eleman geri döndürülür
}

int main() {
   int deg[] = {6, 42, 81, 34, 9}; // bir dizi tanýmlanýr ve elemanlarý belirtilir
   int n = sizeof(deg)/sizeof(deg[0]); // dizinin eleman sayýsý hesaplanýr
   printf("En Kucuk eleman: %d", enkucuk(deg, n)); // en küçük eleman ekrana yazdýrýlýr
   return 0;
}

