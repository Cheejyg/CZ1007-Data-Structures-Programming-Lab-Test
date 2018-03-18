# Programming Lab Test (Toal time = 1 hr 15 minutes)

### Instructions

1. This is a closed book test.
2. Lab test will be held on week 8 (3-7 October) of Semester 1 in your lab tutorial session.
3. The question paper contains 5 sections, A, B, C, D and E. Each section contains 6 questions.
4. You are required to answer a total of 5 questions with one question from each section. The questions to be answered in the lab test will be randomly chosen during the lab test session.
5. Each question carries 20 marks. Total marks = 100.
6. The submitted question code will be marked according to its correctness. If the question code is unable to compile, you will get 0 mark for that question.
7. Program templates for the questions will be available during the test. You may use the program templates for your program development.
8. If you need a piece of rough paper to draft your code, please ask the lab technician for it.

### Notes

1. Section A – contains questions from lab and tutorial on Arrays.
2. Section B – contains questions from lab and tutorial on Character Strings.
3. Section C – contains questions from lab and tutorial on Structures.
4. Section D – contains questions from lab and tutorial on Recursive Functions.
5. Section E – contains questions from different topics. They are questions from past exam papers. You may refer to the past exam question papers to get hints on doing these questions.

## Section A \[Answer 1 Specified Question from this Section\]

1. (**SAabsoluteSum**) Write a C function **aSum()** that returns the sum of the absolute values of the elements of a vector with the following prototype: 
	
	```
    float aSum(int size, float vector[ ]);
	```
	
	where **size** is the number of elements in the vector.
	
	Write a C program to test the function.
	
	A sample program to test the functions is given below.
	
	```
    #include <stdio.h>
    #include <math.h>
    float aSum(int size, float vector[]);
    int main()
    {
        float vector[10];
        int i, size;
        
        printf("Enter vector size: ");
        scanf("%d", &size);
        printf("Enter %d data: ", size);
        for (i=0; i<size; i++)
            scanf("%f", &vector[i]);
        printf("aSum(): %f", aSum(size, vector));
        return 0;
    }
    float aSum(int size, float vector[])
    {
        /* write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter vector size: 5
    Enter 5 data: 1.1 3 5 7 9
    aSum(): 25.100000
    
    Enter vector size: 5
    Enter 5 data: 1 -3 5 -7 9
    aSum(): 25.000000
	```

2. (**SAfindAr**) Write a function **findAr()** that returns the subscript of the first appearance of a target number in an array. For example, if **ar = {3,6,9,4,7,8}**, then **findAr(6,ar,3)** will return 0 where 6 is the size of the array and 3 is the number to be found, and **findAr(6,ar,9)** will return 2. If the required number is not in the array, the function will return –1. The function prototype is given as follows: 
	
	```
    int findAr(int size, int ar[ ], int target);
	```
	
	Write a C program to test the function.
	
	A sample program to test the functions is given below.
	
	```
    #include <stdio.h>
    int findAr(int size, int ar[], int target);
    int main()
    {
        int ar[20];
        int size, i, target;
        
        printf("Enter array size: ");
        scanf("%d", &size);
        printf("Enter %d data: ", size);
        for (i=0; i<=size-1; i++)
            scanf("%d", &ar[i]);
        printf("Enter the target number: ");
        scanf("%d", &target);
        printf("findAr(): %d",
            findAr(size, ar, target));
        return 0;
    }
    int findAr(int size, int ar[], int target)
    {
        /* write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter array size: 5
    Enter 5 data: 1 2 3 4 5
    Enter the target number: 2
    findAr(): 1
    
    Enter array size: 7
    Enter 7 data: 1 3 5 7 9 11 15
    Enter the target number: 2
    findAr(): -1
	```

3. (**SAreverseAr**) Write a C function **reverseAr()** that takes in an array of integers **ar** and a parameter **size** that indicates the size of the array to be processed. The function converts the content in the array in reverse order and passes the array to the calling function via call by reference. For example, if the array is {1,2,3,4,5} and size is 5, then the array will become {5,4,3,2,1} after processing. The function prototype is given as follows: 
	
	```
    void reverseAr(int ar[ ], int size);
	```
	
	where **size** indicates the size of the array.
	
	Write a C program to test the function.
	
	A sample program to test the functions is given below.
	
	```
    #include <stdio.h>
    void reverseAr(int ar[], int size);
    int main()
    {
        int ar[80], size, i;
        
        printf("Enter array size: ");
        scanf("%d", &size);
        printf("Enter %d data: ", size);
        for (i=0; i <= size-1; i++)
            scanf("%d", &ar[i]);
        reverseAr(ar, size);
        printf("reverseAr(): ");
        if (size > 0) {
            for (i=0; i<size; i++)
                printf("%d ", ar[i]);
        }
        return 0;
    }
    void reverseAr(int ar[], int size)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter array size: 4
    Enter 4 data: 1 2 3 6
    reverseAr(): 6 3 2 1
    
    Enter array size: 7
    Enter 7 data: 1 2 3 6 7 9 8
    reverseAr(): 8 9 7 6 3 2 1
	```

