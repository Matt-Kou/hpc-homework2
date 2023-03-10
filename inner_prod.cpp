#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

using namespace std;

int main(int argc, char **argv)
{
    Timer t;
    for (long n = 256; n <= 4096; n *= 4)
    {
        cout << "n:" << n << endl;
        double *a = new double[n], *b = new double[n];
        for (long i = 0; i < n; i++)
        {
            a[i] = (double)rand();
            b[i] = (double)rand();
        }

        cout << "standard dot product with no optimization:" << endl;
        double s0 = 0.;
        t.tic();
        for (long i = 0; i < n - 1; i++)
        {
            s0 += a[i] * b[i];
        }
        double time = t.toc();
        cout << "\ttime used: " << time;
        cout << "\tflops: " << 2 * sizeof(double) / time / (1 << 30);
        cout << "\tsum: " << s0 << endl;

        cout << "dot product with 2 loop unrolling:" << endl;
        double s1 = 0., sum1 = 0., sum2 = 0.;
        t.tic();
        for (long i = 0; i < n; i += 2)
        {
            sum1 += a[i] * b[i];
            sum2 += a[i + 1] * b[i + 1];
        }
        s1 = sum1 + sum2;
        time = t.toc();
        cout << "\ttime used: " << time;
        cout << "\tflops: " << 2 * sizeof(double) / time / (1 << 30);
        cout << "\tsum: " << s1 << endl;

        cout << "dot product with 2 loop unrolling and indexing optimization:" << endl;
        double s2 = 0.;
        double *at = a, *bt = b;
        sum1 = 0., sum2 = 0.;
        t.tic();
        for (long i = 0; i < n / 2; i++)
        {
            sum1 += *at * *bt;
            sum2 += *(at + 1) * *(bt + 1);
            at += 2;
            bt += 2;
        }
        s2 = sum1 + sum2;
        time = t.toc();
        cout << "\ttime used: " << time;
        cout << "\tflops: " << 2 * sizeof(double) / time / (1 << 30);
        cout << "\tsum: " << s2 << endl;

        cout << "dot product with 2 loop unrolling, indexing optimization, and disentangling:" << endl;
        double s3 = 0., temp1 = 0, temp2 = 0;
        at = a;
        bt = b;
        sum1 = 0., sum2 = 0.,
        t.tic();
        for (long i = 0; i < n / 2; i++)
        {
            temp1 = *at * *bt;
            temp2 = *(at + 1) * *(bt + 1);
            sum1 += temp1;
            sum2 += temp2;
            at += 2;
            bt += 2;
        }
        s3 = sum1 + sum2;
        time = t.toc();
        cout << "\ttime used: " << time;
        cout << "\tflops: " << 2 * sizeof(double) / time / (1 << 30);
        cout << "\tsum: " << s3 << endl;

        cout << "dot product with 2 loop unrolling, indexing optimization, and disentangling (2):" << endl;
        double s4 = 0.;
        sum1 = 0.;
        sum2 = 0.;
        temp1 = 0.;
        temp2 = 0.;
        at = a;
        bt = b;
        t.tic();
        for (long i = 0; i < n / 2; i++)
        {
            sum1 += temp1;
            temp1 = *at * *bt;
            sum2 += temp2;
            temp2 = *(at + 1) * *(bt + 1);
            at += 2;
            bt += 2;
        }
        s4 = sum1 + sum2 + temp1 + temp2;
        time = t.toc();
        cout << "\ttime used: " << time;
        cout << "\tflops: " << 2 * sizeof(double) / time / (1 << 30);
        cout << "\tsum: " << s4 << endl;

        cout << "dot product with 4 loop unrolling:" << endl;
        double s5 = sum1 = sum2 = 0., sum3 = 0., sum4 = 0.;
        t.tic();
        for (long i = 0; i < n; i += 4)
        {
            sum1 += a[i] * b[i];
            sum2 += a[i + 1] * b[i + 1];
            sum3 += a[i + 2] * b[i + 2];
            sum4 += a[i + 3] * b[i + 3];
        }
        s5 = sum1 + sum2 + sum3 + sum4;
        time = t.toc();
        cout << "\ttime used: " << time;
        cout << "\tflops: " << 2 * sizeof(double) / time / (1 << 30);
        cout << "\tsum: " << s5 << endl;

        cout << "dot product with 4 loop unrolling and indexing optimization:" << endl;
        double s6 = 0.;
        at = a, bt = b;
        sum1 = sum2 = sum3 = sum4 = 0.;
        t.tic();
        for (long i = 0; i < n / 4; i++)
        {
            sum1 += *at * *bt;
            sum2 += *(at + 1) * *(bt + 1);
            sum3 += *(at + 2) * *(bt + 2);
            sum4 += *(at + 3) * *(bt + 3);
            at += 4;
            bt += 4;
        }
        s6 = sum1 + sum2 + sum3 + sum4;
        time = t.toc();
        cout << "\ttime used: " << time;
        cout << "\tflops: " << 2 * sizeof(double) / time / (1 << 30);
        cout << "\tsum: " << s6 << endl;

        cout << "dot product with 4 loop unrolling, indexing optimization, and disentangling:" << endl;
        double s7 = temp1 = temp2 = 0, temp3 = 0., temp4 = 0.;
        at = a;
        bt = b;
        sum1 = sum2 = sum3 = sum4 = 0.,
        t.tic();
        for (long i = 0; i < n / 4; i++)
        {
            temp1 = *at * *bt;
            temp2 = *(at + 1) * *(bt + 1);
            temp3 = *(at + 2) * *(bt + 2);
            temp4 = *(at + 3) * *(bt + 3);
            sum1 += temp1;
            sum2 += temp2;
            sum3 += temp3;
            sum4 += temp4;
            at += 4;
            bt += 4;
        }
        s7= sum1 + sum2 + sum3 + sum4;
        time = t.toc();
        cout << "\ttime used: " << time;
        cout << "\tflops: " << 2 * sizeof(double) / time / (1 << 30);
        cout << "\tsum: " << s7 << endl;

        cout << "dot product with 4 loop unrolling, indexing optimization, and disentangling (2):" << endl;
        double s8 = 0.;
        sum1 = 0.;
        sum2 = 0.;
        sum3 = 0.;
        sum4 = 0.;
        temp1 = 0.;
        temp2 = 0.;
        temp3 = 0.;
        temp4 = 0.;
        at = a;
        bt = b;
        t.tic();
        for (long i = 0; i < n / 2 - 1; i++)
        {
            sum1 += temp1;
            temp1 = *at * *bt;
            sum2 += temp2;
            temp2 = *(at + 1) * *(bt + 1);
            sum3 += temp3;
            temp3 = *(at + 2) * *(bt + 2);
            sum4 += temp4;
            temp4 = *(at + 3) * *(bt + 3);
            at += 4;
            bt += 4;
        }
        s8 = sum1 + sum2 + sum3 + sum4 + temp1 + temp2 + temp3 + temp4;
        time = t.toc();
        cout << "\ttime used: " << time;
        cout << "\tflops: " << 2 * sizeof(double) / time / (1 << 30);
        cout << "\tsum: " << s8 << endl;
        delete[] a;
        delete[] b;
    }
    return 0;
}