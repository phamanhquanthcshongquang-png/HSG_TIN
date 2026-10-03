const   fi='';
        fo='';
var     N,a,b,c,d:integer;
        f,g:text;
begin
        assign(f,fi); reset(f);
        assign(g,fo); rewrite(g);
        readln(f,N);
        d := N mod 10;
        N := N div 10;
        c := N mod 10;
        N := N div 10;
        b := N mod 10;
        a := N div 10;
        if a + b = c + d then write(g,'YES')
        else write(g,'NO');
        close(g);
        close(f);
end.
