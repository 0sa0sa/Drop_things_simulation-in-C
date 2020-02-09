#include <stdio.h>
int main(void){
    int height,width,num;
    scanf("%d %d %d", &height, &width, &num);
    int x,y,flag = 0;
    int tate[num], yoko[num], x_i[num];
    char field[height][width];
    
    for(y=0; y<height; y++){
        for(x=0; x<width; x++){
            field[y][x] = '.';
        }
    }
    
    for(int i=0; i<num; i++){
        scanf("%d %d %d", &tate[i], &yoko[i], &x_i[i]);
    }
    
    //for(int i=0; i<num; i++)printf("%d %d %d\n", tate[i], yoko[i], x_i[i]);
    
    for(int i=0; i<num; i++){
        flag = 0;
        //printf("i = %d\n",i);
        for(int j=0; j<height; j++){
            //printf("j = %d\n",j);
            for(int k=x_i[i]; k<(x_i[i]+yoko[i]); k++){
                //printf("k = %d\n",k);
                if(j+tate[i]-1 == height-1 || field[j+tate[i]][k] == '#'){
                    
                    for(int m = j; m < j+tate[i]; m++){
                        //printf("m = %d\n",m);
                        for(int l=x_i[i]; l<x_i[i]+yoko[i]; l++){
                            //printf("l = %d\n",l);
                            field[m][l] = '#';
                        }
                        
                    }
                    //printf("置き換え発生\n");
                    flag = 1;
                    
                }
                if(flag == 1)break;
            }
            if(flag == 1)break;
        }
    /*for(y=0; y<height; y++){
        for(x=0; x<width; x++){
            printf("%c",field[y][x]);
        }
        printf("\n");
    }*/
    }
    

    
    for(y=0; y<height; y++){
        for(x=0; x<width; x++){
            printf("%c",field[y][x]);
        }
        printf("\n");
    }
    
}

