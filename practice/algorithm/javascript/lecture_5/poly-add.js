/*
* 多項式陣列處理
*/

ITEMS = 6;

var PrintPoly = ( Poly, items) => {
	MaxExp = Poly[0];
	for ( i = 1; i < Poly[0] + 2; i++) {
		MaxExp = MaxExp - 1;
		if (Poly[i] != 0) {
			if ((MaxExp + 1) != 0) {
				process.stdout.write(Poly[i] + 'X^' + (MaxExp + 1) + ' ');
			} else {
				process.stdout.write(' ' + Poly[i]);
			}
			if (MaxExp >= 0) {
				process.stdout.write('+');
			}
		}
	}
}

var PolySum = (Poly1, Poly2) => {
	result = [];
	result[0] = Poly1[0];
	for ( i = 1; i < Poly1[0] + 2; i++) {
		result[i] = Poly1[i] + Poly2[i];
	}
	PrintPoly( result, ITEMS);
}

PolyA = [ 4, 3, 7, 0, 6, 2];
PolyB = [ 4, 1, 5, 2, 0, 9];

process.stdout.write("多項式 A => ");
PrintPoly( PolyA, ITEMS);
console.log();

process.stdout.write("多項式 B => ");
PrintPoly( PolyB, ITEMS);
console.log();

process.stdout.write("A + B => ");
PrintPoly( PolyA, PolyB);
console.log();

