#include<stdio.h>
#include<string.h>

//declaring a struct to store similar information of students
struct StudentInfo{ 
        char rollno[9],name[30],mobileno[15],email[40];
        float marks;
    };

//function to print info of students
void print(struct StudentInfo si){
    printf("Name: %s\nRoll no: %s\nMarks: %.2f\nMobile no: %s\nEmail: %s\n",
            si.name,si.rollno,si.marks,si.mobileno,si.email);
    }

int studentInfoStr()
{
    // to get how much storage StudentInfo is taking
    printf("Size of struct StudentInfo is %zu bytes\n",sizeof(struct StudentInfo)); 
    
    int n; //n=no. of student details to fill
    printf("How many student details you want to enter:\n");
    scanf("%d",&n); //getting input
    struct StudentInfo si[n]; //declaring studentinfo as si[n] to n length array of name si
    //getting details of students as input
     for (int i=0;i<n;i++,printf("\n")){
        printf("Enter details of student %d:\n",i+1);
        printf("enter roll no\n"); scanf("%s",&si[i].rollno);
        printf("enter name\n"); scanf("%s",&si[i].name);
        printf("enter marks\n"); scanf("%f",&si[i].marks);
        printf("enter mobile no\n"); scanf("%s",&si[i].mobileno);
        printf("enter email\n"); scanf("%s",&si[i].email);
    }

condition: //using goto statement here to get infinte loop asing these

//asing user to input a choice number to show from following
printf("How do you want to view details of the students:\n"
       "Enter your choice\n"
       "1.To view all student details\n"
       "2.From range of sudents\n"
       "3.Show details of student with highest marks\n"
       "4.Average of marks of all students\n"
       "5.Show details of student with lowest marks\n");
int choice; 
scanf("%d",&choice); //storing choice number
//using switch for outputting specific condition
switch (choice){
    case 1:
        //function to print details of all the students 
        for (int i = 0; i < n; i++){
        printf("\nDetails of student %d:\n", i + 1);
        print(si[i]);
        }
        break;
    case 2:
        //function to print details of range of students from p to q
        int p,q;
        printf("You want details of students from\n");
        scanf("%d",&p);
        printf("to\n");
        scanf("%d",&q);
        for(p;p<=q;p++){
            printf("\nDetails of student %d:\n",p);
            print(si[p-1]);
        }
        break;
    case 3:
        //function to show details of student with highest marks
        float big=0;
        int c,temp0;
        for(c=0;c<n;c++){
            if(big<si[c].marks){
                big=si[c].marks;
                temp0=c;
            }
        }
        printf("Details of student with highest marks is:%d",temp0);
        print(si[temp0]);
        break;
    
    case 4:
        //function to print average of marks of all students
        float avg,sum;
        for(int i=0 ; i<n;i++){
            sum=sum+si[i].marks;
        }
        avg=sum/n;
        printf("The average is:%f",avg);
        break;
    
    case 5:
        //function to show details of student with lowest marks
        float small=999999999;
        int d,temp1;
        for(d=0;d<n;d++){
            if(small>si[d].marks)
            {
                small=si[d].marks;
                temp1=d;
            }}
        printf("Details of student with lowest marks is:%d\n",temp1);
        print(si[temp1]); 
        break;
    default :
        printf("Enter a valid choice");
        break;
}
printf("\n\n");
goto condition; //using goto to get infing loop of asking user to enter a choice

return 0;
}