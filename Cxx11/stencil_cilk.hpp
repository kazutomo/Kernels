void star1(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    _Cilk_for (auto it=1; it<n-1; it+=t) {
      _Cilk_for (auto jt=1; jt<n-1; jt+=t) {
        for (auto i=it; i<std::min(n-1,it+t); ++i) {
          PRAGMA_SIMD
          for (auto j=jt; j<std::min(n-1,jt+t); ++j) {
            out[i*n+j] += +in[(i+-1)*n+(j+0)] * -0.5
                          +in[(i+0)*n+(j+-1)] * -0.5
                          +in[(i+0)*n+(j+1)] * 0.5
                          +in[(i+1)*n+(j+0)] * 0.5;
           }
         }
       }
     }
}

void star2(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    _Cilk_for (auto it=2; it<n-2; it+=t) {
      _Cilk_for (auto jt=2; jt<n-2; jt+=t) {
        for (auto i=it; i<std::min(n-2,it+t); ++i) {
          PRAGMA_SIMD
          for (auto j=jt; j<std::min(n-2,jt+t); ++j) {
            out[i*n+j] += +in[(i+-2)*n+(j+0)] * -0.125
                          +in[(i+-1)*n+(j+0)] * -0.25
                          +in[(i+0)*n+(j+-2)] * -0.125
                          +in[(i+0)*n+(j+-1)] * -0.25
                          +in[(i+0)*n+(j+1)] * 0.25
                          +in[(i+0)*n+(j+2)] * 0.125
                          +in[(i+1)*n+(j+0)] * 0.25
                          +in[(i+2)*n+(j+0)] * 0.125;
           }
         }
       }
     }
}

void star3(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    _Cilk_for (auto it=3; it<n-3; it+=t) {
      _Cilk_for (auto jt=3; jt<n-3; jt+=t) {
        for (auto i=it; i<std::min(n-3,it+t); ++i) {
          PRAGMA_SIMD
          for (auto j=jt; j<std::min(n-3,jt+t); ++j) {
            out[i*n+j] += +in[(i+-3)*n+(j+0)] * -0.05555555555555555
                          +in[(i+-2)*n+(j+0)] * -0.08333333333333333
                          +in[(i+-1)*n+(j+0)] * -0.16666666666666666
                          +in[(i+0)*n+(j+-3)] * -0.05555555555555555
                          +in[(i+0)*n+(j+-2)] * -0.08333333333333333
                          +in[(i+0)*n+(j+-1)] * -0.16666666666666666
                          +in[(i+0)*n+(j+1)] * 0.16666666666666666
                          +in[(i+0)*n+(j+2)] * 0.08333333333333333
                          +in[(i+0)*n+(j+3)] * 0.05555555555555555
                          +in[(i+1)*n+(j+0)] * 0.16666666666666666
                          +in[(i+2)*n+(j+0)] * 0.08333333333333333
                          +in[(i+3)*n+(j+0)] * 0.05555555555555555;
           }
         }
       }
     }
}

void star4(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    _Cilk_for (auto it=4; it<n-4; it+=t) {
      _Cilk_for (auto jt=4; jt<n-4; jt+=t) {
        for (auto i=it; i<std::min(n-4,it+t); ++i) {
          PRAGMA_SIMD
          for (auto j=jt; j<std::min(n-4,jt+t); ++j) {
            out[i*n+j] += +in[(i+-4)*n+(j+0)] * -0.03125
                          +in[(i+-3)*n+(j+0)] * -0.041666666666666664
                          +in[(i+-2)*n+(j+0)] * -0.0625
                          +in[(i+-1)*n+(j+0)] * -0.125
                          +in[(i+0)*n+(j+-4)] * -0.03125
                          +in[(i+0)*n+(j+-3)] * -0.041666666666666664
                          +in[(i+0)*n+(j+-2)] * -0.0625
                          +in[(i+0)*n+(j+-1)] * -0.125
                          +in[(i+0)*n+(j+1)] * 0.125
                          +in[(i+0)*n+(j+2)] * 0.0625
                          +in[(i+0)*n+(j+3)] * 0.041666666666666664
                          +in[(i+0)*n+(j+4)] * 0.03125
                          +in[(i+1)*n+(j+0)] * 0.125
                          +in[(i+2)*n+(j+0)] * 0.0625
                          +in[(i+3)*n+(j+0)] * 0.041666666666666664
                          +in[(i+4)*n+(j+0)] * 0.03125;
           }
         }
       }
     }
}

