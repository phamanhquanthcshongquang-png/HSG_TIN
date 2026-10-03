const   fi = 'GAMES.INP';
        fo = 'GAMES.OUT';
var     f,g:text;
        a,b:longint;
begin
        assign(f,fi); reset(f);
        assign(g,fo); rewrite(g);
        read(f,a,b);
        if (a=b) then write(g,'HOA')
        else    if (a = (b + 1) mod 3) then write(g,'NAM')
                else write(g,'BAC');
        close(g);
        close(f);
end.
