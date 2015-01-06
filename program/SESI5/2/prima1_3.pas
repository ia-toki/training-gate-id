var
    N,i:longint;
    found:boolean;
begin
    readln(N);

    found := FALSE;
    i := 2;
    while ((i < N) and not found) do begin
        if (N mod i = 0) then begin
            found := TRUE;
        end;
        i := i + 1;
    end;

    if (not found) then begin
        writeln(N, ' adalah bilangan prima');
    end else begin
        writeln(N, ' bukan bilangan prima');
    end;
end.