4. (**SAswap2Rows**) Write a function **swap2Rows()** that swaps row **r1** with row **r2** in the 2-dimensional array **M**. The function prototype is given below: 
	
	```
    void swap2Rows(int M[SIZE][SIZE], int r1, int r2);
	```
	
	Write a C program to test the function. You may assume that the input matrix is a 3x3 matrix (i.e. SIZE = 3) when testing the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    #define SIZE 3
    void swap2Rows(int M[SIZE][SIZE], int r1, int r2);
    void display(int M[SIZE][SIZE]);
    int main()
    {
        int ar[SIZE][SIZE];
        int row1,row2,i,j;
        
        printf("Enter the matrix row by row: \n");
        for (i=0; i<SIZE; i++)
            for (j=0; j<SIZE; j++)
                scanf("%d", &ar[i][j]);
        printf("Enter two rows for swapping: ");
        scanf("%d %d", &row1, &row2);
        swap2Rows(ar, row1, row2);
        printf("The array is: \n");
        display(ar);
        return 0;
    }
    void display(int M[SIZE][SIZE])
    {
        int l,m;
        for (l = 0; l < 3; l++) {
            for (m = 0; m < 3; m++)
                printf("%d ", M[l][m]);
        printf("\n");
        }
    }
    void swap2Rows(int M[SIZE][SIZE], int r1, int r2)
    {
        /* write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter the matrix row by row:
    1 2 3
    4 5 6
    7 8 9
    Enter two rows for swapping: 1 2
    The array is:
    1 2 3
    7 8 9
    4 5 6
    
    Enter the matrix row by row:
    1 2 3
    4 5 6
    7 8 9
    Enter two rows for swapping: 0 2
    The array is:
    7 8 9
    4 5 6
    1 2 3
	```

5. (**SAfindMinMax2D**) Write a C function **findMinMax2D()** that takes a 5x5 two-dimensional array of integers **ar** as a parameter. The function returns the minimum and maximum numbers of the array to the caller through the two pointer parameters **min** and **max** respectively. The function prototype is given as follows: 
	
	```
    void findMinMax2D(int ar[5][5], int *min, int *max);
	```
	
	Write a C program to test the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    void findMinMax2D(int ar[5][5], int *min, int *max);
    int main()
    {
        int A[5][5];
        int i,j,min,max;
        printf("Enter the matrix (5x5) row by row: \n");
        for (i=0; i<5; i++)
            for (j=0; j<5; j++)
                scanf("%d", &A[i][j]);
        findMinMax2D(A, &min, &max);
        printf("min = %d; max = %d", min, max);
        return 0;
    }
    void findMinMax2D(int ar[5][5], int *min, int *max)
    {
        /* add your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter the matrix (5x5) row by row:
    1 2 3 4 5
    2 3 4 5 6
    4 5 6 7 8
    5 4 23 1 2
    1 2 3 4 5
    min = 1; max = 23
    
    Enter the matrix (5x5) row by row:
    1 2 3 4 5
    -1 -2 -3 -4 -5
    6 7 8 9 10
    -10 -9 -8 -7 -6
    2 4 -6 -8 -10
    min = -10; max = 10
	```

6. (**SAtranspose**) Write a function **transpose()** that transposes a square matrix **M**. The function prototype is given below: 
	
	```
    void transpose(int M[SIZE][SIZE);
	```
	
	Write a C program to test the function. In addition, your program should print the resultant matrix after each operation. You may assume that the input matrix is a 3x3 matrix when testing the function.
	
	A sample program to test the function is given below.
	
	```
    #include <stdio.h>
    #define SIZE 3
    void transpose(int M[SIZE][SIZE]);
    void display(int M[SIZE][SIZE]);
    int main()
    {
        int ar[SIZE][SIZE];
        int i,j;
        
        printf("Enter the matrix row by row: \n");
        for (i=0; i<SIZE; i++)
            for (j=0; j<SIZE; j++)
                scanf("%d", &ar[i][j]);
        printf("transpose():\n");
        transpose(ar);
        display(ar);
        return 0;
    }
    void display(int M[SIZE][SIZE])
    {
        int l,m;
        for (l = 0; l < 3; l++) {
            for (m = 0; m < 3; m++)
                printf("%5d", M[l][m]);
            printf("\n");
        }
    }
    void transpose(int M[SIZE][SIZE])
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter the matrix row by row:
    5 10 15
    15 20 25
    25 30 35
    Matrix transpose:
        5   15   25
       10   20   30
       15   25   35
    Enter the matrix row by row:
    -5 -6 -7
    3 4 5
    -1 -2 -3
    transpose():
       -5    3   -1
       -6    4   -2
       -7    5   -3
	```

## Section B - Character Strings \[Answer 1 Specified Question\]

1. (**SBprocessString**) Write a C function **processString()** that accepts a string, **str**, and returns the total number of vowels and digits in that string to the caller via call by reference. The function prototype is given as follows: 
	
	```
    void processString(char *str, int *totVowels, int *totDigits);
	```
	
	Write a C program to test the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    void processString(char *str, int *totVowels, int *totDigits);
    int main()
    {
        char str[50];
        int totVowels, totDigits;
        
        printf("Enter the string: ");
        gets(str);
        processString(str, &totVowels, &totDigits);
        printf("Total vowels = %d\n", totVowels);
        printf("Total digits = %d\n", totDigits);
        return 0;
    }
    void processString(char *str, int *totVowels, int *totDigits)
    {
        /* Write your code here */
    }
    ```
	
	A sample input and output session is given below: 
	
	```
    Enter the string: I am one of the 400 students in this class.
    Total vowels = 11
    Total digits = 3
    
    Enter the string: I am a boy.
    Total vowels = 4
    Total digits = 0
	```

2. (**SBcompareStr**) Write a C function **compareStr()** that takes in two parameters **s** and **t**, and compares the two character strings **s** and **t** according to alphabetical order. If **s** is greater than **t**, then it will return a positive value. Otherwise, it will return a negative value. However, if the two strings are the same, it will return the value 0. For example, if **s** is "boy" and **t** is "girl", then the function will return -5 which is the difference between the ASCII values of 'b' and 'g'. If **s** is "car" and **t** is "apple", then it will return 2 which is the difference between the ASCII values of 'c' and 'a'. You should not use any string functions from the standard C library in this function. The function prototype is given as follows: 
	
	```
    int compareStr(char *s, char *t);
	```
	
	Write a C program to test the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    int compareStr(char *s, char *t);
    int main()
    {
        char a[80],b[80];
        printf("Enter the first string: ");
        gets(a);
        printf("Enter the second string: ");
        gets(b);
        printf("compareStr(): %d", compareStr(a,b));
        return 0;
    }
    int compareStr(char *s, char *t)
    {
        /* Write your code here */
    }
    ```
	
	Some test input and output sessions are given below: 
	
	```
    Enter the first string: boy
    Enter the second string: girl
    compareStr(): -5
    
    Enter the first string: car
    Enter the second string: apple
    compareStr(): 2
    
    Enter the first string: abcd
    Enter the second string: abcD
    compareStr(): 32
	```

