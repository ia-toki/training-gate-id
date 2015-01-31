var
   N, i, total, lulus: longint;
   h: array[1..100] of longint;
begin
   readln(N);
   for i := 1 to N do begin
      readln(h[i]);
   end;

   total := 0;
   for i := 1 to N do begin
      total := total + h[i];
   end;

   lulus := 0;
   for i := 1 to N do begin
      // trik menghindari pembagian
      if (h[i]*N >= total) then begin 
         lulus := lulus + 1;
      end;
   end;

   writeln(lulus);
end.