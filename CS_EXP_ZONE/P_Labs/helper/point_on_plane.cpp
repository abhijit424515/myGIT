#include<simplecpp>
bool point_on_plane(
    double *p1_x, double *p1_y, double *p1_z,
    double *p2_x, double *p2_y, double *p2_z,
    double *p3_x, double *p3_y, double *p3_z,
    double *q_x, double *q_y, double *q_z,
    double *dist){

    double T1 = ((*p2_y) - (*p1_y))*((*p3_z) - (*p1_z)) - ((*p3_y) - (*p1_y))*((*p2_z) - (*p1_z));
    double T2 = ((*p2_z) - (*p1_z))*((*p3_x) - (*p1_x)) - ((*p3_z) - (*p1_z))*((*p2_x) - (*p1_x));
    double T3 = ((*p2_x) - (*p1_x))*((*p3_y) - (*p1_y)) - ((*p3_x) - (*p1_x))*((*p2_y) - (*p1_y));

    *dist = ((*q_x)-(*p1_x))*T1 + ((*q_y)-(*p1_y))*T2 + ((*q_z)-(*p1_z))*T3;
    *dist /= sqrt(T1*T1 + T2*T2 + T3*T3);
    *dist = abs(*dist);

    if(dist==0){
        return true;
    }
    else{
        return false;
    }
}
