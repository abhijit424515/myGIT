#include<simplecpp>
main_program{
    int side_length,nsides; cin>>side_length>>nsides;   // make variables me-friendly
    turtleSim();
    repeat(nsides){
        forward(side_length); right(360.0/nsides);      // not  360/n, as we need decimals
    }
    wait(3);                                            // never forget the waiting time
}
