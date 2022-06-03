#include<iostream>
#include<vector>
#include<cmath>
const int MAX_SYMBOLS=5,MAX_EXPR_SIZE=20;
using namespace std;

struct Symbol{
    char name; bool value; vector<int> permutate;
    int s_index,e_index;
};


class BooleanExpr{
    private:
        int symbol_cnt; int expr_len; int no_of_symbols; int max; 
        Symbol symbols[MAX_SYMBOLS];
        char expr[MAX_EXPR_SIZE];
    public:
        BooleanExpr(){

        }
    void symbol_permutator(Symbol symbols[MAX_SYMBOLS],int no_of_symbols, int max){
        // int x[no_of_symbols];
        // for(int i=0; i<no_of_symbols; i++){
        //     x[i]=0;
        // }
        // for(int i=0; i<no_of_symbols; i++){                         // setting all permutate values to 0
        //     for(int j=0; j<max; j++){
        //         symbols[i].permutate.push_back(0);
        //     }
        // }
        // for(int j=0; j<max; j++){                                    // setting all permutate values
        //     for(int i=0; i<no_of_symbols; i++){                      
        //         int lambda=0.5+pow(2,no_of_symbols-i-1);
        //         symbols[i].permutate[j]=x[i];
        //         if(j>0 && (j+1)%lambda==0){
        //             x[i]=1-x[i];
        //         }
        //     }
        // }
        int x[no_of_symbols];
        for(int i=0; i<no_of_symbols; i++){
            x[i]=0;
        }
        for(int i=0; i<no_of_symbols; i++){                         // setting all permutate values to 0
            for(int j=0; j<max; j++){
                symbols[i].permutate.push_back(0);
            }
        }
        for(int j=0; j<max; j++){                                    // setting all permutate values
            for(int i=no_of_symbols-1,k=j; i>=0; i--){                      
                symbols[i].permutate[j]=k%2;
                k/=2;
            }
        }
    }
    int exp_val(int row_num,char expr[],int expr_len,int no_of_symbols,Symbol symbols[]){
        int ignored[expr_len];
        for(int i=0; i<expr_len; i++){
            ignored[i]=0;
        }
        
        int index_of_symbols[no_of_symbols]; 
        for(int i=0,k=0; i<expr_len; i++){
            if(expr[i]!=33 && expr[i]!=43 && expr[i]!=42){
                index_of_symbols[k]=i; 
                if(expr[i-1]==33){
                    for(int p=0; p<symbols[k].permutate.size(); p++){
                        symbols[k].permutate[p]=1-symbols[k].permutate[p];
                    }
                    ignored[i-1]=1;
                }
                k++;
            }
        }
        for(int i=0; i<expr_len; i++){
            if(expr[i]==42 && ignored[i]==0){
                // OR operator
                int k1=i-1,k2=i+1;
                while(ignored[k1]){
                    k1--;
                }
                while(ignored[k2]){
                    k2++;
                }
                int alpha,beta;
                for(int q=0; q<no_of_symbols; q++){
                    if(symbols[q].e_index==k1){
                        alpha=symbols[q].s_index;
                    }
                    if(symbols[q].e_index==k2){
                        beta=symbols[q].s_index;
                    }
                }
                // cout<<"check1"<<endl;
                expr[k1]=symbols[alpha].permutate[row_num]+symbols[beta].permutate[row_num]-symbols[alpha].permutate[row_num]*symbols[beta].permutate[row_num];
                // cout<<"check2"<<endl;
                ignored[i]=1; ignored[k2]=1;
            }
            if(expr[i]==43 && ignored[i]==0){
                // OR operator
                int k1=i-1,k2=i+1;
                while(ignored[k1]){
                    k1--;
                }
                while(ignored[k2]){
                    k2++;
                }
                int alpha,beta;
                for(int q=0; q<no_of_symbols; q++){
                    if(symbols[q].e_index==k1){
                        alpha=symbols[q].s_index;
                    }
                    if(symbols[q].e_index==k2){
                        beta=symbols[q].s_index;
                    }
                }
                expr[k1]=symbols[alpha].permutate[row_num]*symbols[beta].permutate[row_num];
                ignored[i]=1; ignored[k2]=1;
            }
        }
        if(expr[0]==43){
            return expr[1];
        }
        else{
            return expr[0];
        }
    }
        void read_expr(char* ex,int expr_size, char* sym, int symbols_size){
            for(int i=0; i<expr_size; i++){
                expr[i]=*(ex+i);
            }
            for(int i=0; i<symbols_size; i++){
                symbols[i].name=*(sym+i);
                symbols[i].s_index=i;
            }
            int i_old=-1;
            for(int j=0; j<symbols_size; j++){
                for(int i=i_old+1; i<expr_size; i++){
                    if(expr[i]!=42 && expr[i]!=43 && expr[i]!=33){
                        symbols[j].e_index=i; i_old=i; break;
                    }
                }
            }

            no_of_symbols=symbols_size; expr_len=expr_size;
            max=0.5+pow(2,symbols_size);
            
            symbol_permutator(symbols, no_of_symbols, max);
        }
        void print_truth_table(){
            for(int i=0; i<no_of_symbols; i++){
                cout<<symbols[i].name<<" ";
            }
            cout<<"-> (";
            for(int i=0; i<expr_len; i++){
                cout<<expr[i];
            }
            cout<<")"<<endl;
            for(int i=0; i<max; i++){
                for(int j=0; j<no_of_symbols; j++){
                    cout<<symbols[j].permutate[i]<<" ";
                }
                cout<<"-> "<<exp_val(i,expr,expr_len,no_of_symbols,symbols)<<endl;
            }
        }
};