var
   awal, akhir, i : longint;
   jumlah : longint;
begin
   write('Nilai awal: '); readln(awal);
   write('Nilai akhir: '); readln(akhir);

   jumlah := 0;
   i := awal;
   repeat
      jumlah := jumlah + i;
      i := i + 1;
   until (i > akhir);

   writeln('jumlah bilangan bulat di antara awal dan akhir (inklusif) adalah ', jumlah);
end.