3. (**SBstringncpy**) Write a C function **stringncpy()** that copies not more than **n** characters (characters that follow a null character are not copied) from the array pointed to by **s2** to the array pointed to by **s1**. If the array pointed to by **s2** is a string shorter than **n** characters, null characters are appended to the copy in the array pointed to by **s1**, until **n** characters in all have been written. The **stringncpy()** returns the value of **s1**. The function prototype: 
	
	```
    char *stringncpy(char * s1, char * s2, int n);
	```
	
	In addition, write a C program to test the stringncpy function. Your program should read the string and the target _n_ characters from the user and then call the function with the user input. In this program, you are not allowed to use any functions from the C standard String library.
	
	A sample program to test the function is given below: 
	
	```
    #include <stdio.h>
    char *stringncpy(char *s1, char *s2, int n);
    int main()
    {
        char sourceStr[40] = "source";
        char targetStr[40], *target;
        int length;
        
        printf("Enter a string: ");
        gets(sourceStr);
        printf("Enter the number of characters: ");
        scanf("%d", &length);
        target = stringncpy(targetStr, sourceStr, length);
        printf("stringncpy(): %s", target);
        return 0;
    }
    char *stringncpy(char *s1, char *s2, int n)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter a string: I am a boy.
    Enter the number of characters: 7
    Returned string: I am a
    
    Enter a string: I am a boy.
    Enter the number of characters: 21
    Returned string: I am a boy.
	```

4. (**SBfindTarget**) Write a C program that reads and searches character strings. In the program, it contains a function **findTarget()** that searches whether a target name string has been stored in the array of strings. The function prototype is 
	
	```
    int findTarget(char *target, char nameptr[SIZE][80], int size);
	```
	
	where **nameptr** is the array of strings entered by the user, **size** is the number of names stored in the array and **target** is the target string. If the target string is found, the function will return its index location, or -1 if otherwise.
	
	Write a C program to test the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    #include <string.h>
    #define SIZE 10
    int findTarget(char *target, char nameptr[SIZE][80], int size);
    int main()
    {
        char nameptr[SIZE][80];
        char t[40];
        int i, result, size;
        
        printf("Enter no. of names: ");
        scanf("%d", &size);
        printf("Enter %d names: ", size);
        for (i=0; i<size; i++)
            scanf("%s", nameptr[i]);
        printf("Enter target name: ");
        scanf("\n");
        gets(t);
        result = findTarget(t, nameptr, size);
        printf("findTarget(): %d\n", result);
        return 0;
    }
    int findTarget(char *target, char nameptr[SIZE][80], int size)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter no. of names: 4
    Enter 4 names: Peter Paul John Mary
    Enter target name: John
    findTarget(): 2
    
    Enter no. of names: 5
    Enter 5 names: Peter Paul John Mary Vincent
    Enter target name: Jane
    findTarget(): -1
	```

5. (**SBcipherText**) Cipher text is a popular encryption technique. What we do in cipher text is that we can encrypt each character with +1. For example, "**Hello**" can be encrypted with +1 Cipher to "**Ifmmp**". If a character is 'z' or 'Z', the corresponding encrypted character will be 'a' or 'A' respectively. Write the C functions **cipher()** and **decipher()** with the following function prototypes: 
	
	```
    char *cipher(char *s);
    char *decipher(char *s);
	```
	
	Write a C program to test the cipher() and decipher() functions.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>
    char *cipher(char *s);
    char *decipher(char *s);
    int main()
    {
        char str[80], *q;
        
        printf("Enter a string: ");
        gets(str);
        printf("To cipher: %s -> ", str);
        q = cipher(str);
        printf("%s\n", str);
        printf("To decipher: %s -> ", str);
        q = decipher(str);
        printf("%s\n", str);
        return 0;
    }
    char *cipher(char *s)
    {
        /* Write your code here */
    }
    char *decipher(char *s)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter a string: abcxyz
    To cipher: abcxyz -> bcdyza
    To decipher: bcdyza -> abcxyz
    
    Enter a string: Hello
    To cipher: Hello -> Ifmmp
    To decipher: Ifmmp -> Hello
	```

