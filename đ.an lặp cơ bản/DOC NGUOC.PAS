var     x,y:longint;

function doc_nguoc(N:longint):longint;
var     du,M:longint;
begin
        M := 0;
        while N > 0 do
        begin
                du := N mod 10;
                N := N div 10;
                M := M*10 + du;
        end;
        exit(M);
end;

BEGIN
        readln(x);
        y := doc_nguoc(x);
        if x = y then write('YES')
        else write('NO');
END.