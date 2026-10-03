for /l %%i in (0,1,9) do copy "test0%%i\inp.txt" "%%i.in"
for /l %%i in (0,1,9) do copy "test0%%i\out.txt" "%%i.out"