6. (**SBfindSubstring**) Write a C function **findSubstring()** that takes two character string arguments, **str** and **substr** as input and returns 1 if **substr** is a substring of **str** (i.e. if **substr** is contained in **str**) and -1 if not. For example, the function will return 1 if **substr** is "**123**" and **str** is "**abc123xyz**", but it will return -1 if otherwise. Note that for this question you are not allowed to use any string functions from the standard C library. The prototype of the function is given below: 
	
	```
    int findSubstring(char *str, char *substr);
	```
	
	Write a C program to test the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    int findSubstring(char *str, char *substring);
    int main()
    {
        char str[40], substr[40];
        
        printf("Enter the string: ");
        gets(str);
        printf("Enter the substring: ");
        gets(substr);
        printf("findSubstring(): %d\n", findSubstring(str, substr));
        return 0;
    }
    int findSubstring(char *str, char *substr)
    {
        /* Write your code here */
    }
    ```
	
	Some test input and output sessions are given below: 
	
	```
    Enter the string: abcde
    Enter the substring: abc
    findSubstring(): 1
    
    Enter the string: abcde
    Enter the substring: cdef
    findSubstring(): -1
	```

## Section C \[Answer 1 Specified Question from this Section\]

1. (**SCintersect**) Write a function **intersect()** that returns 1 if two circles intersect, and 0 otherwise. Two circles intersect when the distance between their centres is less than or equal to the sum of their radii. The function prototype is given below: 
	
	```
    int intersect(struct circle c1, struct circle c2);
	```
	
	The structure circle is defined below. It consists of the radius of the circle and the (x,y) coordinates of its centre.
	
	```
    struct circle {
        double radius;
        double x;
        double y;
    };
	```
	
	Write a C program to test the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    #include <math.h>
    struct circle {
        double radius;
        double x;
        double y;
    };
    int intersect(struct circle, struct circle);
    int main()
    {
        struct circle c1, c2;
        printf("Enter circle 1 (radius x y): ");
        scanf("%lf %lf %lf", &c1.radius, &c1.x, &c1.y);
        printf("Enter circle 2 (radius x y): ");
        scanf("%lf %lf %lf", &c2.radius, &c2.x, &c2.y);
        printf("Circle intersection: %d\n", intersect(c1, c2));
        return 0;
    }
    int intersect(struct circle c1, struct circle c2)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter circle 1 (radius x y): 10 5 5
    Enter circle 2 (radius x y): 5 1 1
    intersect(): 1
    
    Enter circle 1 (radius x y): 5 1 1
    Enter circle 2 (radius x y): 5 15 15
    intersect(): 0
	```

2. (**SCcompute2**) Write a C function **compute2()** that computes the value of an expression and returns the result. For example, the function will return the value of 4/2 if in the structure passed to it, **operand1** is 4, **operator** is '/' and **operand2** is 2. The function prototype is given as: 
	
	```
    float compute2(bexpression *expr);
	```
	
	The following structure bexpression is defined to represent an arithmetic expression: 
	
	```
    typedef struct {
        float operand1, operand2;
        char op; /* operator '+','-','*' or '/' */
    } bexpression;
	```
	
	Write a C program to test the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    typedef struct {
        float operand1, operand2;
        char op;
    } bexpression;
    float compute2(bexpression *expr);
    int main()
    {
        bexpression e;
        printf("Enter expression (op1 op2 op) : ");
        scanf("%f %f %c", &e.operand1, &e.operand2, &e.op);
        printf("compute2 = %f\n", compute2(&e));
        return 0;
    }
    float compute2(bexpression *expr)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter expression (op1 op2 op): 4 8 +
    compute2(): 12.000000
    
    Enter expression (op1 op2 op): 8 4 /
    compute2(): 2.000000
    
    Enter expression (op1 op2 op): 4 8 *
    compute2(): 32.000000
	```

3. (**SCaverage**) Assume the following structure is defined to represent a grade record of a student: 
	
	```
    struct student{
        char name[20]; /* student name */
        double testScore; /* test score */
        double examScore; /* exam score */
        double total; /* total score = (testScore+examScore)/2 */
    };
	```
	
	Write a C function **average()** that creates a database of maximum 50 students using an array of structures. The function reads in student name. For each student, it takes in the test score and exam score. Then it computes and prints the total score of the student. The input will end when the student name is "END". Then, it computes and returns the average score of all students to the calling function (i.e. **main()**). The calling function then prints the average score on the display. The function prototype is given below: 
	
	```
    double average();
	```
	
	Write a C program to test the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    #include <string.h>
    struct student{
        char name[20]; /* student name */
        double testScore; /* test score */
        double examScore; /* exam score */
        double total; /* total score = (testScore+examScore)/2 */
    };
    double average();
    int main()
    {
        printf("average(): %f\n", average());
        return 0;
    }
    double average()
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter student name: Hui S
    Enter test score: 34
    Enter exam score: 45
    Student Hui S total = 39.500000
    Enter student name: Fong A
    Enter test score: 67
    Enter exam score: 56
    Student Fong A total = 61.500000
    Enter student name: END
    average(): 50.500000
    
    Enter student name: END
    average(): 0.000000
	```