void star5(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    _Cilk_for (auto it=5; it<n-5; it+=t) {
      _Cilk_for (auto jt=5; jt<n-5; jt+=t) {
        for (auto i=it; i<std::min(n-5,it+t); ++i) {
          PRAGMA_SIMD
          for (auto j=jt; j<std::min(n-5,jt+t); ++j) {
            out[i*n+j] += +in[(i+-5)*n+(j+0)] * -0.02
                          +in[(i+-4)*n+(j+0)] * -0.025
                          +in[(i+-3)*n+(j+0)] * -0.03333333333333333
                          +in[(i+-2)*n+(j+0)] * -0.05
                          +in[(i+-1)*n+(j+0)] * -0.1
                          +in[(i+0)*n+(j+-5)] * -0.02
                          +in[(i+0)*n+(j+-4)] * -0.025
                          +in[(i+0)*n+(j+-3)] * -0.03333333333333333
                          +in[(i+0)*n+(j+-2)] * -0.05
                          +in[(i+0)*n+(j+-1)] * -0.1
                          +in[(i+0)*n+(j+1)] * 0.1
                          +in[(i+0)*n+(j+2)] * 0.05
                          +in[(i+0)*n+(j+3)] * 0.03333333333333333
                          +in[(i+0)*n+(j+4)] * 0.025
                          +in[(i+0)*n+(j+5)] * 0.02
                          +in[(i+1)*n+(j+0)] * 0.1
                          +in[(i+2)*n+(j+0)] * 0.05
                          +in[(i+3)*n+(j+0)] * 0.03333333333333333
                          +in[(i+4)*n+(j+0)] * 0.025
                          +in[(i+5)*n+(j+0)] * 0.02;
           }
         }
       }
     }
}

void grid1(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    _Cilk_for (auto it=1; it<n-1; it+=t) {
      _Cilk_for (auto jt=1; jt<n-1; jt+=t) {
        for (auto i=it; i<std::min(n-1,it+t); ++i) {
          PRAGMA_SIMD
          for (auto j=jt; j<std::min(n-1,jt+t); ++j) {
            out[i*n+j] += +in[(i+-1)*n+(j+-1)] * -0.25
                          +in[(i+-1)*n+(j+0)] * -0.25
                          +in[(i+0)*n+(j+-1)] * -0.25
                          +in[(i+0)*n+(j+1)] * 0.25
                          +in[(i+1)*n+(j+0)] * 0.25
                          +in[(i+1)*n+(j+1)] * 0.25
                          ;
           }
         }
       }
     }
}

