var
   N: longint;
   temp: longint;
   hasil: array[1..100, 1..100] of longint;
   i, j: longint;

begin
   readln(N);
   
   for i := 1 to N do begin
      for j := 1 to N do begin
         read(temp);
         hasil[i][j] := temp;
      end;
      readln;
   end;

   for i := 1 to N do begin
      for j := 1 to N do begin
         read(temp);
         hasil[i][j] := hasil[i][j] + temp;
      end;
      readln;
   end;

   for i := 1 to N do begin
      for j := 1 to N do begin
         write(hasil[i][j]);
         if (j < N) then 
            write(' ');
      end;
      writeln;
   end;
end.