4. (**SCcustomer**) Write a C program that repeatedly reads in customer data from the user and prints the customer data on the screen until the customer name "___End Customer___" (i.e., first\_name last\_name) is read. Your program should include the following two functions: the function **nextCustomer()** reads and returns a record for a single customer to the caller via a parameter **acct**, and the function **printCustomer()** takes a parameter **acct** and then prints the customer information. The prototypes of the two functions are given below: 
	
	```
    void nextCustomer(struct account *acct);
    void printCustomer(struct account acct);
	```
	
	The structure definition for **struct account** is given below: 
	
	```
    struct account {
        struct
        {
            char lastName[10];
            char firstName[10];
        } names;
        int accountNum;
        double balance;
    };
    ```
	
	You are required to implement the functions **printCustomer()** and **nextCustomer()**. Write a C program to test the function. In your code, you should follow the exact format of the required input and output given in the following test sample session.
	
	A sample program to test the functions is given below: 
	
	```
    #include <stdio.h>
    #include <string.h>
    struct account {
        struct
        {
            char lastName[10];
            char firstName[10];
        } names;
        int accountNum;
        double balance;
    };
    void nextCustomer(struct account *acct);
    void printCustomer(struct account acct);
    int main()
    {
        struct account record;
        int flag = 0;
        do {
            nextCustomer(&record);
            if ((strcmp(record.names.firstName, "End") == 0) &&
                (strcmp(record.names.lastName, "Customer") == 0))
               flag = 1;
            if (flag != 1)
               printCustomer(record);
       } while (flag != 1);
    }
    void nextCustomer(struct account *acct)
    {
        /* write your code here */
    }
    void printCustomer(struct account acct)
    {
        /* write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter names (firstName lastName): End Customer
    
    Enter names (firstName lastName): SC Hui
    Enter account number: 123
    Enter balance: 6789.89
    Customer record: SC Hui 123 6789.890000
    Enter names (firstName lastName): FY Tan
    Enter account number: 13
    Enter balance: 69.89
    Customer record: FY Tan 13 69.890000
    Enter names (firstName lastName): End Customer
	```

5. (**SCphoneBook**) Write a C program that implements the following two functions. The function **readin()** reads a number of persons' names and their corresponding telephone numbers, passes the data to the caller via the parameter p, and returns the number of names that have entered. The character '**#**' is used to indicate the end of user input. The function **search()** finds the telephone number of an input name _target_, and then prints the name and telephone number on the screen. If the input name cannot be found, then it will print an appropriate error message. The prototypes of the two functions are given below: 
	
	```
    int readin(PhoneBk *p);
    void search(PhoneBk *p, int size, char *target):
	```
	
	The structure definition for _PhoneBk_ is given below: 
	
	```
    typedef struct {
        char name[20];
        char telno[20];
    } PhoneBk;
	```
	
	You are required to implement the two functions. Write a C program to test the functions.
	
	A sample program to test the functions is given below: 
	
	```
    #include <stdio.h>
    #include <string.h>
    #define MAX 100
    typedef struct {
        char name[20];
        char telno[20];
    } PhoneBk;
    int readin(PhoneBk *p);
    void search(PhoneBk *p, int size, char *target);
    int main()
    {
        PhoneBk s[MAX];
        char t[20];
        int size;
        size = readin(s);
        printf("Enter search name: ");
        gets(t);
        search(s,size,t);
        return 0;
    }
    int readin(PhoneBk *p)
    {
        /* write your code here */
    }
    void search(PhoneBk *p, int size, char *target)
    {
        /* write your code here */
    }
    ```
	
	A test input and output session is given below: 
	
	```
    Enter name: Hui Siu Cheung
    Enter tel: 1234567
    Enter name: Philip Fu
    Enter tel: 2345678
    Enter name: Chen Jing
    Enter tel: 3456789
    Enter name: #
    Enter search name: Philip Fu
    Name = Philip Fu, Tel = 2345678
    
    Enter name: Hui Siu Cheung
    Enter tel: 1234567
    Enter name: Chen Jing
    Enter tel: 3456789
    Enter name: #
    Enter search name: Philip Fu
    Name not found!
	```