void grid2(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    _Cilk_for (auto it=2; it<n-2; it+=t) {
      _Cilk_for (auto jt=2; jt<n-2; jt+=t) {
        for (auto i=it; i<std::min(n-2,it+t); ++i) {
          PRAGMA_SIMD
          for (auto j=jt; j<std::min(n-2,jt+t); ++j) {
            out[i*n+j] += +in[(i+-2)*n+(j+-2)] * -0.0625
                          +in[(i+-2)*n+(j+-1)] * -0.020833333333333332
                          +in[(i+-2)*n+(j+0)] * -0.020833333333333332
                          +in[(i+-2)*n+(j+1)] * -0.020833333333333332
                          +in[(i+-1)*n+(j+-2)] * -0.020833333333333332
                          +in[(i+-1)*n+(j+-1)] * -0.125
                          +in[(i+-1)*n+(j+0)] * -0.125
                          +in[(i+-1)*n+(j+2)] * 0.020833333333333332
                          +in[(i+0)*n+(j+-2)] * -0.020833333333333332
                          +in[(i+0)*n+(j+-1)] * -0.125
                          +in[(i+0)*n+(j+1)] * 0.125
                          +in[(i+0)*n+(j+2)] * 0.020833333333333332
                          +in[(i+1)*n+(j+-2)] * -0.020833333333333332
                          +in[(i+1)*n+(j+0)] * 0.125
                          +in[(i+1)*n+(j+1)] * 0.125
                          +in[(i+1)*n+(j+2)] * 0.020833333333333332
                          +in[(i+2)*n+(j+-1)] * 0.020833333333333332
                          +in[(i+2)*n+(j+0)] * 0.020833333333333332
                          +in[(i+2)*n+(j+1)] * 0.020833333333333332
                          +in[(i+2)*n+(j+2)] * 0.0625
                          ;
           }
         }
       }
     }
}

void grid3(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    _Cilk_for (auto it=3; it<n-3; it+=t) {
      _Cilk_for (auto jt=3; jt<n-3; jt+=t) {
        for (auto i=it; i<std::min(n-3,it+t); ++i) {
          PRAGMA_SIMD
          for (auto j=jt; j<std::min(n-3,jt+t); ++j) {
            out[i*n+j] += +in[(i+-3)*n+(j+-3)] * -0.027777777777777776
                          +in[(i+-3)*n+(j+-2)] * -0.005555555555555556
                          +in[(i+-3)*n+(j+-1)] * -0.005555555555555556
                          +in[(i+-3)*n+(j+0)] * -0.005555555555555556
                          +in[(i+-3)*n+(j+1)] * -0.005555555555555556
                          +in[(i+-3)*n+(j+2)] * -0.005555555555555556
                          +in[(i+-2)*n+(j+-3)] * -0.005555555555555556
                          +in[(i+-2)*n+(j+-2)] * -0.041666666666666664
                          +in[(i+-2)*n+(j+-1)] * -0.013888888888888888
                          +in[(i+-2)*n+(j+0)] * -0.013888888888888888
                          +in[(i+-2)*n+(j+1)] * -0.013888888888888888
                          +in[(i+-2)*n+(j+3)] * 0.005555555555555556
                          +in[(i+-1)*n+(j+-3)] * -0.005555555555555556
                          +in[(i+-1)*n+(j+-2)] * -0.013888888888888888
                          +in[(i+-1)*n+(j+-1)] * -0.08333333333333333
                          +in[(i+-1)*n+(j+0)] * -0.08333333333333333
                          +in[(i+-1)*n+(j+2)] * 0.013888888888888888
                          +in[(i+-1)*n+(j+3)] * 0.005555555555555556
                          +in[(i+0)*n+(j+-3)] * -0.005555555555555556
                          +in[(i+0)*n+(j+-2)] * -0.013888888888888888
                          +in[(i+0)*n+(j+-1)] * -0.08333333333333333
                          +in[(i+0)*n+(j+1)] * 0.08333333333333333
                          +in[(i+0)*n+(j+2)] * 0.013888888888888888
                          +in[(i+0)*n+(j+3)] * 0.005555555555555556
                          +in[(i+1)*n+(j+-3)] * -0.005555555555555556
                          +in[(i+1)*n+(j+-2)] * -0.013888888888888888
                          +in[(i+1)*n+(j+0)] * 0.08333333333333333
                          +in[(i+1)*n+(j+1)] * 0.08333333333333333
                          +in[(i+1)*n+(j+2)] * 0.013888888888888888
                          +in[(i+1)*n+(j+3)] * 0.005555555555555556
                          +in[(i+2)*n+(j+-3)] * -0.005555555555555556
                          +in[(i+2)*n+(j+-1)] * 0.013888888888888888
                          +in[(i+2)*n+(j+0)] * 0.013888888888888888
                          +in[(i+2)*n+(j+1)] * 0.013888888888888888
                          +in[(i+2)*n+(j+2)] * 0.041666666666666664
                          +in[(i+2)*n+(j+3)] * 0.005555555555555556
                          +in[(i+3)*n+(j+-2)] * 0.005555555555555556
                          +in[(i+3)*n+(j+-1)] * 0.005555555555555556
                          +in[(i+3)*n+(j+0)] * 0.005555555555555556
                          +in[(i+3)*n+(j+1)] * 0.005555555555555556
                          +in[(i+3)*n+(j+2)] * 0.005555555555555556
                          +in[(i+3)*n+(j+3)] * 0.027777777777777776
                          ;
           }
         }
       }
     }
}

