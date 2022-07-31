#ifndef ATM_H
#define ATM_H

#include <stdio.h>
#include <stdlib.h>


void isfake(void);
typedef struct User
{
	int balance;
	char *acct_type;
	int *pin;
} User;
int getBalance(void);
char *getAcctType(void);
int *getPin(void);
void auth(struct User *);
struct User *bankNetwork(void);
void print_receipt(User *, int);
void vault(int);
void withdraw(User *);
void transaction(User *);
#endif /* ATM_H */
