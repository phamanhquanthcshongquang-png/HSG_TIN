const   fi='';
        fo='';
var     S,X:string;
        f:text;
procedure doc;
var     i:integer;
begin
        assign(f,fi); reset(f);
        read(f,S);
        X := '';
        for i:=length(S) downto 1 do X := X +S[i];
        close(f);
end;
procedure ghi;
begin
        assign(f,fo); rewrite(f);
        if X = S then write(f,'YES') else write(f,'NO');
        close(f);
end;
BEGIN
        doc;
        ghi;
END.
