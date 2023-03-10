# Homework 2
## MMult1
Result for block size = 2:
```
 Dimension       Time    Gflop/s       GB/s        Error
         2   8.796817   0.105870   0.317611 4.267452e-02
        52   6.169465   0.150957   0.017418 3.328896e-07
       102   6.567491   0.141910   0.008348 1.959052e-08
       152   6.662920   0.139898   0.005522 2.746674e-09
       202   7.219046   0.129728   0.003853 7.657945e-10
       252   7.845609   0.119678   0.002849 3.383320e-10
       302   8.024927   0.118272   0.002350 1.305125e-10
       352   7.970102   0.117217   0.001998 7.094059e-11
       402   8.321706   0.116328   0.001736 5.070433e-11
       452   8.271711   0.114370   0.001518 2.000888e-11
       502   8.386388   0.112390   0.001343 1.523404e-11
       552   8.355800   0.112481   0.001223 1.023182e-11
       602   9.126755   0.111312   0.001109 7.844392e-12
       652   9.347291   0.110463   0.001017 5.229595e-12
       702   8.531611   0.113293   0.000968 3.751666e-12
       752  10.093289   0.117718   0.000939 4.433787e-12
       802   8.342376   0.115176   0.000862 2.330580e-12
       852  10.346260   0.111344   0.000784 2.728484e-12
       902  12.038382   0.113549   0.000755 2.728484e-12
       952  13.538826   0.118703   0.000748 2.955858e-12
      1002   8.460240   0.110744   0.000663 1.193712e-12
      1052  10.502651   0.103240   0.000589 1.421085e-12
      1102  12.081850   0.103160   0.000562 1.534772e-12
      1152  12.701105   0.112103   0.000584 1.762146e-12
      1202  15.812212   0.102287   0.000511 1.818989e-12
      1252  18.007683   0.101497   0.000486 1.932676e-12
      1302  20.427204   0.100629   0.000464 2.103206e-12
      1352  20.391111   0.112873   0.000501 2.103206e-12
      1402  25.190037   0.101886   0.000436 2.387424e-12
      1452  28.138258   0.101322   0.000419 2.387424e-12
      1502  31.371115   0.100596   0.000402 2.557954e-12
      1552  30.810631   0.112999   0.000437 2.955858e-12
      1602  37.279466   0.102711   0.000385 2.785328e-12
      1652  41.377642   0.101476   0.000369 3.012701e-12
```
block size = 16:
```
Dimension       Time    Gflop/s       GB/s        Error
        16   1.794869   0.518881   0.003040 4.541851e-05
        64   1.893155   0.491981   0.000721 9.545329e-08
       112   1.813016   0.513846   0.000430 8.956704e-09
       160   1.890299   0.494420   0.000290 1.671651e-09
       208   1.844094   0.509009   0.000229 6.266418e-10
       256   4.417439   0.212227   0.000078 2.660272e-10
       304   1.855036   0.507775   0.000157 1.086846e-10
       352   2.146264   0.435284   0.000116 6.207301e-11
       400   2.149463   0.443680   0.000104 4.047251e-11
       448   2.622371   0.383196   0.000080 2.296474e-11
       496   2.420553   0.422545   0.000080 1.386979e-11
       544   2.613678   0.401553   0.000069 1.250555e-11
       592   2.114565   0.456893   0.000072 6.707523e-12
       640   2.914120   0.335114   0.000049 4.547474e-12
       688   2.588919   0.468605   0.000064 5.229595e-12
       736   2.495199   0.446426   0.000057 4.092726e-12
       784   2.801434   0.480606   0.000057 3.979039e-12
       832   2.652083   0.404495   0.000046 2.216893e-12
       880   2.674788   0.474557   0.000051 2.330580e-12
       928   3.325841   0.447582   0.000045 2.671641e-12
       976   3.651993   0.474187   0.000046 2.501110e-12
      1024   8.124706   0.123081   0.000011 1.080025e-12
      1072   2.454085   0.467514   0.000041 1.193712e-12
      1120   2.899730   0.451229   0.000038 1.364242e-12
      1168   3.131589   0.473875   0.000038 1.421085e-12
      1216   4.194008   0.399275   0.000031 1.705303e-12
      1264   3.974178   0.473254   0.000035 1.648459e-12
      1312   4.597549   0.457483   0.000033 1.762146e-12
      1360   4.922810   0.475887   0.000033 1.818989e-12
      1408   7.504345   0.346414   0.000023 2.046363e-12
      1456   5.933120   0.484508   0.000031 2.273737e-12
      1504   6.887434   0.460030   0.000029 2.103206e-12
      1552   7.327726   0.475123   0.000029 2.273737e-12
      1600   9.463879   0.403080   0.000024 2.330580e-12
```
block size = 64:
```
 Dimension       Time    Gflop/s       GB/s        Error
        64   2.310064   0.403191   0.000037 1.012959e-07
       128   2.538439   0.367013   0.000017 5.076799e-09
       192   2.337596   0.400426   0.000012 8.794814e-10
       256   3.073508   0.305026   0.000007 2.273737e-10
       320   2.538813   0.372633   0.000007 8.094503e-11
       384   3.079556   0.308232   0.000005 4.843059e-11
       448   3.510304   0.286267   0.000004 2.114575e-11
       512   5.323316   0.187853   0.000002 1.239187e-11
       576   4.370654   0.244328   0.000002 8.640200e-12
       640   4.144044   0.235654   0.000002 4.092726e-12
       704   3.087967   0.315694   0.000003 3.183231e-12
       768   4.969028   0.254703   0.000002 3.979039e-12
       832   3.641433   0.294597   0.000002 2.160050e-12
       896   4.229553   0.316781   0.000002 2.273737e-12
       960   5.096135   0.323372   0.000002 2.387424e-12
      1024   4.661513   0.214523   0.000001 1.136868e-12
      1088   3.584423   0.334632   0.000002 1.250555e-12
      1152   4.332454   0.328642   0.000002 1.364242e-12
      1216   4.829710   0.346721   0.000002 1.534772e-12
      1280   6.693385   0.291799   0.000001 1.705303e-12
      1344   5.996735   0.377036   0.000002 1.818989e-12
      1408   7.358291   0.353290   0.000001 1.932676e-12
      1472   7.573751   0.392204   0.000002 1.989520e-12
      1536  15.127121   0.223109   0.000001 2.103206e-12
      1600  10.008460   0.381147   0.000001 2.273737e-12
      1664  12.002796   0.357501   0.000001 2.444267e-12
      1728  12.798746   0.375460   0.000001 2.444267e-12
      1792  17.889657   0.299580   0.000001 2.501110e-12
      1856  15.681202   0.379712   0.000001 2.614797e-12
      1920  18.683854   0.352807   0.000001 2.842171e-12
      1984  18.465456   0.393881   0.000001 2.955858e-12
```
As a result, there is approximatly a 4 times speedup by changing the block size = 16 or 64.

