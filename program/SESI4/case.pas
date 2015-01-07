var
   nilai : char;
begin
   readln(nilai);

   case (nilai) of
      'A' : begin writeln('Sempurna'); end;
      'B' : begin writeln('Bagus'); end;
      'C' : begin writeln('Cukup'); end;
      'D' : begin writeln('Kurang'); end;
      'E' : begin writeln('Sangat kurang'); end;
   end;
end.