6. (**SCmayTakeLeave**) Given the following information, write the code for the functions **getInput()**, **mayTakeLeave()** and **printList()**.
	
	```
    typedef struct {
        int id; /* staff identifier */
        int totalLeave; /* the total number of days of leave allowed */
        int leaveTaken; /* the number of days of leave taken so far */
    } leaveRecord;
	```
	
	* **(a) void getInput(leaveRecord list\[ \], int \*n);**
		
		Each line of the input has three integers representing one staff identifier, his/her total number of days of leave allowed and his/her number of days of leave taken so far respectively. The function will read the data into the array **list** until end of input and returns the number of records read through **n** The function prototype is given as follows: 
	
	* **(b) int mayTakeLeave(leaveRecord list\[ \], int id, int leave, int n);**
		
		It returns 1 if a leave application for **leave** days is approved. Staff member with identifier **id** is applying for **leave** days of leave. **n** is the number of staff in **list**. Approval will be given if the leave taken so far plus the number of days applied for is less than or equal to his total number of **leave** days allowed. If approval is not given, it returns 0. It will return -1 if no one in **list** has identifier **id**.
		
	* **(c) void printList(leaveRecord list\[ \], int n);**
		
		It prints the **list** of leave records of each staff. **n** is the number of staff in **list**.
	
	The functions **getInput()** and **printList()** are provided. Write a C program to test the function **mayTakeLeave()**.
	
	A sample program to test the functions is given below: 
	
	```
    #include <stdio.h>
    typedef struct {
        int id; /* staff identifier */
        int totalLeave; /* the total number of days of leave allowed */
        int leaveTaken; /* the number of days of leave taken so far */
    } leaveRecord;
    int mayTakeLeave(leaveRecord list[], int id, int leave, int n);
    void getInput(leaveRecord list[], int *n);
    void printList(leaveRecord list[], int n);
    int main()
    {
        leaveRecord listRec[10];
        int len;
        int id, leave, canTake=-1;
        
        getInput(listRec, &len);
        printList(listRec, len);
        printf("Please input id, leave to be taken: ");
        scanf("%d %d", &id, &leave);
        canTake = mayTakeLeave(listRec, id, leave, len);
        if (canTake != 0)
            printf("The staff %d can take leave\n", id);
        else
            printf("The staff %d cannot take leave\n", id);
        return 0;
    }
    void getInput(leaveRecord list[], int *n)
    {
        int total;
        
        *n = 0;
        printf("Enter the number of staff records: ");
        scanf("%d", &total);
        while ( (*n) != total) {
            printf("Enter id, totalleave, leavetaken: ");
            scanf("%d %d %d", &list[*n].id, &list[*n].totalLeave,&list[*n].leaveTaken);
            (*n)++;
        }
    }
    void printList(leaveRecord list[], int n)
    {
        int p;
        
        printf("The staff list:\n");
        for (p = 0; p < n; p++)
            printf ("id = %d, totalleave = %d, leave taken = %d\n",
                list[p].id, list[p].totalLeave, list[p].leaveTaken);
    }
    int mayTakeLeave(leaveRecord list[], int id, int leave, int n)
    {
        /* write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter the number of staff records: 2
    Enter id, totalleave, leavetaken: 11 28 25
    Enter id, totalleave, leavetaken: 12 28 6
    The staff list:
    id = 11, totalleave = 28, leave taken = 25
    id = 12, totalleave = 28, leave taken = 6
    Please input id, leave to be taken: 11 6
    The staff 11 cannot take leave
    
    Enter the number of staff records: 2
    Enter id, totalleave, leavetaken: 11 28 25
    Enter id, totalleave, leavetaken: 12 28 6
    The staff list:
    id = 11, totalleave = 28, leave taken = 25
    id = 12, totalleave = 28, leave taken = 6
    Please input id, leave to be taken: 12 6
    The staff 12 can take leave
	```

## Section D \[Answer 1 Specified Question from this Section\]

1. (**SDrSumup2**) A **recursive** function **sumup()** is defined as follows: 
	
	```
    sumup(1) = 1
    sumup(n) = n + sumup(n-1)        if n > 1
	```
	
	Write a recursive function rSumup2() to implement the function. The function rSumup2() computes and returns the result through the parameter result. The function prototype is given as follows: 
	
	```
    void rSumup2(int n, int *result);
	```
	
	Write a C program to test the function.
	
	A sample program to test the function is given below: 
	
	```
    #include <stdio.h>
    void rSumup2(int n, int *result);
    int main()
    {
        int n, result;
        printf("Enter a number: ");
        scanf("%d", &n);
        rSumup2(n, &result);
        printf("rSumup2(): %d",result);
        return 0;
    }
    void rSumup2(int n, int *result)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter a number: 5
    rSumup2(): 15
    
    Enter a number: 10
    rSumup2(): 55
	```

2. (**SDrNumDigits1**) Write a **recursive** function **rNumDigits1()** that counts the number of digits for a non-negative integer. For example, 1234 has 4 digits. The function **rNumDigits1()** returns the result. The function prototype is: 
	
	```
    int rNumDigits1(int num);
	```
	
	Write a C program to test the function.
	
	A sample program to test the function is given below: 
	
	```
    #include <stdio.h>
    int rNumDigits1(int num);
    int main()
    {
        int number;
        
        printf("Enter a number: ");
        scanf("%d", &number);
        printf("rNumDigits1(): %d\n", rNumDigits1(number));
        return 0;
    }
    int rNumDigits1(int num)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter a number: 1234
    rNumDigits1(): 4
    
    Enter a number: 1234567
    rNumDigits1(): 7
	```

3. (**SDrDigitPos2**) Write a **recursive rDigitPos2()** function that returns the position of the first appearance of a specified digit in a positive number. The position of the digit is counted from the right and starts from 1. If the required digit is not in the number, the function should return 0. The function **rDigitPos2()** returns the result through the parameter **pos**. For example, if **num** is 42345 and **digit** is 4, then the function returns 2, and if **num** is 123, and **digit** is 6, then the function returns 0. The function prototype is: 
	
	```
    void rDigitPos2(int num, int digit, int *pos);
	```
	
	Write a C program to test the function.
	
	A sample program to test the function is given below: 
	
	```
    #include <stdio.h>
    void rDigitPos2(int num, int digit, int *pos);
    int main()
    {
        int number;
        int digit, result;
        
        printf("Enter a number: ");
        scanf("%d", &number);
        printf("Enter the digit: ");
        scanf("%d", &digit);
        rDigitPos2(number, digit, &result);
        printf("rDigitPos2(): %d", result);
        return 0;
    }
    void rDigitPos2(int num, int digit, int *pos)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter a number: 42345
    Enter the digit: 4
    rDigitPos2(): 2
    
    Enter a number: 123
    Enter the digit: 6
    rDigitPos2(): 0
	```

