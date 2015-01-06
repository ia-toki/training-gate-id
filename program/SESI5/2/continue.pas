var
    N,M:longint;
    i:longint;
begin
    readln(N, M);

    for i := 1 to N do begin
        if (i mod M = 0) then begin
            continue;
        end;

        writeln(i);
    end;
    
    writeln('selesai');
end.