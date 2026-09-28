for /l %%i in (0,1,9) do md "test%%i"
for /l %%i in (0,1,9) do copy "%%i.in" "test%%i/HHCN.INP"
for /l %%i in (0,1,9) do copy "%%i.out" "test%%i/HHCN.OUT"
