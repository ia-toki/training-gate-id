var
    a,b,c,x,hasil:longint;
begin
	// inisialisasi
    a := 1;
    b := 3;
    c := -2;
    
    // baca nilai x
    readln(x);

    // hitung hasil fungsi
    hasil := a*sqr(x) + b*x + c;

    // cetak
    writeln('ax^2 + bx + c = ', hasil);
end.