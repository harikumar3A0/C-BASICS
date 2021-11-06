 //print all the arthametic oprrations
 #include<stdio.h>
 void main()
 {
 	int a,b,A,S,M,MD,D;
 	a=10;
 	b=2;
 	
 	A=a+b;
 	S=a-b;
 	M=a*b;
 	D=a/b;
 	MD=a%b;
 	printf("sum of %d and %d is %d\n",a ,b ,A);
 	printf("difference between %d and %d is %d\n ",a,b,S);
 	printf("product of %d and %d is %d\n",a,b,M);
 	printf ("coeffcient of %d and %d is %d\n",a,b,D);
 	printf("remainder of %d and %d is %d",a,b,MD);
 }
