var     A:array[1..3] of longint;
        res,i,j,tg,d1,d2:longint;

BEGIN
        readln(A[1],A[2],A[3]);
        for i:=1 to 2 do
        for j:=i+1 to 3 do
        if A[i] > A[j] then
        Begin
                tg := A[i]; A[i]:=A[j]; A[j] := tg;
        end;
        d1 := A[2] - A[1];
        d2 := A[3] - A[2];
        if d1 = d2 then res := A[3] + d1
        else if d1 < d2 then res := A[2] + d1
             else res := A[1]+d2;
        write(res);
END.