rem   *** validation ***
call scripts\run-validator-tests.bat
call scripts\run-checker-tests.bat

rem    *** tests ***
md tests
call scripts\gen-input-via-stdout.bat "files\gen_p2.exe -n 100 -m 100 dqw1ewcrt45trg456" "tests\01" 1
call scripts\gen-input-via-stdout.bat "files\gen_p2.exe -n 10000 -m 1000 f0sgdr2thtyj4353" "tests\02" 2
call scripts\gen-input-via-stdout.bat "files\gen_p2.exe -n 10000 -m 10000 43trt6erty899okiuy" "tests\03" 3
call scripts\gen-input-via-stdout.bat "files\gen_p2.exe -n 100000 -m 100000 54678gft5y7uigfd" "tests\04" 4
call scripts\gen-input-via-stdout.bat "files\gen_p2_even_elements.exe -n 100 -m 100 adsfg56ye345yt" "tests\05" 5
call scripts\gen-input-via-stdout.bat "files\gen_p2_even_elements.exe -n 10000 -m 1000 23efvdghyu5453" "tests\06" 6
call scripts\gen-input-via-stdout.bat "files\gen_p2_even_elements.exe -n 10000 -m 10000 lokm567898edwfr" "tests\07" 7
call scripts\gen-input-via-stdout.bat "files\gen_p2_even_elements.exe -n 100000 -m 100000 fjeg043fhqhdefgr" "tests\08" 8
call scripts\gen-input-via-stdout.bat "files\gen_simplu.exe -n 1000 -m 1000 -max 100000 ewrewrwfsdfwwewewfdf" "tests\09" 9
call scripts\gen-input-via-stdout.bat "files\gen_simplu.exe -n 1000 -m 1000 -max 1000000 43rewfdfgfdgdsgsdfas" "tests\10" 10
call scripts\gen-input-via-stdout.bat "files\gen_weighted.exe -n 1000 -m 1000 -max 100000 ghfjfghdfgfdgfdgdfgdf" "tests\11" 11
call scripts\gen-input-via-stdout.bat "files\gen_weighted.exe -n 1000 -m 1000 -max 1000000 fgwerrtgfdgfdgfdgbfdgfdg" "tests\12" 12
call scripts\gen-input-via-stdout.bat "files\gen_2x_sqrt_prime.exe -n 1000 -m 1000 nfght443terfgfdgdfgfd" "tests\13" 13
call scripts\gen-input-via-stdout.bat "files\gen_2x_sqrt_prime.exe -n 1000 -m 1000 4543t34gfgfdgdfgdfgfgf" "tests\14" 14
call scripts\gen-input-via-stdout.bat "files\gen_prime_mici.exe -n 1000 -m 1000 dgfdffdsffdfhkșșțșțșțșțșțșf" "tests\15" 15
call scripts\gen-input-via-stdout.bat "files\gen_prime_mici.exe -n 1000 -m 1000 dasfdgrgfbfgbgfbfgșțățățăț" "tests\16" 16
call scripts\gen-input-via-stdout.bat "files\gen_prime_mari.exe -n 1000 -m 1000 cvbvvbcxvcxbvcbcvbcvbcvbcv" "tests\17" 17
call scripts\gen-input-via-stdout.bat "files\gen_prime_mari.exe -n 1000 -m 1000 *#$#@@@!#!@!!!!!!!!!!„„„„„" "tests\18" 18
call scripts\gen-input-via-stdout.bat "files\gen_prime_mari.exe -n 100000 -m 100000 *&^&$%#%$#@%%$&*^&*$%##@%" "tests\19" 19
call scripts\gen-input-via-stdout.bat "files\gen_simplu.exe -n 25 -m 25 -max 100000 s00ada657fg4hyju" "tests\20" 20
call scripts\gen-input-via-stdout.bat "files\gen_simplu.exe -n 100 -m 100 -max 1000000 fegr566543uy" "tests\21" 21
call scripts\gen-input-via-stdout.bat "files\gen_simplu.exe -n 1000 -m 1000 -max 1000000 32edrfg7j689o" "tests\22" 22
call scripts\gen-input-via-stdout.bat "files\gen_simplu.exe -n 10000 -m 100000 -max 1000000 nmd8t79y0jpdsf" "tests\23" 23
call scripts\gen-input-via-stdout.bat "files\gen_simplu.exe -n 100000 -m 100000 -max 1000000 2e93ifohr4utb5y6" "tests\24" 24
call scripts\gen-input-via-stdout.bat "files\gen_simplu.exe -n 100000 -m 100000 -max 1000000 ewretbyu6873" "tests\25" 25
call scripts\gen-input-via-stdout.bat "files\gen_weighted.exe -n 25 -m 25 -max 100000 f3revrgtyuyu" "tests\26" 26
call scripts\gen-input-via-stdout.bat "files\gen_weighted.exe -n 100 -m 100 -max 1000000 scwert50y" "tests\27" 27
call scripts\gen-input-via-stdout.bat "files\gen_weighted.exe -n 1000 -m 1000 -max 1000000 xdcnklwefriog4t8" "tests\28" 28
call scripts\gen-input-via-stdout.bat "files\gen_weighted.exe -n 10000 -m 100000 -max 1000000 23rgo4ihtj" "tests\29" 29
call scripts\gen-input-via-stdout.bat "files\gen_weighted.exe -n 100000 -m 100000 -max 1000000 ur34tjp5yn" "tests\30" 30
call scripts\gen-input-via-stdout.bat "files\gen_weighted.exe -n 100000 -m 100000 -max 1000000 cewrvtbynuyu89" "tests\31" 31
call scripts\gen-input-via-stdout.bat "files\gen_2x_sqrt_prime.exe -n 100000 -m 100000 fgfdg124124rgfvdfv" "tests\32" 32
call scripts\gen-input-via-stdout.bat "files\gen_2x_sqrt_prime.exe -n 100000 -m 100000 vbvasdwewqregbgnnnss" "tests\33" 33
call scripts\gen-input-via-stdout.bat "files\gen_2x_sqrt_prime.exe -n 100000 -m 100000 hgfhfgtrqetgghgfhsfwerfe" "tests\34" 34
call scripts\gen-input-via-stdout.bat "files\gen_2x_sqrt_prime.exe -n 100000 -m 100000 amnmnmbmn32bnmdsadsad" "tests\35" 35
call scripts\gen-input-via-stdout.bat "files\gen_2x_sqrt_prime.exe -n 100000 -m 100000 dfgtyreytjkj,jh,jhmgdsg" "tests\36" 36
call scripts\gen-input-via-stdout.bat "files\gen_2x_sqrt_prime.exe -n 100000 -m 100000 rthrhbsfdfrwhjghkhgjhgj" "tests\37" 37
call scripts\gen-input-via-stdout.bat "files\gen_2x_sqrt_prime.exe -n 100000 -m 100000 mhjrtyrwtwrghthktutyjnvbn" "tests\38" 38
call scripts\gen-input-via-stdout.bat "files\gen_prime_mici.exe -n 100000 -m 100000 dw2e21312321321312321fffff" "tests\39" 39
call scripts\gen-input-via-stdout.bat "files\gen_prime_mici.exe -n 100000 -m 100000 39rfdd9gfds9f9f9d9fdsfsdg" "tests\40" 40
call scripts\gen-input-via-stdout.bat "files\gen_prime_mici.exe -n 100000 -m 100000 3493294329`;`;`;`3232rred" "tests\41" 41
call scripts\gen-input-via-stdout.bat "files\gen_prime_mici.exe -n 100000 -m 100000 3534t9fgfdgfdkfkdakskdskk" "tests\42" 42
call scripts\gen-input-via-stdout.bat "files\gen_prime_mici.exe -n 100000 -m 100000 hgh9fbgfhlfdgdlgdflglfdgl" "tests\43" 43
call scripts\gen-input-via-stdout.bat "files\gen_prime_mici.exe -n 100000 -m 100000 05430tgfgfkdfaskdkasdkas" "tests\44" 44
call scripts\gen-input-via-stdout.bat "files\gen_prime_mici.exe -n 100000 -m 100000 kbkfaskdskdkasdkaskdaskd" "tests\45" 45
call scripts\gen-input-via-stdout.bat "files\gen_prime_mari.exe -n 100000 -m 100000 fdsfkdfmfmfmvcvcvbvnbnbnvb" "tests\46" 46
call scripts\gen-input-via-stdout.bat "files\gen_prime_mari.exe -n 100000 -m 100000 5453tg34g5y6ju8l8loilklfg" "tests\47" 47
call scripts\gen-input-via-stdout.bat "files\gen_prime_mari.exe -n 100000 -m 100000 `e`2retggn;;;;;;;h,dsadg" "tests\48" 48
call scripts\gen-input-via-stdout.bat "files\gen_prime_mari.exe -n 100000 -m 100000 7`3`3`253lkljjmmnfgf;;" "tests\49" 49
call scripts\gen-input-via-stdout.bat "files\gen_prime_mari.exe -n 100000 -m 100000 $#@$#$%#$^%@$!$!@#!@#@!#@" "tests\50" 50
call scripts\gen-input-via-stdout.bat "files\gen_p2_even_elements.exe -n 100000 -m 100000 ffdmvsdkf@#@$!@43243434" "tests\51" 51
call scripts\gen-input-via-stdout.bat "files\gen_q_mare.exe -n 100000 -m 100000 fd;vf,vldbm432$#@$#@$R#@$#3423" "tests\52" 52
call scripts\gen-input-via-stdout.bat "files\gen_q_mare.exe -n 100000 -m 100000 r30ofkfdkod$#$#4rfhgjHJHJHJHJ" "tests\53" 53
call scripts\gen-input-via-stdout.bat "files\gen_q_mare.exe -n 100000 -m 100000 l,vlcvcvASDASDASDsdbnbmbNDDSHT" "tests\54" 54
call scripts\gen-input-via-stdout.bat "files\gen_q_mic.exe -n 100000 -m 100000 gfdlgfdgplfdkgddf;sd;asd;as;d" "tests\55" 55
call scripts\gen-input-via-stdout.bat "files\gen_q_mic.exe -n 100000 -m 100000 plfppqpqlqwpelpwqdp;;dhjohhhh" "tests\56" 56
call scripts\gen-input-via-stdout.bat "files\gen_q_mic.exe -n 100000 -m 100000 d;vlvdlvdsdsdf13123123@!#!@##" "tests\57" 57
call scripts\gen-input-via-stdout.bat "files\gen_q_mic.exe -n 100000 -m 100000 lKKGHHGFHFGJGHJHdsfLJJLKLLLLLL" "tests\58" 58
call scripts\gen-answer.bat tests\01 tests\01.a "tests" "p2-20p"
call scripts\gen-answer.bat tests\02 tests\02.a "tests" "p2-20p"
call scripts\gen-answer.bat tests\03 tests\03.a "tests" "p2-20p"
call scripts\gen-answer.bat tests\04 tests\04.a "tests" "p2-20p"
call scripts\gen-answer.bat tests\05 tests\05.a "tests" "p2-even-elements-20p"
call scripts\gen-answer.bat tests\06 tests\06.a "tests" "p2-even-elements-20p"
call scripts\gen-answer.bat tests\07 tests\07.a "tests" "p2-even-elements-20p"
call scripts\gen-answer.bat tests\08 tests\08.a "tests" "p2-even-elements-20p"
call scripts\gen-answer.bat tests\09 tests\09.a "tests" "n-m-mici"
call scripts\gen-answer.bat tests\10 tests\10.a "tests" "n-m-mici"
call scripts\gen-answer.bat tests\11 tests\11.a "tests" "n-m-mici"
call scripts\gen-answer.bat tests\12 tests\12.a "tests" "n-m-mici"
call scripts\gen-answer.bat tests\13 tests\13.a "tests" "n-m-mici"
call scripts\gen-answer.bat tests\14 tests\14.a "tests" "n-m-mici"
call scripts\gen-answer.bat tests\15 tests\15.a "tests" "n-m-mici"
call scripts\gen-answer.bat tests\16 tests\16.a "tests" "n-m-mici"
call scripts\gen-answer.bat tests\17 tests\17.a "tests" "n-m-mici"
call scripts\gen-answer.bat tests\18 tests\18.a "tests" "n-m-mici"
call scripts\gen-answer.bat tests\19 tests\19.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\20 tests\20.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\21 tests\21.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\22 tests\22.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\23 tests\23.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\24 tests\24.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\25 tests\25.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\26 tests\26.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\27 tests\27.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\28 tests\28.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\29 tests\29.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\30 tests\30.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\31 tests\31.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\32 tests\32.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\33 tests\33.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\34 tests\34.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\35 tests\35.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\36 tests\36.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\37 tests\37.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\38 tests\38.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\39 tests\39.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\40 tests\40.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\41 tests\41.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\42 tests\42.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\43 tests\43.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\44 tests\44.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\45 tests\45.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\46 tests\46.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\47 tests\47.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\48 tests\48.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\49 tests\49.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\50 tests\50.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\51 tests\51.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\52 tests\52.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\53 tests\53.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\54 tests\54.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\55 tests\55.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\56 tests\56.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\57 tests\57.a "tests" "fara-restrictii-40p"
call scripts\gen-answer.bat tests\58 tests\58.a "tests" "fara-restrictii-40p"

