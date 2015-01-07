var
   N, M : longint;
   i, j : longint;
begin
   readln(N, M);

   for i := 1 to N do begin
     for j := 1 to M do begin
       write('*');
     end;
     writeln;
   end;
end.