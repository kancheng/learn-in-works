Num_1 = 24;
Num_2 = 12;

if ( Num_1 < Num_2 ) {
    Tmp_Num = Num_1;
    Num_1 = Num_2;
    Num_2 = Tmp_Num;
}

while (Num_2 != 0) {
	Tmp_Num = Num_1 % Num_2;
    Num_1 = Num_2;
    Num_2 = Tmp_Num;	
}

process.stdout.write(('最大公因數(g.c.d) :' + Num_1 + '\n'));