var
   N, i : longint;
begin
   write('Masukkan nilai N: ');
   readln(N);

   i := 1;
   while (i <= N) do begin
      writeln('tulisan ini dicetak saat i = ', i);
      i := i + 1;
   end;

   writeln('akhir dari program');
end.