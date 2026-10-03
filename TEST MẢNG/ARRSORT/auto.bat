for /l %%i in (0,1,19) do md "test%%i"
for /l %%i in (0,1,19) do move "%%i.in" "test%%i\ARRSORT.INP"
for /l %%i in (0,1,19) do move "%%i.out" "test%%i\ARRSORT.OUT"
