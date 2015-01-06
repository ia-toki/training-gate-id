var
    N,i:longint;
begin
    write('Masukkan nilai N: ');
    readln(N);

    i := 1;
    repeat
        writeln('tulisan ini dicetak saat i = ', i);
        i := i + 1;
    until (i > N);

    writeln('akhir dari program');
end.