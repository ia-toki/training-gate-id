var
   N, X, hasil: longint;
   h: array[1..100000] of longint;
   i: longint;
   kiri, kanan, tengah: longint;

begin
   readln(N, X);
   for i := 1 to N do begin
      read(h[i]);
   end;

   (* pencarian *)
   hasil := 0; // artinya belum ditemukan
   kiri := 1;
   kanan := N;
   while ((kiri <= kanan) and (hasil = 0)) do begin
      tengah := (kiri + kanan) div 2;
      
      if (X < h[tengah]) then begin
         kanan := tengah - 1;
      end else if (X > h[tengah]) then begin
         kiri := tengah + 1;
      end else begin
         hasil := tengah;
      end;
   end;

   if (hasil = 0) then begin
      writeln('beri hadiah lain');
   end else begin
      writeln(hasil);
   end;
end.
