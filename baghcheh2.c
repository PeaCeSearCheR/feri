    #include<stdio.h>
    #include<math.h>
    double length(double  x1,double y1,double x2,double y2){

        double ab = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        return ab;
    }

        double area(double  x1,double y1,double x2,double y2,double x3,double y3){
                double s;
                double ab= length(x1,y1,x2,y2);
                double bc= length(x2,y2,x3,y3);
                double ac= length(x3,y3,x1,y1);

                double  p =(((ab+bc+ac)*1/2));
                    s=sqrt(p*(p-ab)*(p-ac)*(p-bc));
                    return s;

    }
    double max(double a,double b){
           double max;
            if(b>=a)
            max=b;
            else
                max=a;

            return max;
    }



    int main(){
        int number ,x1,y1,x2,x3,x4,y2,y3,y4;
        double s ,p,ratio,maxratio=0;

            scanf("%d\n",&number);
            for (int i=1;i<=number;i++)
                {

                    scanf("%d %d\n",&x1,&y1);
                    scanf("%d %d\n",&x2,&y2);
                    scanf("%d %d\n",&x3,&y3);
                    scanf("%d %d",&x4,&y4);

                    s= area(x1,y1,x2,y2,x3,y3)+area(x1,y1,x3,y3,x4,y4);
                    p= (length(x1,y1,x2,y2)+length(x3,y3,x2,y2)+length(x3,y3,x4,y4)+length(x4,y4,x1,y1));
                    ratio= s/p;
                    if (ratio>=maxratio)
                        maxratio=ratio;
                    printf("%.2lf\n",s);
                    printf("%.2lf\n",p);
                                        s= area(x1,y1,x2,y2,x3,y3)+area(x1,y1,x3,y3,x4,y4);
                    p= (length(x1,y1,x2,y2)+length(x3,y3,x2,y2)+length(x3,y3,x4,y4)+length(x4,y4,x1,y1));
                    ratio= s/p;
                    if (ratio>=maxratio)
                        maxratio=ratio;
                    printf("%.2lf\n",s);
                    printf("%.2lf\n",p);


                }
                printf("%.2lf",maxratio);

    return 0;
    }

