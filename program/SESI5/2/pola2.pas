var
   N : longint;
   i, j : longint;
begin
   readln(N);

   for i := 1 to N do begin
      for j := 1 to i do begin
         write('*');
      end;
      writeln;
   end;
end.