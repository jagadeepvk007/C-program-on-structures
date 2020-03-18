#include <stdio.h>
struct student
{
	char name[20];
	int usn,m1,m2,m3;
	float total,avg;
};
struct student s[10],aboveavg[10],belowavg[10];
main()
{
	int i,n,j=0,k=0;
	float tavg=0;
	printf("\nenter the number of students\n");
	scanf("%d",&n);
	printf("\nenter the students detils\n");
	 for(i=0;i<n;i++)
	 {
	  printf("enter the name of student %d\n",i+1);
	  scanf("%s",&s[i].name);
	  printf("\n enter the usn\n");
     scanf("%d",&s[i].usn );
     printf("\n enter the marks for m1,m2 and m3\n");
     scanf("%d%d%d",&s[i].m1,&s[i].m2, &s[i].m3);
    s[i].total=s[i].m1+ s[i].m2+ s[i].m3;
    s[i].avg= s[i].total/3;
    }
     for(i=0;i<n;i++) 
      {
       tavg = tavg + s[i].avg;
      }
       tavg=tavg/n;
      printf("\n total average =%f\n",tavg);
       for(i=0;i<n;i++) 
       {
        if(s[i].avg>tavg) 
          {
           aboveavg[j]=s[i]; 
           j++; 
          }

        else 
          { 
           belowavg[k]=s[i];
           k++; 
          }

        }

printf("\n students scoring above average are \n name\t\t usn\t m1\t m2\t m3\t total\t average\n");

for(i=0;i<j;i++) 
printf("\n%s\t\t%d\t%d\t%d\t%d\t%f\t%f\t\n",aboveavg[i].name,aboveavg[i].usn, aboveavg[i].m1, aboveavg[i].m2, aboveavg[i].m3, aboveavg[i].total, aboveavg[i].avg);

printf("\n students scoring below average are \n name\t\t usn\t m1\t m2\t m3\t total\t average\n"); 
for(i=0;i<k;i++)

printf("\n%s\t\t%d\t%d\t%d\t%d\t%f\t%f\t\n",belowavg[i].name, belowavg[i].usn, belowavg[i].m1, belowavg[i].m2, belowavg[i].m3, belowavg[i].total, belowavg[i].avg);

}
