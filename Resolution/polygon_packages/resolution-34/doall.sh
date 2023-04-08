#!/usr/bin/env bash
#   *** validation ***
scripts/run-validator-tests.sh
scripts/run-checker-tests.sh

#    *** tests ***
mkdir -p tests
echo "Generating test #1"
scripts/gen-input-via-stdout.sh "wine files/gen_p2.exe -n 100 -m 100 dqw1ewcrt45trg456" "tests/01" 1
echo "Generating test #2"
scripts/gen-input-via-stdout.sh "wine files/gen_p2.exe -n 10000 -m 1000 f0sgdr2thtyj4353" "tests/02" 2
echo "Generating test #3"
scripts/gen-input-via-stdout.sh "wine files/gen_p2.exe -n 10000 -m 10000 43trt6erty899okiuy" "tests/03" 3
echo "Generating test #4"
scripts/gen-input-via-stdout.sh "wine files/gen_p2.exe -n 100000 -m 100000 54678gft5y7uigfd" "tests/04" 4
echo "Generating test #5"
scripts/gen-input-via-stdout.sh "wine files/gen_p2_even_elements.exe -n 100 -m 100 adsfg56ye345yt" "tests/05" 5
echo "Generating test #6"
scripts/gen-input-via-stdout.sh "wine files/gen_p2_even_elements.exe -n 10000 -m 1000 23efvdghyu5453" "tests/06" 6
echo "Generating test #7"
scripts/gen-input-via-stdout.sh "wine files/gen_p2_even_elements.exe -n 10000 -m 10000 lokm567898edwfr" "tests/07" 7
echo "Generating test #8"
scripts/gen-input-via-stdout.sh "wine files/gen_p2_even_elements.exe -n 100000 -m 100000 fjeg043fhqhdefgr" "tests/08" 8
echo "Generating test #9"
scripts/gen-input-via-stdout.sh "wine files/gen_simplu.exe -n 1000 -m 1000 -max 100000 ewrewrwfsdfwwewewfdf" "tests/09" 9
echo "Generating test #10"
scripts/gen-input-via-stdout.sh "wine files/gen_simplu.exe -n 1000 -m 1000 -max 1000000 43rewfdfgfdgdsgsdfas" "tests/10" 10
echo "Generating test #11"
scripts/gen-input-via-stdout.sh "wine files/gen_weighted.exe -n 1000 -m 1000 -max 100000 ghfjfghdfgfdgfdgdfgdf" "tests/11" 11
echo "Generating test #12"
scripts/gen-input-via-stdout.sh "wine files/gen_weighted.exe -n 1000 -m 1000 -max 1000000 fgwerrtgfdgfdgfdgbfdgfdg" "tests/12" 12
echo "Generating test #13"
scripts/gen-input-via-stdout.sh "wine files/gen_2x_sqrt_prime.exe -n 1000 -m 1000 nfght443terfgfdgdfgfd" "tests/13" 13
echo "Generating test #14"
scripts/gen-input-via-stdout.sh "wine files/gen_2x_sqrt_prime.exe -n 1000 -m 1000 4543t34gfgfdgdfgdfgfgf" "tests/14" 14
echo "Generating test #15"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mici.exe -n 1000 -m 1000 dgfdffdsffdfhkșșțșțșțșțșțșf" "tests/15" 15
echo "Generating test #16"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mici.exe -n 1000 -m 1000 dasfdgrgfbfgbgfbfgșțățățăț" "tests/16" 16
echo "Generating test #17"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mari.exe -n 1000 -m 1000 cvbvvbcxvcxbvcbcvbcvbcvbcv" "tests/17" 17
echo "Generating test #18"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mari.exe -n 1000 -m 1000 *#$#@@@!#!@!!!!!!!!!!„„„„„" "tests/18" 18
echo "Generating test #19"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mari.exe -n 100000 -m 100000 *&^&$%#%$#@%%$&*^&*$%##@%" "tests/19" 19
echo "Generating test #20"
scripts/gen-input-via-stdout.sh "wine files/gen_simplu.exe -n 25 -m 25 -max 100000 s00ada657fg4hyju" "tests/20" 20
echo "Generating test #21"
scripts/gen-input-via-stdout.sh "wine files/gen_simplu.exe -n 100 -m 100 -max 1000000 fegr566543uy" "tests/21" 21
echo "Generating test #22"
scripts/gen-input-via-stdout.sh "wine files/gen_simplu.exe -n 1000 -m 1000 -max 1000000 32edrfg7j689o" "tests/22" 22
echo "Generating test #23"
scripts/gen-input-via-stdout.sh "wine files/gen_simplu.exe -n 10000 -m 100000 -max 1000000 nmd8t79y0jpdsf" "tests/23" 23
echo "Generating test #24"
scripts/gen-input-via-stdout.sh "wine files/gen_simplu.exe -n 100000 -m 100000 -max 1000000 2e93ifohr4utb5y6" "tests/24" 24
echo "Generating test #25"
scripts/gen-input-via-stdout.sh "wine files/gen_simplu.exe -n 100000 -m 100000 -max 1000000 ewretbyu6873" "tests/25" 25
echo "Generating test #26"
scripts/gen-input-via-stdout.sh "wine files/gen_weighted.exe -n 25 -m 25 -max 100000 f3revrgtyuyu" "tests/26" 26
echo "Generating test #27"
scripts/gen-input-via-stdout.sh "wine files/gen_weighted.exe -n 100 -m 100 -max 1000000 scwert50y" "tests/27" 27
echo "Generating test #28"
scripts/gen-input-via-stdout.sh "wine files/gen_weighted.exe -n 1000 -m 1000 -max 1000000 xdcnklwefriog4t8" "tests/28" 28
echo "Generating test #29"
scripts/gen-input-via-stdout.sh "wine files/gen_weighted.exe -n 10000 -m 100000 -max 1000000 23rgo4ihtj" "tests/29" 29
echo "Generating test #30"
scripts/gen-input-via-stdout.sh "wine files/gen_weighted.exe -n 100000 -m 100000 -max 1000000 ur34tjp5yn" "tests/30" 30
echo "Generating test #31"
scripts/gen-input-via-stdout.sh "wine files/gen_weighted.exe -n 100000 -m 100000 -max 1000000 cewrvtbynuyu89" "tests/31" 31
echo "Generating test #32"
scripts/gen-input-via-stdout.sh "wine files/gen_2x_sqrt_prime.exe -n 100000 -m 100000 fgfdg124124rgfvdfv" "tests/32" 32
echo "Generating test #33"
scripts/gen-input-via-stdout.sh "wine files/gen_2x_sqrt_prime.exe -n 100000 -m 100000 vbvasdwewqregbgnnnss" "tests/33" 33
echo "Generating test #34"
scripts/gen-input-via-stdout.sh "wine files/gen_2x_sqrt_prime.exe -n 100000 -m 100000 hgfhfgtrqetgghgfhsfwerfe" "tests/34" 34
echo "Generating test #35"
scripts/gen-input-via-stdout.sh "wine files/gen_2x_sqrt_prime.exe -n 100000 -m 100000 amnmnmbmn32bnmdsadsad" "tests/35" 35
echo "Generating test #36"
scripts/gen-input-via-stdout.sh "wine files/gen_2x_sqrt_prime.exe -n 100000 -m 100000 dfgtyreytjkj,jh,jhmgdsg" "tests/36" 36
echo "Generating test #37"
scripts/gen-input-via-stdout.sh "wine files/gen_2x_sqrt_prime.exe -n 100000 -m 100000 rthrhbsfdfrwhjghkhgjhgj" "tests/37" 37
echo "Generating test #38"
scripts/gen-input-via-stdout.sh "wine files/gen_2x_sqrt_prime.exe -n 100000 -m 100000 mhjrtyrwtwrghthktutyjnvbn" "tests/38" 38
echo "Generating test #39"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mici.exe -n 100000 -m 100000 dw2e21312321321312321fffff" "tests/39" 39
echo "Generating test #40"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mici.exe -n 100000 -m 100000 39rfdd9gfds9f9f9d9fdsfsdg" "tests/40" 40
echo "Generating test #41"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mici.exe -n 100000 -m 100000 3493294329`;`;`;`3232rred" "tests/41" 41
echo "Generating test #42"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mici.exe -n 100000 -m 100000 3534t9fgfdgfdkfkdakskdskk" "tests/42" 42
echo "Generating test #43"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mici.exe -n 100000 -m 100000 hgh9fbgfhlfdgdlgdflglfdgl" "tests/43" 43
echo "Generating test #44"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mici.exe -n 100000 -m 100000 05430tgfgfkdfaskdkasdkas" "tests/44" 44
echo "Generating test #45"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mici.exe -n 100000 -m 100000 kbkfaskdskdkasdkaskdaskd" "tests/45" 45
echo "Generating test #46"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mari.exe -n 100000 -m 100000 fdsfkdfmfmfmvcvcvbvnbnbnvb" "tests/46" 46
echo "Generating test #47"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mari.exe -n 100000 -m 100000 5453tg34g5y6ju8l8loilklfg" "tests/47" 47
echo "Generating test #48"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mari.exe -n 100000 -m 100000 `e`2retggn;;;;;;;h,dsadg" "tests/48" 48
echo "Generating test #49"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mari.exe -n 100000 -m 100000 7`3`3`253lkljjmmnfgf;;" "tests/49" 49
echo "Generating test #50"
scripts/gen-input-via-stdout.sh "wine files/gen_prime_mari.exe -n 100000 -m 100000 $#@$#$%#$^%@$!$!@#!@#@!#@" "tests/50" 50
echo "Generating test #51"
scripts/gen-input-via-stdout.sh "wine files/gen_p2_even_elements.exe -n 100000 -m 100000 ffdmvsdkf@#@$!@43243434" "tests/51" 51
echo "Generating test #52"
scripts/gen-input-via-stdout.sh "wine files/gen_q_mare.exe -n 100000 -m 100000 fd;vf,vldbm432$#@$#@$R#@$#3423" "tests/52" 52
echo "Generating test #53"
scripts/gen-input-via-stdout.sh "wine files/gen_q_mare.exe -n 100000 -m 100000 r30ofkfdkod$#$#4rfhgjHJHJHJHJ" "tests/53" 53
echo "Generating test #54"
scripts/gen-input-via-stdout.sh "wine files/gen_q_mare.exe -n 100000 -m 100000 l,vlcvcvASDASDASDsdbnbmbNDDSHT" "tests/54" 54
echo "Generating test #55"
scripts/gen-input-via-stdout.sh "wine files/gen_q_mic.exe -n 100000 -m 100000 gfdlgfdgplfdkgddf;sd;asd;as;d" "tests/55" 55
echo "Generating test #56"
scripts/gen-input-via-stdout.sh "wine files/gen_q_mic.exe -n 100000 -m 100000 plfppqpqlqwpelpwqdp;;dhjohhhh" "tests/56" 56
echo "Generating test #57"
scripts/gen-input-via-stdout.sh "wine files/gen_q_mic.exe -n 100000 -m 100000 d;vlvdlvdsdsdf13123123@!#!@##" "tests/57" 57
echo "Generating test #58"
scripts/gen-input-via-stdout.sh "wine files/gen_q_mic.exe -n 100000 -m 100000 lKKGHHGFHFGJGHJHdsfLJJLKLLLLLL" "tests/58" 58
echo ""
echo "Generating answer for test #1"
scripts/gen-answer.sh tests/01 tests/01.a "tests" "p2-20p"
echo ""
echo "Generating answer for test #2"
scripts/gen-answer.sh tests/02 tests/02.a "tests" "p2-20p"
echo ""
echo "Generating answer for test #3"
scripts/gen-answer.sh tests/03 tests/03.a "tests" "p2-20p"
echo ""
echo "Generating answer for test #4"
scripts/gen-answer.sh tests/04 tests/04.a "tests" "p2-20p"
echo ""
echo "Generating answer for test #5"
scripts/gen-answer.sh tests/05 tests/05.a "tests" "p2-even-elements-20p"
echo ""
echo "Generating answer for test #6"
scripts/gen-answer.sh tests/06 tests/06.a "tests" "p2-even-elements-20p"
echo ""
echo "Generating answer for test #7"
scripts/gen-answer.sh tests/07 tests/07.a "tests" "p2-even-elements-20p"
echo ""
echo "Generating answer for test #8"
scripts/gen-answer.sh tests/08 tests/08.a "tests" "p2-even-elements-20p"
echo ""
echo "Generating answer for test #9"
scripts/gen-answer.sh tests/09 tests/09.a "tests" "n-m-mici"
echo ""
echo "Generating answer for test #10"
scripts/gen-answer.sh tests/10 tests/10.a "tests" "n-m-mici"
echo ""
echo "Generating answer for test #11"
scripts/gen-answer.sh tests/11 tests/11.a "tests" "n-m-mici"
echo ""
echo "Generating answer for test #12"
scripts/gen-answer.sh tests/12 tests/12.a "tests" "n-m-mici"
echo ""
echo "Generating answer for test #13"
scripts/gen-answer.sh tests/13 tests/13.a "tests" "n-m-mici"
echo ""
echo "Generating answer for test #14"
scripts/gen-answer.sh tests/14 tests/14.a "tests" "n-m-mici"
echo ""
echo "Generating answer for test #15"
scripts/gen-answer.sh tests/15 tests/15.a "tests" "n-m-mici"
echo ""
echo "Generating answer for test #16"
scripts/gen-answer.sh tests/16 tests/16.a "tests" "n-m-mici"
echo ""
echo "Generating answer for test #17"
scripts/gen-answer.sh tests/17 tests/17.a "tests" "n-m-mici"
echo ""
echo "Generating answer for test #18"
scripts/gen-answer.sh tests/18 tests/18.a "tests" "n-m-mici"
echo ""
echo "Generating answer for test #19"
scripts/gen-answer.sh tests/19 tests/19.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #20"
scripts/gen-answer.sh tests/20 tests/20.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #21"
scripts/gen-answer.sh tests/21 tests/21.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #22"
scripts/gen-answer.sh tests/22 tests/22.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #23"
scripts/gen-answer.sh tests/23 tests/23.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #24"
scripts/gen-answer.sh tests/24 tests/24.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #25"
scripts/gen-answer.sh tests/25 tests/25.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #26"
scripts/gen-answer.sh tests/26 tests/26.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #27"
scripts/gen-answer.sh tests/27 tests/27.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #28"
scripts/gen-answer.sh tests/28 tests/28.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #29"
scripts/gen-answer.sh tests/29 tests/29.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #30"
scripts/gen-answer.sh tests/30 tests/30.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #31"
scripts/gen-answer.sh tests/31 tests/31.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #32"
scripts/gen-answer.sh tests/32 tests/32.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #33"
scripts/gen-answer.sh tests/33 tests/33.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #34"
scripts/gen-answer.sh tests/34 tests/34.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #35"
scripts/gen-answer.sh tests/35 tests/35.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #36"
scripts/gen-answer.sh tests/36 tests/36.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #37"
scripts/gen-answer.sh tests/37 tests/37.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #38"
scripts/gen-answer.sh tests/38 tests/38.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #39"
scripts/gen-answer.sh tests/39 tests/39.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #40"
scripts/gen-answer.sh tests/40 tests/40.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #41"
scripts/gen-answer.sh tests/41 tests/41.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #42"
scripts/gen-answer.sh tests/42 tests/42.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #43"
scripts/gen-answer.sh tests/43 tests/43.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #44"
scripts/gen-answer.sh tests/44 tests/44.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #45"
scripts/gen-answer.sh tests/45 tests/45.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #46"
scripts/gen-answer.sh tests/46 tests/46.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #47"
scripts/gen-answer.sh tests/47 tests/47.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #48"
scripts/gen-answer.sh tests/48 tests/48.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #49"
scripts/gen-answer.sh tests/49 tests/49.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #50"
scripts/gen-answer.sh tests/50 tests/50.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #51"
scripts/gen-answer.sh tests/51 tests/51.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #52"
scripts/gen-answer.sh tests/52 tests/52.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #53"
scripts/gen-answer.sh tests/53 tests/53.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #54"
scripts/gen-answer.sh tests/54 tests/54.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #55"
scripts/gen-answer.sh tests/55 tests/55.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #56"
scripts/gen-answer.sh tests/56 tests/56.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #57"
scripts/gen-answer.sh tests/57 tests/57.a "tests" "fara-restrictii-40p"
echo ""
echo "Generating answer for test #58"
scripts/gen-answer.sh tests/58 tests/58.a "tests" "fara-restrictii-40p"
echo ""

