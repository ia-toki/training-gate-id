var
   a: array[1..100] of array[1..100] of longint;
begin
   a[1][2] := 3;
   writeln(a[1][2]);
end.