void grid4(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    _Cilk_for (auto it=4; it<n-4; it+=t) {
      _Cilk_for (auto jt=4; jt<n-4; jt+=t) {
        for (auto i=it; i<std::min(n-4,it+t); ++i) {
          PRAGMA_SIMD
          for (auto j=jt; j<std::min(n-4,jt+t); ++j) {
            out[i*n+j] += +in[(i+-4)*n+(j+-4)] * -0.015625
                          +in[(i+-4)*n+(j+-3)] * -0.002232142857142857
                          +in[(i+-4)*n+(j+-2)] * -0.002232142857142857
                          +in[(i+-4)*n+(j+-1)] * -0.002232142857142857
                          +in[(i+-4)*n+(j+0)] * -0.002232142857142857
                          +in[(i+-4)*n+(j+1)] * -0.002232142857142857
                          +in[(i+-4)*n+(j+2)] * -0.002232142857142857
                          +in[(i+-4)*n+(j+3)] * -0.002232142857142857
                          +in[(i+-3)*n+(j+-4)] * -0.002232142857142857
                          +in[(i+-3)*n+(j+-3)] * -0.020833333333333332
                          +in[(i+-3)*n+(j+-2)] * -0.004166666666666667
                          +in[(i+-3)*n+(j+-1)] * -0.004166666666666667
                          +in[(i+-3)*n+(j+0)] * -0.004166666666666667
                          +in[(i+-3)*n+(j+1)] * -0.004166666666666667
                          +in[(i+-3)*n+(j+2)] * -0.004166666666666667
                          +in[(i+-3)*n+(j+4)] * 0.002232142857142857
                          +in[(i+-2)*n+(j+-4)] * -0.002232142857142857
                          +in[(i+-2)*n+(j+-3)] * -0.004166666666666667
                          +in[(i+-2)*n+(j+-2)] * -0.03125
                          +in[(i+-2)*n+(j+-1)] * -0.010416666666666666
                          +in[(i+-2)*n+(j+0)] * -0.010416666666666666
                          +in[(i+-2)*n+(j+1)] * -0.010416666666666666
                          +in[(i+-2)*n+(j+3)] * 0.004166666666666667
                          +in[(i+-2)*n+(j+4)] * 0.002232142857142857
                          +in[(i+-1)*n+(j+-4)] * -0.002232142857142857
                          +in[(i+-1)*n+(j+-3)] * -0.004166666666666667
                          +in[(i+-1)*n+(j+-2)] * -0.010416666666666666
                          +in[(i+-1)*n+(j+-1)] * -0.0625
                          +in[(i+-1)*n+(j+0)] * -0.0625
                          +in[(i+-1)*n+(j+2)] * 0.010416666666666666
                          +in[(i+-1)*n+(j+3)] * 0.004166666666666667
                          +in[(i+-1)*n+(j+4)] * 0.002232142857142857
                          +in[(i+0)*n+(j+-4)] * -0.002232142857142857
                          +in[(i+0)*n+(j+-3)] * -0.004166666666666667
                          +in[(i+0)*n+(j+-2)] * -0.010416666666666666
                          +in[(i+0)*n+(j+-1)] * -0.0625
                          +in[(i+0)*n+(j+1)] * 0.0625
                          +in[(i+0)*n+(j+2)] * 0.010416666666666666
                          +in[(i+0)*n+(j+3)] * 0.004166666666666667
                          +in[(i+0)*n+(j+4)] * 0.002232142857142857
                          +in[(i+1)*n+(j+-4)] * -0.002232142857142857
                          +in[(i+1)*n+(j+-3)] * -0.004166666666666667
                          +in[(i+1)*n+(j+-2)] * -0.010416666666666666
                          +in[(i+1)*n+(j+0)] * 0.0625
                          +in[(i+1)*n+(j+1)] * 0.0625
                          +in[(i+1)*n+(j+2)] * 0.010416666666666666
                          +in[(i+1)*n+(j+3)] * 0.004166666666666667
                          +in[(i+1)*n+(j+4)] * 0.002232142857142857
                          +in[(i+2)*n+(j+-4)] * -0.002232142857142857
                          +in[(i+2)*n+(j+-3)] * -0.004166666666666667
                          +in[(i+2)*n+(j+-1)] * 0.010416666666666666
                          +in[(i+2)*n+(j+0)] * 0.010416666666666666
                          +in[(i+2)*n+(j+1)] * 0.010416666666666666
                          +in[(i+2)*n+(j+2)] * 0.03125
                          +in[(i+2)*n+(j+3)] * 0.004166666666666667
                          +in[(i+2)*n+(j+4)] * 0.002232142857142857
                          +in[(i+3)*n+(j+-4)] * -0.002232142857142857
                          +in[(i+3)*n+(j+-2)] * 0.004166666666666667
                          +in[(i+3)*n+(j+-1)] * 0.004166666666666667
                          +in[(i+3)*n+(j+0)] * 0.004166666666666667
                          +in[(i+3)*n+(j+1)] * 0.004166666666666667
                          +in[(i+3)*n+(j+2)] * 0.004166666666666667
                          +in[(i+3)*n+(j+3)] * 0.020833333333333332
                          +in[(i+3)*n+(j+4)] * 0.002232142857142857
                          +in[(i+4)*n+(j+-3)] * 0.002232142857142857
                          +in[(i+4)*n+(j+-2)] * 0.002232142857142857
                          +in[(i+4)*n+(j+-1)] * 0.002232142857142857
                          +in[(i+4)*n+(j+0)] * 0.002232142857142857
                          +in[(i+4)*n+(j+1)] * 0.002232142857142857
                          +in[(i+4)*n+(j+2)] * 0.002232142857142857
                          +in[(i+4)*n+(j+3)] * 0.002232142857142857
                          +in[(i+4)*n+(j+4)] * 0.015625
                          ;
           }
         }
       }
     }
}

