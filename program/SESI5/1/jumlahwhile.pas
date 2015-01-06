var
    awal,akhir,i:longint;
    jumlah:longint;
begin
    write('Masukkan nilai awal: '); readln(awal);
    write('Masukkan nilai akhir (>=awal): '); readln(akhir);

    jumlah := 0;
    i := awal;
    while (i <= akhir) do begin
        jumlah := jumlah + i;
        i := i + 1;
    end;

    writeln('jumlah bilangan bulat di antara awal dan akhir (inklusif) adalah ', jumlah);
end.