When using opemMP with block size = 16:
```
        16  48.637114   0.019148   0.000112 4.541851e-05
        64   1.569985   0.593252   0.000869 9.545329e-08
       112   0.394975   2.358653   0.001974 8.956704e-09
       160   0.282826   3.304513   0.001936 1.671651e-09
       208   0.341091   2.751930   0.001240 6.266418e-10
       256   0.339316   2.762910   0.001012 2.660272e-10
       304   0.132551   7.106245   0.002191 1.086846e-10
       352   0.152707   6.117844   0.001629 6.207301e-11
       400   0.107606   8.862640   0.002077 4.047251e-11
       448   0.120104   8.366803   0.001751 2.296474e-11
       496   0.100838  10.142950   0.001917 1.386979e-11
       544   0.107585   9.755313   0.001681 1.250555e-11
       592   0.076558  12.619561   0.001998 6.707523e-12
       640   0.094836  10.297351   0.001508 4.547474e-12
       688   0.082028  14.789769   0.002015 5.229595e-12
       736   0.068636  16.229529   0.002067 4.092726e-12
       784   0.079838  16.863976   0.002017 3.979039e-12
       832   0.068375  15.689272   0.001768 2.216893e-12
       880   0.071092  17.854915   0.001902 2.330580e-12
       928   0.076045  19.575062   0.001978 2.671641e-12
       976   0.092329  18.756127   0.001802 2.501110e-12
      1024   0.227419   4.397164   0.000403 1.080025e-12
      1072   0.087870  13.056981   0.001142 1.193712e-12
      1120   0.097694  13.393327   0.001121 1.364242e-12
      1168   0.105453  14.072420   0.001130 1.421085e-12
      1216   0.166891  10.033857   0.000774 1.705303e-12
      1264   0.128428  14.644722   0.001086 1.648459e-12
      1312   0.146765  14.331118   0.001024 1.762146e-12
      1360   0.178992  13.088292   0.000902 1.818989e-12
      1408   0.268586   9.678866   0.000644 2.046363e-12
      1456   0.169896  16.920030   0.001089 2.273737e-12
      1504   0.236848  13.377446   0.000834 2.103206e-12
      1552   0.259600  13.411294   0.000810 2.273737e-12
      1600   0.315690  12.083663   0.000708 2.330580e-12
      1648   0.283075  14.725532   0.000838 2.330580e-12
      1696   0.303706  14.959738   0.000827 2.614797e-12
      1744   0.369045  13.386290   0.000720 2.557954e-12
      1792   0.857809   6.247747   0.000327 2.557954e-12
      1840   0.462634  12.540537   0.000639 3.012701e-12
      1888   0.425372  14.734550   0.000732 2.785328e-12
      1936   0.422568  15.992637   0.000774 2.842171e-12
      1984   0.620912  11.713732   0.000554 2.785328e-12
```
As a result, there is a approximatly 22.8 times speed up.

