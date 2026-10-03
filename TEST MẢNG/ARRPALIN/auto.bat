for /l %%i in (0,1,19) do md "test%%i"
for /l %%i in (0,1,19) do move "%%i.in" "test%%i\ARRPALIN.INP"
for /l %%i in (0,1,19) do move "%%i.out" "test%%i\ARRPALIN.OUT"
