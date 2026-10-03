Program SORT;
const   fi='';
        fo='';
var     f:Text;
        a,b,c:longint;
procedure swap(var x,y: longint);
var     tg:longint;
begin
        tg := x; x := y; y:= tg;
end;

Begin
        assign(f,fi); reset(f);
        readln(f,a,b,c);
        close(f);
        if (a > b) then swap(a,b);
        if (a > c) then swap(a,c);
        if (b > c) then swap(b,c);
        assign(f,fo); rewrite(f);
        write(f,a,' ',b,' ',c);
        close(f);
end.