The tests were run on `crunchy1.cims.nyu.edu`.

## Fast Sin

I implemented using AVX. Here is the command to run:

```g++ -mavx fast-sin.cpp -O3; ./a.out``` 

Here is the result:

```
Reference time: 0.0050
Taylor time:    0.4570      Error: 6.928125e-12
Intrin time:    0.0021      Error: 6.928125e-12
Vector time:    0.0019      Error: 2.454130e-03
```

## Inner Product Optimization
Here is the testing result:
```
n:256
standard dot product with no optimization:
        time used: 1.64e-07     flops: 0.0908607        sum: 3.03155e+20
dot product with 2 loop unrolling:
        time used: 1.36e-07     flops: 0.109567 sum: 3.04151e+20
dot product with 2 loop unrolling and indexing optimization:
        time used: 1.44e-07     flops: 0.10348  sum: 3.04151e+20
dot product with 2 loop unrolling, indexing optimization, and disentangling:
        time used: 1.23e-07     flops: 0.121148 sum: 3.04151e+20
dot product with 2 loop unrolling, indexing optimization, and disentangling (2):
        time used: 1.38e-07     flops: 0.107979 sum: 3.04151e+20
dot product with 4 loop unrolling:
        time used: 1.2e-07      flops: 0.124176 sum: 3.04151e+20
dot product with 4 loop unrolling and indexing optimization:
        time used: 1.01e-07     flops: 0.147536 sum: 3.04151e+20
dot product with 4 loop unrolling, indexing optimization, and disentangling:
        time used: 1.08e-07     flops: 0.137974 sum: 3.04151e+20
dot product with 4 loop unrolling, indexing optimization, and disentangling (2):
        time used: 2.03e-07     flops: 0.0734047        sum: 3.04151e+20
n:1024
standard dot product with no optimization:
        time used: 5.17e-07     flops: 0.0288224        sum: 1.1973e+21
dot product with 2 loop unrolling:
        time used: 2.6e-07      flops: 0.0573122        sum: 1.19782e+21
dot product with 2 loop unrolling and indexing optimization:
        time used: 2.92e-07     flops: 0.0510314        sum: 1.19782e+21
dot product with 2 loop unrolling, indexing optimization, and disentangling:
        time used: 2.57e-07     flops: 0.0579812        sum: 1.19782e+21
dot product with 2 loop unrolling, indexing optimization, and disentangling (2):
        time used: 2.72e-07     flops: 0.0547837        sum: 1.19782e+21
dot product with 4 loop unrolling:
        time used: 1.65e-07     flops: 0.0903101        sum: 1.19782e+21
dot product with 4 loop unrolling and indexing optimization:
        time used: 1.53e-07     flops: 0.0973932        sum: 1.19782e+21
dot product with 4 loop unrolling, indexing optimization, and disentangling:
        time used: 2.09e-07     flops: 0.0712974        sum: 1.19782e+21
dot product with 4 loop unrolling, indexing optimization, and disentangling (2):
        time used: 1.651e-06    flops: 0.00902554       sum: 1.19782e+21
n:4096
standard dot product with no optimization:
        time used: 2.116e-06    flops: 0.00704214       sum: 4.6228e+21
dot product with 2 loop unrolling:
        time used: 9.82e-07     flops: 0.0151743        sum: 4.62339e+21
dot product with 2 loop unrolling and indexing optimization:
        time used: 9.8e-07      flops: 0.0152053        sum: 4.62339e+21
dot product with 2 loop unrolling, indexing optimization, and disentangling:
        time used: 9.87e-07     flops: 0.0150974        sum: 4.62339e+21
dot product with 2 loop unrolling, indexing optimization, and disentangling (2):
        time used: 1.353e-06    flops: 0.0110134        sum: 4.62339e+21
dot product with 4 loop unrolling:
        time used: 7.57e-07     flops: 0.0196845        sum: 4.62339e+21
dot product with 4 loop unrolling and indexing optimization:
        time used: 7.04e-07     flops: 0.0211664        sum: 4.62339e+21
dot product with 4 loop unrolling, indexing optimization, and disentangling:
        time used: 7.66e-07     flops: 0.0194532        sum: 4.62339e+21
dot product with 4 loop unrolling, indexing optimization, and disentangling (2):
        time used: 6.256e-06    flops: 0.0023819        sum: 4.62339e+21
```
There is a clear speed up using the unrolling but the effect of indexing optimization and disentangling is very minor and sometimes even decreasing the performance by a lot (as in the last case: dot product with 4 loop unrolling, indexing optimization, and disentangling (2)).
## Lecture 4
### Computational Latency
Command:
```
g++ -std=c++11 -O3 -march=native compute.cpp -ftree-vectorize -fopt-info-vec-optimized && ./a.out -n 1000000000
```
#### multi-add
```
0.866954 seconds
2.861093 cycles/eval
2.306808 Gflop/s
```
#### division
```
3.180167 seconds
10.494766 cycles/eval
0.628885 Gflop/s
```
#### sqrt
```
2.959341 seconds
9.765968 cycles/eval
0.675816 Gflop/s
```
#### sin
```
7.224877 seconds
23.842221 cycles/eval
0.276820 Gflop/s
```
I am an Alderlake CPU so my latency is expected to be 4 with Throughput 0.5. Since my actual thoughput is 2.3 Gflops, I get higher results.

