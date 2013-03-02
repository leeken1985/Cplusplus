The sample output were generated in a Linux system using the following
commands:

./csort 1 < data1 > data1_1.out 2> data1_1.err
./csort -1 < data1 > data1_-1.out 2> data1_-1.err
./csort 11 < data2 > data2_11.out 2> data2_11.err
./csort -11 < data2 > data2_-11.out 2> data2_-11.err

./csort 1t < data1 > data1_1t.out 2> data1_1t.err
./csort -1t < data1 > data1_-1t.out 2> data1_-1t.err
./csort 11t < data2 > data2_11t.out 2> data2_11t.err
./csort -11t < data2 > data2_-11t.out 2> data2_-11t.err
./csort -1t < data3 > data3_-1t.out 2> data3_-1t.err

./csort 1,-2,3 < data4 > data4_1,-2,3.out 2> data4_1,-2,3.err
./csort 1,2,3 < data4 > data4_1,2,3.out 2> data4_1,2,3.err
./csort 3,2,1 < data4 > data4_3,2,1.out 2> data4_3,2,1.err

./csort 1,-2,3 < data5 > data5_1,-2,3.out 2> data5_1,-2,3.err
./csort 1,2,3 < data5 > data5_1,2,3.out 2> data5_1,2,3.err
./csort 3,2,1 < data5 > data5_3,2,1.out 2> data5_3,2,1.err

./csort 1t,-2t,3t < data4 > data4_1t,-2t,3t.out 2> data4_1t,-2t,3t.err
./csort 1t,2t,3t < data4 > data4_1t,2t,3t.out 2> data4_1t,2t,3t.err
./csort 3t,2t,1t < data4 > data4_3t,2t,1t.out 2> data4_3t,2t,1t.err
./csort 1t,-2t,3t < data6 > data6_1t,-2t,3t.out 2> data6_1t,-2t,3t.err
./csort 1t,2t,3t < data6 > data6_1t,2t,3t.out 2> data6_1t,2t,3t.err

./csort 3,-1t,5 < data7 > data7_3,-1t,5.out 2> data7_3,-1t,5.err
./csort 3,-1t,5t < data7 > data7_3,-1t,5t.out 2> data7_3,-1t,5t.err
./csort 1t,-3,-5 < data7 > data7_1t,-3,-5.out 2> data7_1t,-3,-5.err
./csort 1t,-3,-5t < data7 > data7_1t,-3,-5t.out 2> data7_1t,-3,-5t.err

./csort 1t,2t,3t < data8 > data8_1t,2t,3t.out 2> data8_1t,2t,3t.err

Note: These do not test for invalid command-line arguments.