4. (**SDrSquare1**) Write a **recursive** function **rSquare1()** that returns the square of a positive integer number **num**, by computing the sum of odd integers starting with 1. The result is returned to the calling function. For example, if **num** is 4, then the function will return 16 (i.e. 1 + 3 + 5 + 7); if **num** is 5, then the function will return 25 (i.e. 1 + 3 + 5 + 7 + 9). The function prototype is: 
	
	```
    int rSquare1(int num);
	```
	
	Write a C program to test the functions.
	
	A sample program to test the function is given below: 
	
	```
    #include <stdio.h>
    int rSquare1(int num);
    int main()
    {
        int x;
		
        printf("Enter a number: ");
        scanf("%d", &x);
        printf("rSquare1(): %d", rSquare1(x));
        return 0;
    }
    int rSquare1(int num)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter a number: 4
    rSquare1(): 16
    
    Enter a number: 5
    rSquare1(): 25
	```

5. (**SDrCountZeros2**) Write a **recursive** C function **rCountZeros2()** that counts the number of zeros in a specified positive number **num**. The function passes the result to the calling function through the pointer parameter, **result**. For example, **rCountZeros(105006)** returns 3 and **rCountZeros(1357)** returns 0. The function prototype is given as follows: 
	
	```
    int rCountZeros2(int num, int *result);
	```
	
	Write a C program to test the function.
	
	A sample program to test the function is given below: 
	
	```
    #include <stdio.h>
    int rCountZeros2(int num, int *result);
    int main()
    {
        int number, result;
        printf("Enter a number: ");
        scanf("%d", &number);
        rCountZeros2(number,&result);
        printf("rCountZeros2(): %d\n", result);
        return 0;
    }
    int rCountZeros2(int num, int *result)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter a number: 10503
    rCountZeros2(): 2
    
    Enter a number: 23453
    rCountZeros2(): 0
	```

6. (**SDrCountArray**) Write a **recursive** C function **rCountArray()** that returns the number of times the
integer **a** appears in the array which has **n** integers in it. Assume that **n** is greater than or equal to 1. The
function prototype is: 
	
	```
    int rCountArray(int array[ ], int n, int a);
	```
	
	Write a C program to test the function.
	
	A sample program to test the function is given below: 
	
	```
    #include <stdio.h>
    #define SIZE 20
    int rCountArray(int array[], int n, int a);
    int main()
    {
        int array[SIZE];
        int index, count, target, size;
        
        printf("Enter array size: ");
        scanf("%d", &size);
        printf("Enter %d numbers: ", size);
        for (index = 0; index < size; index++)
            scanf("%d", &array[index]);
        printf("Enter the target: ");
        scanf("%d", &target);
        count = rCountArray(array, size, target);
        printf("rCountArray(): %d\n", count);
        return 0;
    }
    int rCountArray(int array[], int n, int a)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter array size: 10
    Enter 10 numbers: 1 2 3 4 5 5 6 7 8 9
    Enter the target number: 5
    rCountArray() = 2
    
    Enter array size: 5
    Enter 10 numbers: 1 2 3 4 5
    Enter the target number: 8
    rCountArray() = 0
	```

## Section E \[Answer 1 Specified Question from this Section\]

1. (**SEspecialNumbers**) Write a C function **specialNumbers()** that takes an array of integers **ar**, **limit** and **size** as parameters. The parameter **size** is declared as a pointer to integer which indicates the size of the array storing the special numbers. The function computes special numbers up to **limit**. A special number is a 3 digit positive integer, in which the sum of the cubes of each digit is equal to the number. For example, the number 407 is a special number as 407 = 4×4×4 + 0×0×0 + 7×7×7. The prototype of the function is given as follow: 
	
	```
    void specialNumbers(int ar[], int limit, int *size);
	```
	
	Write a C program to test the function.
	
	A sample program to test the function is given below: 
	
	```
    #include <stdio.h>
    void specialNumbers(int ar[], int limit, int *size);
    int main()
    {
        int a[20],i,limit,size=0;
        printf("Enter the limit: ");
        scanf("%d",&limit);
        specialNumbers(a, limit, &size);
        printf("specialNumbers(): ");
        for (i=0; i<size; i++)
            printf("%d ",a[i]);
        return 0;
    }
    void specialNumbers(int ar[], int limit, int *size)
    {
        /* Write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter the limit: 300
    specialNumbers(): 153
    
    Enter the limit: 1000
    specialNumbers(): 153 370 371 407
	```

2. (**SEminOfMax**) Write a C function **minOfMax()** that takes a 4x4 two-dimensional array matrix of integer numbers **ar** as a parameter. The function returns the minimum of the maximum numbers of each row of a 2-dimensional array. For example, if **ar** is {{1,3,5,2},{2,4,6,8},{8,6,4,9}, {7,4,3,2}}, then the maximum numbers will be 5, 8, 9 and 7 for rows 0, 1, 2 and 3 respectively, and the minimum of the maximum numbers will be 5. The prototype of the function is given as follows: 
	
	```
    int minOfMax(int ar[4][4]);
	```
	
	Write a C program to test the function.
	
	A sample program to test the function is given below: 
	
	```
    #include <stdio.h>
    int minOfMax(int ar[4][4]);
    int main() {
        int a[4][4],row,col,min;
        
        printf("Enter a matrix (4x4): \n");
        for (row=0; row<4; row++)
            for (col=0; col<4; col++)
                scanf("%d", &a[row][col]);
        min=minOfMax(a);
        printf("Minimum is: %d\n", min);
        return 0;
    }
    int minOfMax(int ar[4][4])
    {
        /* write your code here */
    }
    ```
	
	Some sample input and output sessions are given below: 
	
	```
    Enter a matrix (4x4):
    1 3 5 2
    2 4 6 8
    8 6 4 9
    7 4 3 2
    minOfMax(): 5
    
    Enter a matrix (4x4):
    1 2 3 -4
    -2 -3 -5 -6
    3 5 7 8
    1 2 3 4
    minOfMax(): -2
	```

