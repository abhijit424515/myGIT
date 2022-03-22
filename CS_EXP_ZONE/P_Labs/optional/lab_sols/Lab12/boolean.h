#include <iostream>
using namespace std;
#define MAX_SYMBOLS 5
#define MAX_EXPR_SIZE 20

struct Symbol{
    char name;
    bool value;

    Symbol(){
        name = '#';
        value = false;
    }

    Symbol(char name, bool value){
        this->name = name;
        this->value = value;
    }
};

class BooleanExpr{
    int symbol_cnt;
    int expr_len;
    Symbol symbols[MAX_SYMBOLS];
    char expr[MAX_EXPR_SIZE];
    int idx_to_sym[MAX_EXPR_SIZE];

public:
    BooleanExpr(){
        symbol_cnt = 0;
        expr_len = 0;
    }

    void read_expr(char* expr, int expr_size, char* symbols, int symbols_size){
        symbol_cnt = symbols_size;
        for(int i = 0; i < symbols_size; i++){
            this->symbols[i].name = symbols[i];
        }

        expr_len = expr_size;
        for(int i = 0; i < expr_size; i++){
            idx_to_sym[i] = -1;
            this->expr[i] = expr[i];
            for(int j=0; j<symbols_size; j++){
                if(expr[i] == symbols[j]){
                    idx_to_sym[i] = j;
                    break;
                }
            }
        }
    }

    bool is_symbol(char c){
        for(int i = 0; i < symbol_cnt; i++){
            if(c == symbols[i].name){
                return true;
            }
        }
        return false;
    }

    void print_expr(){
        cout << "(";
        for(int i=0; i<expr_len; i++){
            cout << expr[i];
        }
        cout << ")" << endl;
    }

    bool evaluate_expr(){
        // +(AND), *(OR) and !(NOT)

        int s=0, e=2;
        int i = 0;

        Symbol temp_vals[symbol_cnt];
        for(int i=0; i<symbol_cnt; i++){
            temp_vals[i] = symbols[i];
        }

        while(e < expr_len){
            if(expr[s] == '!'){
                s++; e++;
                temp_vals[idx_to_sym[s]].value = !temp_vals[idx_to_sym[s]].value;
            }
            char op = expr[s+1];
            if(expr[e] == '!'){
                e++;
                temp_vals[idx_to_sym[e]].value = !temp_vals[idx_to_sym[e]].value;
            }

            int at_e = idx_to_sym[e];
            int at_s = idx_to_sym[s];

            if(op == '+'){
                temp_vals[at_e].value = (temp_vals[at_s].value && temp_vals[at_e].value);
            }else if(op == '*'){
                temp_vals[at_e].value = (temp_vals[at_s].value || temp_vals[at_e].value);
            }else{
                cout << "Invalid operator" << endl;
                return false;
            }

            s = e;
            e = s+2;
        }


        if(s == expr_len-1){
            return temp_vals[idx_to_sym[s]].value;
        }else if(s == expr_len-2){
            return !temp_vals[idx_to_sym[s+1]].value;
        }else{
            cout << "Invalid expression" << endl;
            return false;
        }
    }

    void print_truth_table(){
        // print header 
        for(int i=0; i<symbol_cnt; i++){
            cout << symbols[i].name << " ";
        }
        cout << "-> ";
        print_expr();


        // generate all possible combinations of 0 1 string of size symbol_cnt
        for(int i=0; i<(1<<symbol_cnt); i++){
            for(int j=symbol_cnt-1; j>=0; j--){
                symbols[j].value = (i >> (symbol_cnt-j-1)) & 1;
            }

            // cout << "here" << endl;
            // evaluate the expression
            bool result = evaluate_expr();

            // print row
            for(int j=0; j<symbol_cnt; j++){
                cout << symbols[j].value << " ";
            }
            cout << "-> " << result << endl;
        }
    }


};
