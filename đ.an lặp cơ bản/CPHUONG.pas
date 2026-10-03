program cphuong;
var i,n,d:integer;
begin
        assign(input,'CPHUONG.INP'); reset(input);
        assign(output,'CPHUONG.OUT'); rewrite(output);
        readln(n);
        for i:=1 to n do
        if (i = sqr(trunc(sqrt(i)))) then inc(d);
        writeln(d);
        for i:=1 to n do
        if (i = sqr(trunc(sqrt(i)))) then write(i,' ');
        close(input);
        close(output);
end.
