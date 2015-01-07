var
   N, i : longint;
   prima : boolean;
begin
   readln(N);

   prima := TRUE;
   for i := 2 to N-1 do begin
      if (N mod i = 0) then begin
         prima := FALSE;
         break;
      end;
   end;

   if (prima) then begin
      writeln(N, ' adalah bilangan prima');
   end else begin
      writeln(N, ' bukan bilangan prima');
   end;
end.