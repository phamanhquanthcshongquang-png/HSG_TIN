for /l %%i in (0,1,9) do md "test%%i"
for /l %%i in (0,1,9) do move "%%i.in" "test%%i\SPY.INP"
for /l %%i in (0,1,9) do move "%%i.out" "test%%i\SPY.OUT"
