for /l %%i in (0,1,9) do md "test0%%i"
for /l %%i in (0,1,9) do move "%%i.in" "test0%%i\ASTRING.inp"
for /l %%i in (0,1,9) do move "%%i.out" "test0%%i\ASTRING.out"

for /l %%i in (10,1,19) do md "test%%i"
for /l %%i in (10,1,19) do move "%%i.in" "test%%i\ASTRING.inp"
for /l %%i in (10,1,19) do move "%%i.out" "test%%i\ASTRING.out"