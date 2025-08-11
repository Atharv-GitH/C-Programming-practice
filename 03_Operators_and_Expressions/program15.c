 #include <stdio.h>

  void main (){
   
  
    int num;
    char chr;
    float rs;

    printf("Enter an integer value for num: ");
    scanf("%d", &num);

    getchar();

    printf("Enter a character for chr: ");
    scanf("%c", &chr);

    printf("Enter a float value for rs: ");
    scanf("%f", &rs);

    
    printf("\nValues of the variables:\n");

    printf("num = %d\n", num);
    printf("chr = '%c'\n", chr);
    printf("rs = %f\n", rs);

    printf("%ld\n",sizeof(num));
    printf("%ld\n",sizeof(chr));
    printf("%ld\n",sizeof(rs));


  }
