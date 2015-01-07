var
   awal, akhir, i, jumlah : longint;
begin
   write('Nilai awal: '); readln(awal);
   write('Nilai akhir: '); readln(akhir);

   jumlah := 0;
   i := awal;
   while (i <= akhir) do begin
      jumlah := jumlah + i;
      i := i + 1;
   end;

   writeln('jumlah bilangan bulat di antara awal dan akhir (inklusif) adalah ', jumlah);
end.