rem   *** validation ***
call scripts\run-validator-tests.bat
call scripts\run-checker-tests.bat

rem    *** tests ***
md tests
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 10 dwqewfrgeh53" "tests\01" 1
call scripts\gen-input-via-stdout.bat "files\gen_choose_comps_and_zone_len.exe -n 15 -m 25 -comps 3 -len 3 efwrgtrhyj5765" "tests\02" 2
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 25 hjviuo786r75" "tests\03" 3
call scripts\gen-input-via-stdout.bat "files\gen_choose_comps_and_zone_len.exe -n 20 -m 100 -comps 5 -len 6 regtrytu890o7iyutre" "tests\04" 4
call scripts\gen-input-via-stdout.bat "files\gen_choose_comps_and_zone_len.exe -n 100 -m 100 -comps 20 -len 2 fewrgt6h7j" "tests\05" 5
call scripts\gen-input-via-stdout.bat "files\gen_choose_comps_and_zone_len.exe -n 100 -m 100 -comps 11 -len 4 y8iuhkjoil" "tests\06" 6
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 50 345d6fuygbinioj" "tests\07" 7
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 100 4w5e67fyuvhbi" "tests\08" 8
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 100 8y9oihubjhvty" "tests\09" 9
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 100 s546dctgbioij" "tests\10" 10
call scripts\gen-input-via-stdout.bat "files\gen_choose_comps_and_zone_len.exe -n 30 -m 30 -comps 15 -len 1 98yiugbhgfty5t" "tests\11" 11
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 100 23defrbtnyjuk879p775" "tests\12" 12
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 1000 fih3" "tests\13" 13
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 1000 vjks" "tests\14" 14
call scripts\gen-input-via-stdout.bat "files\gen_choose_comps_and_zone_len.exe -n 1000 -m 1000 -comps 4 -len 200 zcxvvccbcvb" "tests\15" 15
call scripts\gen-input-via-stdout.bat "files\gen_choose_comps_and_zone_len.exe -n 1000 -m 1000 -comps 4 -len 200 ^$#$@$!@$#@$#@" "tests\16" 16
call scripts\gen-input-via-stdout.bat "files\gen_choose_comps_and_zone_len.exe -n 1000 -m 1000 -comps 10 -len 50 ”!”!”!”!11111" "tests\17" 17
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 250 ef3rvetbyu67ki865h" "tests\18" 18
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 500 23r4fewrgtyjukil8" "tests\19" 19
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 750 fewcdveftrhyjuk65j" "tests\20" 20
call scripts\gen-input-via-stdout.bat "files\gen_choose_comps_and_zone_len.exe -n 500 -m 750 -comps 10 -len 5 e5dftyuihojp" "tests\21" 21
call scripts\gen-input-via-stdout.bat "files\gen_choose_comps_and_zone_len.exe -n 500 -m 250 -comps 25 -len 5 ascdvfbrty564erw" "tests\22" 22
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 1000 as5d6ctvubinoij-" "tests\23" 23
call scripts\gen-input-via-stdout.bat "files\generator_TL.exe -n 1000 ajgv" "tests\24" 24
call scripts\gen-answer.bat tests\01 tests\01.a "tests" "1-30p"
call scripts\gen-answer.bat tests\02 tests\02.a "tests" "1-30p"
call scripts\gen-answer.bat tests\03 tests\03.a "tests" "1-30p"
call scripts\gen-answer.bat tests\04 tests\04.a "tests" "1-30p"
call scripts\gen-answer.bat tests\05 tests\05.a "tests" "1-30p"
call scripts\gen-answer.bat tests\06 tests\06.a "tests" "1-30p"
call scripts\gen-answer.bat tests\07 tests\07.a "tests" "1-30p"
call scripts\gen-answer.bat tests\08 tests\08.a "tests" "1-30p"
call scripts\gen-answer.bat tests\09 tests\09.a "tests" "1-30p"
call scripts\gen-answer.bat tests\10 tests\10.a "tests" "1-30p"
call scripts\gen-answer.bat tests\11 tests\11.a "tests" "1-30p"
call scripts\gen-answer.bat tests\12 tests\12.a "tests" "1-30p"
call scripts\gen-answer.bat tests\13 tests\13.a "tests" "2-70p"
call scripts\gen-answer.bat tests\14 tests\14.a "tests" "2-70p"
call scripts\gen-answer.bat tests\15 tests\15.a "tests" "2-70p"
call scripts\gen-answer.bat tests\16 tests\16.a "tests" "2-70p"
call scripts\gen-answer.bat tests\17 tests\17.a "tests" "2-70p"
call scripts\gen-answer.bat tests\18 tests\18.a "tests" "2-70p"
call scripts\gen-answer.bat tests\19 tests\19.a "tests" "2-70p"
call scripts\gen-answer.bat tests\20 tests\20.a "tests" "2-70p"
call scripts\gen-answer.bat tests\21 tests\21.a "tests" "2-70p"
call scripts\gen-answer.bat tests\22 tests\22.a "tests" "2-70p"
call scripts\gen-answer.bat tests\23 tests\23.a "tests" "2-70p"
call scripts\gen-answer.bat tests\24 tests\24.a "tests" "2-70p"

