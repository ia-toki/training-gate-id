var
   N, X, hasil: longint;
   h: array[1..100000] of longint;
   i: longint;

begin
   readln(N, X);
   for i := 1 to N do begin
      read(h[i]);
   end;

   hasil := 0;
   for i := 1 to N do begin
      if (h[i] = X) then begin
         hasil := i;
         break;
      end;
   end;

   if (hasil = 0) then begin
      writeln('beri hadiah lain');
   end else begin
      writeln(hasil);
   end;
end.
