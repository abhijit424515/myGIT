#include<iostream>
using namespace std;
struct Transaction{                                                                                         // just a screen printer
    int user_id; bool is_deposit; int amount,balance;
    void print(){
        
    }
};
struct User{
    int id,balance,n_deposits=0,n_withdrawals=0;
    int trans_ID[10],trans_amount[10],trans_is_deposit[10],bal_after_trans[10];
    int no_of_trans_done=0;

    // something more 
    int deposit(int amount){
        balance+=amount; 
        trans_ID[no_of_trans_done]=id*1000+no_of_trans_done; 
        trans_amount[no_of_trans_done]=amount; trans_is_deposit[no_of_trans_done]=1; bal_after_trans[no_of_trans_done]=balance;
        no_of_trans_done++; n_deposits++; return 0;
    }
    int withdraw(int amount){                                   // pending registry
        if(amount<=balance){                                    // pending clarification
            balance-=amount; 
            trans_ID[no_of_trans_done]=id*1000+no_of_trans_done; 
            trans_amount[no_of_trans_done]=amount; trans_is_deposit[no_of_trans_done]=0; bal_after_trans[no_of_trans_done]=balance;
            no_of_trans_done++; n_withdrawals++; return 0;
        }
        else{
            return -1;
        }
    }
    void print_history(){                                                                                   // UNUSED
        for(int i=no_of_trans_done-1; i>no_of_trans_done-4 && i>=0; i--){
            if(trans_is_deposit[i]){
                cout<<id<<" "<<"deposit"<<" "<<trans_amount[i]<<" "<<bal_after_trans[i]<<endl;
            }
            else{
                cout<<id<<" "<<"withdraw"<<" "<<trans_amount[i]<<" "<<bal_after_trans[i]<<endl;
            }
        }
    }
};
struct Request{
    int user_id,amount; bool is_deposit;
    void print(){                                                                                           // UNUSED

    }
};
struct Bank{
    int n_users=0,n_reqs=0;
    User users[10]; Request reqs[10];
    int add_user(int init_bal){
        if(n_users==10){
            return -1;
        }
        else{
            users[n_users].id=n_users; users[n_users].balance=init_bal; 
            n_users++; return 0;                // added user with proper index, filled the initial balance, and incremented n_users
        }
    }
    void add_request(int user_id, bool is_deposit, int amount){
        if(n_reqs<10){                                  // created requests with the proper info
            reqs[n_reqs].user_id=user_id;
            reqs[n_reqs].is_deposit=is_deposit;
            reqs[n_reqs].amount=amount;
            n_reqs++;
        }
    }
    int get_balance(int user_id){
        return users[user_id].balance;
    }
    int get_num_deposits(int user_id){
        return users[user_id].n_deposits;
    }
    int get_num_withdrawals(int user_id){
        return users[user_id].n_withdrawals;
    }
    void deposit(int user_id, int amount){
        users[user_id].deposit(amount);
    }
    void withdraw(int user_id, int amount){
        users[user_id].withdraw(amount);
    }
    void print_user_history(int user_id){                                                                   // INITIATER
        users[user_id].print_history();
    }
};