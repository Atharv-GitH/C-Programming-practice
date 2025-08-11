  
  #include<stdio.h>

  void main (){
  
  int x=4;
  int y=5;

  int ans;

  ans =x&y;

  printf ("%d\n",ans);  // 4

  ans = ++x & ++y;
 
  printf ("%d\n",ans);  // 4

  ans = x-- | ++y;

  printf ("%d\n",ans);  // 7

  ans = x-- ^ ++y;

  printf ("%d\n",ans);  // 12

  }
