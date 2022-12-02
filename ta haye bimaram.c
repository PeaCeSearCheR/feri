#include<stdio.h>
 int main (){
     //Parallelogram,Rectangle,Diamond,Square,Kite
    int A,a,B,b,C,c,D,d,x1,x2,x3,x4,y1,y2,y3,y4,M3,M4;
        scanf("%d %d",&x1,&y1);
        scanf("%d %d",&x2,&y2);
        scanf("%d %d",&x3,&y3);
        scanf("%d %d",&x4,&y4);
        A=(x1-x2); B=(x2-x3) ;C=(x3-x4) ;D=(x4-x1);
        a=A*A; b=B*B; c=C*C; d=D*D;
    int   E=(y1-y2);
    int   F=(y2-y3);
    int   G=(y3-y4);
    int   I=(y4-y1);
      int  M1=(E/A),M2=(-B/F);M3=(G/C);M4=(-D/I);
        if(A==0)
            M1=70;
        if(B==0)
        M2=70;
        if(C==0)
        M3=70;
        if(D==0)
        M4=70;
    if(((a+(E*E))==(c+(G*G)))&&((d+(I*I))==(b+(F*F)))&&((a+(E*E))==(d+(I*I)))&&(M1==M2))
        printf("Square");
        else if (((a+(E*E))==(c+(G*G)))&&((d+(I*I))==(b+(F*F)))&&((a+(E*E)==(d+(I*I))))&&(M1!=M2))
            printf("Diamond");
        else if (((a+(E*E))==(c+(G*G)))&&((d+(I*I))==(b+(F*F)))&&((a+(E*E))!=(d+(I*I)))&&(M1==M2))
            printf("Rectangle");

            else if( ((a+(E*E)==(d+(I*I))))&&(M1!=M2))
                printf("Kite");
                else if (((a+(E*E))==(c+(G*G)))&&((d+(I*I))==(b+(F*F)))&&((a+(E*E))!=(d+(I*I)))&&(M1!=M2)&&(M3!=M4))
            printf("Parallelogram");
            else
        printf("None");

    return 0;
}
