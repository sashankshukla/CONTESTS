" << A[0] << line();}
        cout << "inv k " << A[w+1] << " " << A[u-1] << line();
        cout << "inv o " << A[v] <<  " " << A[n-1] << line();*/
        int r = 0;
        for(int n=1;n<15;++n){
          for (int i = 1; i < n*n*n; i = i * 2)
            r++;
        cout << r*r << " " << ceil(log2(pow(n,3))) << line();
        }
  } // line 15=
