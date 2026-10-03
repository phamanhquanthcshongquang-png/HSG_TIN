program sum;
const   fi='SUM.INP';
        fo='SUM.OUT';
var     a,b,c,d,e:longint;
        s,t,min,max:longint;
        f:text;
function getmin(x,y:longint):longint;
begin
        if (x > y) then exit(y);
        exit(x);
end;
function getmax(x,y:longint):longint;
begin
        if (x > y) then exit(x);
        exit(y);
end;
BEGIN
        assign(f,fi); reset(f);
        readln(f,a,b,c,d,e);
        close(f);
        min := maxlongint;
        max := 0;
        s := a + b + c + d + e;
        t := s - a;
        min := getmin(min,t);
        max := getmax(max,t);
        t := s - b;
        min := getmin(min,t);
        max := getmax(max,t);
        t := s - c;
        min := getmin(min,t);
        max := getmax(max,t);
        t := s - d;
        min := getmin(min,t);
        max := getmax(max,t);
        t := s - e;
        min := getmin(min,t);
        max := getmax(max,t);
        assign(f,fo); rewrite(f);
        write(f,min,' ',max);
        close(f);
END.