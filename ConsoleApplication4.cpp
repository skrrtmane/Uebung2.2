#include <iostream>

using namespace std;

int main() {

	int origeingabezahl;
	cin >> origeingabezahl;

	int zahl0 = origeingabezahl % 2; //8te stelle	

	int zzahl1 = origeingabezahl / 2;
	int zahl1 = zzahl1 % 2;			// 7. Stelle	

	int zzahl2 = zzahl1 / 2;
	int zahl2 = zzahl2 % 2;			// 6. Stelle	

	int zzahl3 = zzahl2 / 2;
	int zahl3 = zzahl3 % 2;			// 5. Stelle	

	int zzahl4 = zzahl3 / 2;
	int zahl4 = zzahl4 % 2;			// 4. Stelle

	int zzahl5 = zzahl4 / 2;
	int zahl5 = zzahl5 % 2;			// 3. Stelle

	int zzahl6 = zzahl5 / 2;
	int zahl6 = zzahl6 % 2;			// 2. Stelle

	int zzahl7 = zzahl6 / 2;
	int zahl7 = zzahl7 % 2;			// 1. Stelle

	// Nun müssen wir die jeweiligen werte multiplizieren um auf die gewünschte stelle zu kommen.

	int lzahl0 = zahl0;			
	int lzahl1 = zahl1 * 10;		
	int lzahl2 = zahl2 * 100;			
	int lzahl3 = zahl3 * 1000;
	int lzahl4 = zahl4 * 10000;
	int lzahl5 = zahl5 * 100000;
	int lzahl6 = zahl6 * 1000000;
	int lzahl7 = zahl7 * 10000000;

	// Jetzt nur noch alle lzahlen addieren.

	int loesung = lzahl0 + lzahl1 + lzahl2 + lzahl4 + lzahl5 + lzahl6 + lzahl7;
	cout << loesung;
	return 0;
};
