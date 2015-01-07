var
   N, M : longint;
   i, j : longint;
begin
   readln(N, M);

   for i := 1 to N do begin
      j := 1;
      while (j <= M) do begin
         write('*');
         j := j + 1;
      end;
      writeln;
   end;
end.