void grid5(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    _Cilk_for (auto it=5; it<n-5; it+=t) {
      _Cilk_for (auto jt=5; jt<n-5; jt+=t) {
        for (auto i=it; i<std::min(n-5,it+t); ++i) {
          PRAGMA_SIMD
          for (auto j=jt; j<std::min(n-5,jt+t); ++j) {
            out[i*n+j] += +in[(i+-5)*n+(j+-5)] * -0.01
                          +in[(i+-5)*n+(j+-4)] * -0.0011111111111111111
                          +in[(i+-5)*n+(j+-3)] * -0.0011111111111111111
                          +in[(i+-5)*n+(j+-2)] * -0.0011111111111111111
                          +in[(i+-5)*n+(j+-1)] * -0.0011111111111111111
                          +in[(i+-5)*n+(j+0)] * -0.0011111111111111111
                          +in[(i+-5)*n+(j+1)] * -0.0011111111111111111
                          +in[(i+-5)*n+(j+2)] * -0.0011111111111111111
                          +in[(i+-5)*n+(j+3)] * -0.0011111111111111111
                          +in[(i+-5)*n+(j+4)] * -0.0011111111111111111
                          +in[(i+-4)*n+(j+-5)] * -0.0011111111111111111
                          +in[(i+-4)*n+(j+-4)] * -0.0125
                          +in[(i+-4)*n+(j+-3)] * -0.0017857142857142857
                          +in[(i+-4)*n+(j+-2)] * -0.0017857142857142857
                          +in[(i+-4)*n+(j+-1)] * -0.0017857142857142857
                          +in[(i+-4)*n+(j+0)] * -0.0017857142857142857
                          +in[(i+-4)*n+(j+1)] * -0.0017857142857142857
                          +in[(i+-4)*n+(j+2)] * -0.0017857142857142857
                          +in[(i+-4)*n+(j+3)] * -0.0017857142857142857
                          +in[(i+-4)*n+(j+5)] * 0.0011111111111111111
                          +in[(i+-3)*n+(j+-5)] * -0.0011111111111111111
                          +in[(i+-3)*n+(j+-4)] * -0.0017857142857142857
                          +in[(i+-3)*n+(j+-3)] * -0.016666666666666666
                          +in[(i+-3)*n+(j+-2)] * -0.0033333333333333335
                          +in[(i+-3)*n+(j+-1)] * -0.0033333333333333335
                          +in[(i+-3)*n+(j+0)] * -0.0033333333333333335
                          +in[(i+-3)*n+(j+1)] * -0.0033333333333333335
                          +in[(i+-3)*n+(j+2)] * -0.0033333333333333335
                          +in[(i+-3)*n+(j+4)] * 0.0017857142857142857
                          +in[(i+-3)*n+(j+5)] * 0.0011111111111111111
                          +in[(i+-2)*n+(j+-5)] * -0.0011111111111111111
                          +in[(i+-2)*n+(j+-4)] * -0.0017857142857142857
                          +in[(i+-2)*n+(j+-3)] * -0.0033333333333333335
                          +in[(i+-2)*n+(j+-2)] * -0.025
                          +in[(i+-2)*n+(j+-1)] * -0.008333333333333333
                          +in[(i+-2)*n+(j+0)] * -0.008333333333333333
                          +in[(i+-2)*n+(j+1)] * -0.008333333333333333
                          +in[(i+-2)*n+(j+3)] * 0.0033333333333333335
                          +in[(i+-2)*n+(j+4)] * 0.0017857142857142857
                          +in[(i+-2)*n+(j+5)] * 0.0011111111111111111
                          +in[(i+-1)*n+(j+-5)] * -0.0011111111111111111
                          +in[(i+-1)*n+(j+-4)] * -0.0017857142857142857
                          +in[(i+-1)*n+(j+-3)] * -0.0033333333333333335
                          +in[(i+-1)*n+(j+-2)] * -0.008333333333333333
                          +in[(i+-1)*n+(j+-1)] * -0.05
                          +in[(i+-1)*n+(j+0)] * -0.05
                          +in[(i+-1)*n+(j+2)] * 0.008333333333333333
                          +in[(i+-1)*n+(j+3)] * 0.0033333333333333335
                          +in[(i+-1)*n+(j+4)] * 0.0017857142857142857
                          +in[(i+-1)*n+(j+5)] * 0.0011111111111111111
                          +in[(i+0)*n+(j+-5)] * -0.0011111111111111111
                          +in[(i+0)*n+(j+-4)] * -0.0017857142857142857
                          +in[(i+0)*n+(j+-3)] * -0.0033333333333333335
                          +in[(i+0)*n+(j+-2)] * -0.008333333333333333
                          +in[(i+0)*n+(j+-1)] * -0.05
                          +in[(i+0)*n+(j+1)] * 0.05
                          +in[(i+0)*n+(j+2)] * 0.008333333333333333
                          +in[(i+0)*n+(j+3)] * 0.0033333333333333335
                          +in[(i+0)*n+(j+4)] * 0.0017857142857142857
                          +in[(i+0)*n+(j+5)] * 0.0011111111111111111
                          +in[(i+1)*n+(j+-5)] * -0.0011111111111111111
                          +in[(i+1)*n+(j+-4)] * -0.0017857142857142857
                          +in[(i+1)*n+(j+-3)] * -0.0033333333333333335
                          +in[(i+1)*n+(j+-2)] * -0.008333333333333333
                          +in[(i+1)*n+(j+0)] * 0.05
                          +in[(i+1)*n+(j+1)] * 0.05
                          +in[(i+1)*n+(j+2)] * 0.008333333333333333
                          +in[(i+1)*n+(j+3)] * 0.0033333333333333335
                          +in[(i+1)*n+(j+4)] * 0.0017857142857142857
                          +in[(i+1)*n+(j+5)] * 0.0011111111111111111
                          +in[(i+2)*n+(j+-5)] * -0.0011111111111111111
                          +in[(i+2)*n+(j+-4)] * -0.0017857142857142857
                          +in[(i+2)*n+(j+-3)] * -0.0033333333333333335
                          +in[(i+2)*n+(j+-1)] * 0.008333333333333333
                          +in[(i+2)*n+(j+0)] * 0.008333333333333333
                          +in[(i+2)*n+(j+1)] * 0.008333333333333333
                          +in[(i+2)*n+(j+2)] * 0.025
                          +in[(i+2)*n+(j+3)] * 0.0033333333333333335
                          +in[(i+2)*n+(j+4)] * 0.0017857142857142857
                          +in[(i+2)*n+(j+5)] * 0.0011111111111111111
                          +in[(i+3)*n+(j+-5)] * -0.0011111111111111111
                          +in[(i+3)*n+(j+-4)] * -0.0017857142857142857
                          +in[(i+3)*n+(j+-2)] * 0.0033333333333333335
                          +in[(i+3)*n+(j+-1)] * 0.0033333333333333335
                          +in[(i+3)*n+(j+0)] * 0.0033333333333333335
                          +in[(i+3)*n+(j+1)] * 0.0033333333333333335
                          +in[(i+3)*n+(j+2)] * 0.0033333333333333335
                          +in[(i+3)*n+(j+3)] * 0.016666666666666666
                          +in[(i+3)*n+(j+4)] * 0.0017857142857142857
                          +in[(i+3)*n+(j+5)] * 0.0011111111111111111
                          +in[(i+4)*n+(j+-5)] * -0.0011111111111111111
                          +in[(i+4)*n+(j+-3)] * 0.0017857142857142857
                          +in[(i+4)*n+(j+-2)] * 0.0017857142857142857
                          +in[(i+4)*n+(j+-1)] * 0.0017857142857142857
                          +in[(i+4)*n+(j+0)] * 0.0017857142857142857
                          +in[(i+4)*n+(j+1)] * 0.0017857142857142857
                          +in[(i+4)*n+(j+2)] * 0.0017857142857142857
                          +in[(i+4)*n+(j+3)] * 0.0017857142857142857
                          +in[(i+4)*n+(j+4)] * 0.0125
                          +in[(i+4)*n+(j+5)] * 0.0011111111111111111
                          +in[(i+5)*n+(j+-4)] * 0.0011111111111111111
                          +in[(i+5)*n+(j+-3)] * 0.0011111111111111111
                          +in[(i+5)*n+(j+-2)] * 0.0011111111111111111
                          +in[(i+5)*n+(j+-1)] * 0.0011111111111111111
                          +in[(i+5)*n+(j+0)] * 0.0011111111111111111
                          +in[(i+5)*n+(j+1)] * 0.0011111111111111111
                          +in[(i+5)*n+(j+2)] * 0.0011111111111111111
                          +in[(i+5)*n+(j+3)] * 0.0011111111111111111
                          +in[(i+5)*n+(j+4)] * 0.0011111111111111111
                          +in[(i+5)*n+(j+5)] * 0.01
                          ;
           }
         }
       }
     }
}

