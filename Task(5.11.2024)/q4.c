//Question number-4
//Date:5/11/2024

#include<stdio.h>
#include<string.h>
struct baccount
{
	char name[50];
	int account_no;
	float balance;
	char account_type;
	
	union{
		float interest_rate;
		float overdraft_limit;
	}account_info;
};


main()
{
	struct baccount account;
	printf("Enter account holder name\n");
	scanf("%s",account.name);
	
	printf("Enter account no\n");
	scanf("%d",&account.account_no);
	
	printf("Enter balance\n");
	scanf("%f", &account.balance);
	 
	printf("Enter account type(S for Savings, C for Current)\n");
    scanf(" %c", &account.account_type);
	
	if(account.account_type=='S'|| account.account_type=='s')
	{
		printf("enter interest rate for savings:");
		scanf("%f",&account.account_info.interest_rate);
	}else if(account.account_type=='C'|| account.account_type=='c')
	{
		printf("Enter overdraft limit for curent account:");
		scanf("%f",&account.account_info.overdraft_limit);
	}else{
		printf("invalid account type");
				
	}
	printf("Account Holder name:%s\n",account.name);
	printf("Account No:%d\n",account.account_no);
	printf("Balance:%2f\n",account.balance);
	
	if(account.account_type == 'S'|| account.account_type == 's')
	{
		printf("Account type:Savings\n");
		printf("Interest Rate: %2f%%\n",account.account_info.interest_rate);
		
	}
	else if(account.account_type == 'C' || account.account_type == 'c')
	{
		printf("Account type: Current\n");
		printf("Overdraft Limit: %2f\n",account.account_info.overdraft_limit);
	}
}
