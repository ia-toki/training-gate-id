var
   N, cur, i : longint;
   count : longint;
   found : boolean;
begin
   readln(N);

   count := 0; // banyaknya prima yang sudah ditemukan
   cur := 2; // nilai yang sedang diperiksa keprimaannya
   while (count < N) do begin
      found := FALSE;
      i := 2;
      while ((i < cur) and not found) do begin
         if (cur mod i = 0) then begin
            found := TRUE;
         end;
         i := i + 1;
      end;

      if (not found) then begin
         // ditemukan prima! 
         // cetak dan tambahkan prima yg sudah ditemukan
         writeln(cur);
         count := count + 1;
      end;

      // entah ini prima atau bukan, lanjut untuk 
      // memeriksa bilangan berikutnya
      cur := cur + 1;
   end;
end.