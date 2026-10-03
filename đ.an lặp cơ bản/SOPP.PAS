var     N,i:longint;
        S:int64;
begin
        readln(N);
        S:=1;
        for i:=2 to trunc(sqrt(N)) do
        if (N mod i =0) then
        Begin
                S := S + i + N div i;
                if (i*i = N) then S:=S-i;
        end;
        if S > N then write(1)
        else write(0);
end.
