#include <stdio.h>

int enkucuk(int deg[], int n) {
   int min = deg[0]; // Dizinin ilk eleman� en k���k eleman olarak atad�m.
   for(int i=1; i<n; i++) { // dizinin ikinci eleman�ndan son eleman�na kadar d�ng� olu�turdum.
      if(deg[i] < min) { // e�er dizinin i. eleman� mevcut en k���k elemandan k���kse
         min = deg[i]; // yeni en k���k eleman olarak atan�r
      }
   }
   return min; // en k���k eleman geri d�nd�r�l�r
}

int main() {
   int deg[] = {6, 42, 81, 34, 9}; // bir dizi tan�mlan�r ve elemanlar� belirtilir
   int n = sizeof(deg)/sizeof(deg[0]); // dizinin eleman say�s� hesaplan�r
   printf("En Kucuk eleman: %d", enkucuk(deg, n)); // en k���k eleman ekrana yazd�r�l�r
   return 0;
}

