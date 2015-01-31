var
   N, i: longint;
   tabel: array[1..100] of longint;

begin
   readln(N);

   for i := 1 to N do begin
      readln(tabel[i]);
   end;

   for i := N downto 1 do begin
      writeln(tabel[i]);
   end;
end.