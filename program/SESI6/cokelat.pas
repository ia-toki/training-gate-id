var
   N: longint;
   temp: longint;
   hasil: array[1..100, 1..100] of longint;
   i, j: longint;

begin
   readln(N);
   
   for i := 1 to N do begin
      for j := 1 to N do begin
         read(D[i][j]);
      end;
      readln;
   end;

   for i := 1 to N do begin
      for j := 1 to N do begin
         read(G[i][j]);
      end;
      readln;
   end;

   for i := 1 to N do begin
      for j := 1 to N do begin
         hasil[i][j] := D[i][j] + G[i][j];
      end;
   end;   

   for i := 1 to N do begin
      for j := 1 to N do begin
         write(hasil[i][j]);
         if (j < N) then begin
            write(' ');
         end
      end;
      writeln;
   end;
end.
