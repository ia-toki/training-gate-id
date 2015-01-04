type
    titik = record
                x,y:longint;
            end;
var
    t1,t2:titik;
begin
    t1.x := 5;
    t1.y := 3;

    t2.x := 1;
    t2.y := 2;

    writeln(t1.x, ',', t1.y);
    writeln(t2.x, ',', t2.y);
end.