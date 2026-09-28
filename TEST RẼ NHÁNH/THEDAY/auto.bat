for /l %%i in (1,1,20) do md "test%%i"
for /l %%i in (1,1,20) do move "%%i.in" "test%%i\THEDAY.INP"
for /l %%i in (1,1,20) do move "%%i.out" "test%%i\THEDAY.OUT"