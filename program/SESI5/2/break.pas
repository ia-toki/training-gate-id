var
    N,M:longint;
    i:longint;
begin
    readln(N, M);

    for i := 1 to N do begin
        if (i = M) then begin
            break;
        end;

        writeln(i);
    end;
    
    writeln('selesai');
end.