### Compute Vec
Command:
```
g++ -fopenmp -std=c++11 -O3 -march=native compute-vec.cpp && ./a.out -n 1000000000
```
Result:
```
time = 0.890786
flop-rate = 8.980125 Gflop/s

time = 0.913937
flop-rate = 8.753032 Gflop/s

time = 0.906623
flop-rate = 8.823660 Gflop/s
```
Command:
```
g++ -std=c++11 -O3 -march=native compute-vec.cpp -ftree-vectorize -fopt-info-vec-optimized && ./a.out -n 1000000000
```
Result:
```
compute-vec.cpp:16:21: optimized: loop vectorized using 32 byte vectors
compute-vec.cpp:16:21: optimized:  loop versioned for vectorization because of possible aliasing
compute-vec.cpp:52:21: optimized: loop vectorized using 16 byte vectors
compute-vec.cpp:46:5: optimized: basic block part vectorized using 32 byte vectors
time = 0.928199
flop-rate = 8.617982 Gflop/s

time = 0.897538
flop-rate = 8.912999 Gflop/s

time = 0.877357
flop-rate = 9.118084 Gflop/s
```
The vectorization doesn't seem to be accelerating anything, neither AVX does. 
### compute vec pipe
#### M=1
Command:
```
g++ -fopenmp -std=c++11 -O3 -march=native compute-vec-pipe.cpp && ./a.out -n 1000000000
```
Result:
```
time = 0.852463
flop-rate = 9.384056 Gflop/s

time = 1.011725
flop-rate = 7.906868 Gflop/s

time = 0.861244
flop-rate = 9.288562 Gflop/s
```
Command:
```
 g++ -mavx -std=c++11 -O3 -march=native compute-vec-pipe.cpp -ftree-vectorize -fopt-info-vec-optimized && ./a.out -n
 1000000000
 ```
Result:
```
compute-vec-pipe.cpp:17:21: optimized: loop vectorized using 32 byte vectors
compute-vec-pipe.cpp:17:21: optimized:  loop versioned for vectorization because of possible aliasing
compute-vec-pipe.cpp:67:21: optimized: loop vectorized using 16 byte vectors
compute-vec-pipe.cpp:61:5: optimized: basic block part vectorized using 32 byte vectors
time = 0.885702
flop-rate = 9.031911 Gflop/s

time = 0.886310
flop-rate = 9.025914 Gflop/s

time = 0.867027
flop-rate = 9.226648 Gflop/s
```
#### M=2
```
compute-vec-pipe.cpp:17:21: optimized: loop vectorized using 32 byte vectors
compute-vec-pipe.cpp:17:21: optimized:  loop versioned for vectorization because of possible aliasing
compute-vec-pipe.cpp:89:21: optimized: loop vectorized using 32 byte vectors
compute-vec-pipe.cpp:67:21: optimized: loop vectorized using 32 byte vectors
compute-vec-pipe.cpp:61:5: optimized: basic block part vectorized using 32 byte vectors
time = 0.854430
flop-rate = 18.724961 Gflop/s

time = 0.907059
flop-rate = 17.638803 Gflop/s

time = 0.969341
flop-rate = 16.505311 Gflop/s
```
#### M=4
```
time = 1.108348
flop-rate = 28.870410 Gflop/s

time = 1.129929
flop-rate = 28.319644 Gflop/s

time = 1.098858
flop-rate = 29.120364 Gflop/s
```
#### M=16
```
time = 1.753042
flop-rate = 73.014258 Gflop/s

time = 2.953269
flop-rate = 43.341470 Gflop/s

time = 2.818227
flop-rate = 45.418126 Gflop/s
```
#### M=64
```
time = 15.618474
flop-rate = 32.781536 Gflop/s

time = 15.260075
flop-rate = 33.551502 Gflop/s

time = 16.305043
flop-rate = 31.401235 Gflop/s
```
Indeed, the observation follows the theoretical performance.