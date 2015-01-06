var
    N,i:longint;
begin
    write('Masukkan nilai N: ');
    readln(N);

    for i := N downto 1 do begin
        writeln('tulisan ini dicetak saat i = ', i);
    end;

    writeln('akhir dari program');
end.