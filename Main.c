
//Note for developer 


//*//Note for Developer
//var note 
//salary= use for input salary
//bonus = bonus of salary
//salary_notax = find salary without tax
//spouse = husband or wife
//child = member of family
//last_salary = net salary 
//salary_tax = tax salary 
//tax = tax rate
//spouse_str = for string of spouse 
//exrate= exchange rate
//suminriel= sum of salary and bonus convert from usd to riel.
//*/
#include<stdio.h>
#include<string.h>
//int spouse,inpendent,total;

//Function Prototype

void intro();
void emp_scrc();
void function_dollar();
void function_riel();

//Variable 
char spouse_str;
double salary=0, bonus=0,salary_notax=0,spouse=0,child=0,tax=0,last_salary=0,salary_tax=0,family=0,salary1=0;
double exrate=0,suminriel=0;

int main()
{
  intro();
  emp_scrc();
//  function_riel();
//  function_dollar();
	

return 0;
}
void intro() //RakSmey
{
printf("Cambodia Salary tax\n");
printf("Developed by Group 2\n");
}
void emp_scrc() //Bunrithsothy
{
	int currency;
	
	printf("Choose your currency: \n");
	printf("1.Riel\n");
	printf("2.Dollar\n");
	scanf("%d",&currency);
	
	switch(currency)
	{
		case 1: //kh
			{
				function_riel();
				break;
			}
		case 2:
			{
				function_dollar();
				break;
			}
	}
	
}
void function_riel () //1.borey //2.Pich & Hong //3.Mr.Hao
{
	
//if they choose riel 	
	printf("Enter Salary :");
	scanf("%lf",&salary);
	
	printf("Enter Bonus of salary :");
	scanf("%lf",&bonus);
	
	printf("Do you have Husband or Wife? (Y/N) \n");
	scanf(" %c",&spouse_str);
	
	printf("Enter Child :");
	scanf("%lf",&child);
	
	switch(spouse_str)
	{
		case 'y':
			{
				spouse =1;
				break;
			}
		case 'n':
			{
				spouse =0;
				break;
			}
		case 'Y':
			{
				spouse =1;
				break;	
			}
		case 'N':
			{
				spouse =0;
				break;
			}
	}	
 if (salary >= 0 && bonus >=0)
            {
                if (child >= 9)
                    child = 9;
                else if (child <= 0)
                    child = 0;
                if (spouse >= 0)
                    spouse = 1;
                else
                    spouse = 0;
                    
                family = spouse + child; //sum husband or wife and childs //family member cal

                salary_notax = 150000 * family; //find salary without tax
				
			//	salary = salary * 4000;
                salary = salary - salary_notax;


                if (salary >= 0 && salary <= 1300000)
                {
                    tax = 0.0;
                    salary_tax = salary * tax;
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary >= 1300001 && salary <= 2000000)
                {
                    tax = 0.05;
                    salary_tax = ((salary * tax) - 65000);
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary >= 2000001 && salary <= 8500000)
                {
                    tax = 0.10;
                    salary_tax = (salary * tax) - 165000;
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary >= 8500001 && salary <= 12500000)
                {
                    tax = 0.15;
                    salary_tax = (salary * tax) - 590000;
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary > 12500000)
                {
                    tax = 0.20;
                    salary_tax = (salary * tax) - 1215000;
                    //printf("Tax rate : %lf",tax);  
                }
                salary_tax += bonus * 0.2;
				
				printf("\n");
              	printf("=================\n");
              	printf("Tax rate : %lf \n",tax);  
                printf("Tax Of salary : %lfRiels\n", salary_tax);
               /// printf("Tax Of salary : %lfRiel\n",salary_tax);

                last_salary = (salary + salary_notax + bonus) - salary_tax;
                printf("Your Net Salary is :  %lfRiel\n",last_salary);
               // printf("Your Net Salary is :  %lf$\n",last_salary/4000);
            }
            else
            {
                printf("Invalid");
            }
        }
            
    void function_dollar()
	{
	printf(" Please input exchange rate: riel");
	scanf("%lf",&exrate);
	
	printf("Enter Salary : $");
	scanf("%lf",&salary);
	
	printf("Enter Bonus of salary : $");
	scanf("%lf",&bonus);
	
	printf("Do you have Husband or Wife? (Y/N) \n");
	scanf(" %c",&spouse_str);
	
	printf("Enter Child :");
	scanf("%lf",&child);
	
	switch(spouse_str)
	{
		case 'y':
			{
				spouse =1;
				break;
			}
		case 'n':
			{
				spouse =0;
				break;
			}
		case 'Y':
			{
				spouse =1;
				break;	
			}
		case 'N':
			{
				spouse =0;
				break;
			}
	}	

 if (salary >= 0 && bonus >=0)
            {
                if (child >= 9)
                    child = 9;
                else if (child <= 0)
                    child = 0;
                if (spouse >= 0)
                    spouse = 1;
                else
                    spouse = 0;
                    
                family = spouse + child; //sum husband or wife and childs //family member cal

                salary_notax = 150000 * family; //find salary without tax
               // salary_notax = salary_notax*exrate;
				suminriel= (salary+bonus)*exrate;
                salary = suminriel - salary_notax;

                if (salary >= 0 && salary <= 1300000)
                {
                    tax = 0.0;
                    salary_tax = salary * tax;
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary >= 1300001 && salary <= 2000000)
                {
                    tax = 0.05;
                    salary_tax = ((salary * tax) - 65000);
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary >= 2000001 && salary <= 8500000)
                {
                    tax = 0.10;
                    salary_tax = (salary * tax) - 165000;
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary >= 8500001 && salary <= 12500000)
                {
                    tax = 0.15;
                    salary_tax = (salary * tax) - 590000;
                    //printf("Tax rate : %lf",tax);
                }
                else if (salary > 12500000)
                {
                    tax = 0.20;
                    salary_tax = (salary * tax) - 1215000;
                    //printf("Tax rate : %lf",tax);  
                }
                salary_tax += bonus * 0.2;
				
				printf("\n");
              	printf("=================\n");
              	printf("Tax rate : %lf %\n",tax);  
                printf("Tax Of salary : %lfRiels\n", salary_tax);
               printf("Tax Of salary : %lf$\n",salary_tax*exrate);

                last_salary = (salary + salary_notax + bonus) - salary_tax;
                printf("Your Net Salary is :  %lfRiel\n",last_salary);
	            printf("Your Net Salary is : %lf ",last_salary/exrate);
        }
    }