3. (**SEmergeStr**) Write a C function **mergeStr()** that merges two alphabetically ordered character strings **a** and **b** into character string **c** according to alphabetical order. For example, if **a** is "**agikmpq**" and **b** is "**bcdefhjlnr**", then the string c will be "**abcdefghijklmnpqr**". The string **c** will be passed to the caller via call by reference. The function prototype is given as follows: 
	
	```
    void mergeStr(char *a, char *b, char *c);
	```
	
	Write a C program to test the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    void mergeStr(char *a, char *b, char *c);
    int main()
    {
        char a[80],b[80];
        char c[80];
        
        printf("Enter first string: ");
        gets(a);
        printf("Enter second string: ");
        gets(b);
        mergeStr(a,b,c);
        printf("mergeStr(): ");
        puts(c);
        return 0;
    }
    void mergeStr(char *a, char *b, char *c)
    {
        /* Write your code here */
    }
    ```
	
	Some test input and output sessions are given below: 
	
	```
    Enter first string: ace
    Enter second string: bdg
    mergeStr(): abcdeg
    
    Enter first string: agikmpq
    Enter second string: bcdefhjlnr
    mergeStr(): abcdefghijklmnpqr
	```

4. (**SEcountSubstr**) Write a C function **countSubstr()** that takes in two parameters **str** and **substr**, and counts the number of substring **substr** occurred in the character string **str**. If the **substr** is not contained in **str**, then it will return 0. The function prototype is given as follows: 
	
	```
    int countSubstr(char str[ ], char substr[ ]);
	```
	
	Write a C program to test the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    int countSubstr(char str[], char substr[]);
    int main()
    {
        char str[80],substr[80];
        printf("Enter the string: ");
        gets(str);
        printf("Enter the substring: ");
        gets(substr);
        printf("countSubstr(): %d\n", countSubstr(str, substr));
        return 0;
    }
    int countSubstr(char str[], char substr[])
    {
        /* Write your code here */
    }
    ```
	
	Some test input and output sessions are given below: 
	
	```
    Enter the string: abcdef
    Enter the substring: dd
    countSubstr(): 0
    
    Enter the string: abababcdef
    Enter the substring: ab
    countSubstr(): 3
	```

5. (**SEencodeChar**) Write a function **encodeChar()** that accepts two character strings **s** and **t** as parameters, encodes the characters in **s** to **t**, and passes the encoded string **t** to the caller via call by reference. During the encoding process, each _source_ character is converted into the corresponding _code_ character based on the following rules: 'a'→'d'; 'b'→'z'; 'z'→'a'; and 'd'→'b'. For other source characters, the _code_ will be the same as the _source_. For example, if the character string s is "_abort_", then the encoded string t will be "_dzort_". The structure Rule is defined below: 
	
	```
    typedef struct {
        char source;
        char code;
    } Rule;
	```
	
	The function prototype is given below: 
	
	```
    void encodeChar(char *s, char *t);
	```
	
	Write a C program to test the function.
	
	A sample template for the program is given below: 
	
	```
    #include <stdio.h>
    typedef struct {
        char source;
        char code;
    } Rule;
    void encodeChar(char *s, char *t);
    int main()
    {
        char s[80],t[80];
        printf("Source string: ");
        scanf("%s", s);
        encodeChar(s,t);
        printf("Encoded string: %s", t);
        return 0;
    }
    void encodeChar(char *s, char *t)
    {
        /* Write your code here */
    }
    ```
	
	Some test input and output sessions are given below: 
	
	```
    Source string: abort
    Encoded string: dzort
    
    Source string: fgh
    Encoded string: fgh
	```

6. (**SErLookupAr**) A function called **rLookupAr()** takes in three parameters, **array**, **size** and **target**, and returns the subscript of the ___last appearance___ of a number in the array. The parameter **size** indicates the size of the array. For example, if **array** is {2,1,3,2,4} and **target** is 3, it will return 2. With the same array, if **target** is 2, it will return 3. If the required number is not in the array, the function will return –1. The function prototype is given below.
	
	```
    int rLookupAr(int array[], int size, int target);
	```
	
	Write a C program to test the function.
	
	A sample C program to test the function is given below: 
	
	```
    #include <stdio.h>
	int rLookupAr(int array[], int size, int target);
	int main()
	{
	    int numArray[80];
		int target, i, size;
		
		printf("Enter array size: ");
		scanf("%d", &size);
		printf("Enter %d numbers: ", size);
		for (i=0; i < size; i++)
		    scanf("%d", &numArray[i]);
		printf("Enter the target number: ");
		scanf("%d", &target);
		printf("rLoopupAr(): %d", rLookupAr(numArray, size, target));
		return 0;
	}
	int rLookupAr(int array[], int size, int target)
	{
	    /* Write your code here */
	}
    ```
	
	A sample input and output session is given below: 
	
	```
    Enter array size: 5
	Enter 5 numbers: 2 1 3 2 4
	Enter the target number: 2
	rLookupAr() = 3
	
	Enter array size: 5
	Enter 5 numbers: 2 1 3 2 4
	Enter the target number: 5
	rLookupAr() = -1
	```
