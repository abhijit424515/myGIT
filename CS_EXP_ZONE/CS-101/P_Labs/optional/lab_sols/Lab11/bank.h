#include <iostream>
#define MAX_USERS 10
#define MAX_TXNS 3
#define MAX_REQS 10

struct Transaction{
    int user_id;
    bool is_deposit;
    int amount;
    int balance;

    Transaction(){
        user_id = -1;
        is_deposit = false;
        amount = 0;
        balance = 0;
    }

    void print(){
        std::cout << user_id << " " << (is_deposit ? "deposit" : "withdraw") << " " << amount << " " << balance << std::endl;
    }
};

struct User{
    int id;
    int balance;
    int n_txns;
    int n_deposits;
    int n_withdrawals;
    Transaction txns[MAX_TXNS];

    User(){
        id = -1;
        balance = 0;
        n_txns = 0;
        n_deposits = 0;
        n_withdrawals = 0;
    }

    int deposit(int amount){
        balance += amount;
        updateTxn(amount, true);
        n_deposits++;
        return 0;
    }

    int withdraw(int amount){
        if(balance < amount){
            return -1;
        }
        balance -= amount;
        updateTxn(amount, false);
        n_withdrawals++;
        return 0;
    }

    void add_txn(Transaction txn){
        n_txns = std::min(n_txns+1, MAX_TXNS);

        for(int i=n_txns-1; i>=1; i--){
            txns[i] = txns[i-1];
        }

        txns[0] = txn;
    }

    void updateTxn(int amount, bool is_deposit){
        Transaction txn;
        txn.amount = amount;
        txn.is_deposit = is_deposit;
        txn.balance = balance;
        txn.user_id = id;
        add_txn(txn);
    }

    void print_history(){
        for(int i=0; i<n_txns; i++){
            txns[i].print();
        }
    }

};

struct Request{
    int user_id;
    bool is_deposit;
    int amount;

    void print(){
        std::cout << user_id << " " << (is_deposit ? "deposit" : "withdraw") << " " << amount << std::endl;
    }

};

struct Bank{
    int n_users;
    User users[MAX_USERS];
    int n_reqs;
    Request reqs[MAX_REQS];

    Bank(){
        n_users = 0;
        n_reqs = 0;
    }

    int add_user(int init_bal){
        if(n_users == MAX_USERS)
            return -1;
        users[n_users].id = n_users;
        users[n_users].balance = init_bal;
        users[n_users].n_txns = 0;
        users[n_users].n_deposits = 0;
        users[n_users].n_withdrawals = 0;
        n_users++;
        return 0;
    }

    void add_request(int user_id, bool is_deposit, int amount){
        Request req;
        req.user_id = user_id;
        req.amount = amount;
        req.is_deposit = is_deposit;

        if(n_reqs == MAX_REQS){
            return;
        }

        reqs[n_reqs] = req;
        n_reqs++;
    }

    void print_requests(){
        for(int i=0; i<n_reqs; i++){
            reqs[i].print();
        }
    }

    int get_balance(int user_id){
        if(user_id < 0 || user_id >= n_users)
            return -1;
        return users[user_id].balance;
    }

    int get_num_withdrawals(int user_id){
        return users[user_id].n_withdrawals;
    }

    int get_num_deposits(int user_id){
        return users[user_id].n_deposits;
    }

    void deposit(int user_id, int amount){
        if(user_id < 0 || user_id >= n_users)
            return;
        users[user_id].deposit(amount);
    }

    void withdraw(int user_id, int amount){
        if(user_id < 0 || user_id >= n_users)
            return;
        users[user_id].withdraw(amount);
    }

    void print_user_history(int user_id){
        if(user_id < 0 || user_id >= n_users)
            return;
        users[user_id].print_history();
    }

};
