const   fi = 'UCLN.INP';
        fo = 'UCLN.OUT';
var     a,b:longint;

function UCLN(x,y:longint):longint;
begin
        if x = 0 then
        Begin
                UCLN := y;
                exit;
        end;
        if y = 0 then
        begin
                UCLN := x;
                exit;
        end;
        UCLN := UCLN(y,x mod y);
end;

BEGIN
        assign(input,fi); reset(input);
        readln(a,b);
        close(input);
        assign(output,fo); rewrite(output);
        write(UCLN(a,b));
        close(output);
END.
