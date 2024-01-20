#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    char d2[3]={'A','B','C'};
    char d3[3]={'D','E','F'};
    char d4[3]={'G','H','I'};
    char d5[3]={'J','K','L'};
    char d6[3]={'M','N','O'};
    char d7[3]={'P','R','S'};
    char d8[3]={'T','U','V'};
    char d9[3]={'W','X','Y'};
    char st[10]="";
    int j=0;
    char input[10]="";
    fgets(input,10,stdin);
    for(int i=0;i<strlen(input);i++){
        if (isdigit(input[i])!=0){
            st[j]=input[i];
            j++;
        }
    }
    int i=0;
    char output[7]={'0','0','0','0','0','0','0'};
    for(int z=0;z<strlen(st)+1;z++){
        //int i=z;
        printf("\n");
        printf("%d\n",z);
        for(int q=0;q<3;q++){
            if(st[i]=2){
                output[i]=d2[q];
            }
            if(st[i]=3){
                output[i]=d3[q];
            }
            if(st[i]=4){
                output[i]=d4[q];
            }
            if(st[i]=5){
                output[i]=d5[q];
            }
            if(st[i]=6){
                output[i]=d6[q];
            }
            if(st[i]=7){
                output[i]=d7[q];
            }
            if(st[i]=8){
                output[i]=d8[q];
            }
            if(st[i]=9){
                output[i]=d9[q];
            }
            i++;
            for (int w=0;w<3;w++){
                if(st[i]=2){
                   output[i]=d2[w];
                }
                if(st[i]=3){
                    output[i]=d3[w];
                }
                if(st[i]=4){
                    output[i]=d4[w];
                }
                if(st[i]=5){
                    output[i]=d5[w];
                }
                if(st[i]=6){
                    output[i]=d6[w];
                }
                if(st[i]=7){
                    output[i]=d7[w];
                }
                if(st[i]=8){
                    output[i]=d8[w];
                }
                if(st[i]=9){
                    output[i]=d9[w];
                }
                i++;
                for(int e;e<3;e++){
                    if(st[i]=2){
                        output[i]=d2[e];
                    }
                    if(st[i]=3){
                        output[i]=d3[e];
                    }
                    if(st[i]=4){
                        output[i]=d4[e];
                    }
                    if(st[i]=5){
                        output[i]=d5[e];
                    }
                    if(st[i]=6){
                        output[i]=d6[e];
                    }
                    if(st[i]=7){
                        output[i]=d7[e];
                    }
                    if(st[i]=8){
                        output[i]=d8[e];
                    }
                    if(st[i]=9){
                        output[i]=d9[e];
                    }
                    i++;
                    for(int r=0;r<3;r++){
                        if(st[i]=2){
                            output[i]=d2[r];
                        }
                        if(st[i]=3){
                            output[i]=d3[r];
                        }
                        if(st[i]=4){
                            output[i]=d4[r];
                        }
                        if(st[i]=5){
                            output[i]=d5[r];
                        }
                        if(st[i]=6){
                            output[i]=d6[r];
                        }
                        if(st[i]=7){
                            output[i]=d7[r];
                        }
                        if(st[i]=8){
                            output[i]=d8[r];
                        }
                        if(st[i]=9){
                            output[i]=d9[r];
                        }
                        i++;
                        for(int t=0;t<3;t++){
                            if(st[i]=2){
                                output[i]=d2[t];
                            }
                            if(st[i]=3){
                                output[i]=d3[t];
                            }
                            if(st[i]=4){
                                output[i]=d4[t];
                            }
                            if(st[i]=5){
                                output[i]=d5[t];
                            }
                            if(st[i]=6){
                                output[i]=d6[t];
                            }
                            if(st[i]=7){
                                output[i]=d7[t];
                            }
                            if(st[i]=8){
                                output[i]=d8[t];
                            }
                            if(st[i]=9){
                                output[i]=d9[t];
                            }
                            i++;
                            for(int y=0;y<3;y++){
                                if(st[i]=2){
                                    output[i]=d2[y];
                                }
                                if(st[i]=3){
                                    output[i]=d3[q];
                                }
                                if(st[i]=4){
                                    output[i]=d4[y];
                                }
                                if(st[i]=5){
                                    output[i]=d5[y];
                                }
                                if(st[i]=6){
                                    output[i]=d6[y];
                                }
                                if(st[i]=7){
                                    output[i]=d7[y];
                                }
                                if(st[i]=8){
                                    output[i]=d8[y];
                                }
                                if(st[i]=9){
                                    output[i]=d9[y];
                                }
                                i++;
                                for(int u=0;u<3;u++){
                                    if(st[i]=2){
                                        output[i]=d2[u];
                                    }
                                    if(st[i]=3){
                                        output[i]=d3[u];
                                    }
                                    if(st[i]=4){
                                        output[i]=d4[u];
                                    }
                                    if(st[i]=5){
                                        output[i]=d5[u];
                                    }
                                    if(st[i]=6){
                                        output[i]=d6[u];
                                    }
                                    if(st[i]=7){
                                        output[i]=d7[u];
                                    }
                                    if(st[i]=8){
                                        output[i]=d8[u];
                                    }
                                    if(st[i]=9){
                                        output[i]=d9[u];
                                    }
                                    i++;
                                    for(int p=0;p<3;p++){
                                        if(st[i]=2){
                                            output[i]=d2[p];
                                        }
                                        if(st[i]=3){
                                            output[i]=d3[p];
                                        }
                                        if(st[i]=4){
                                            output[i]=d4[p];
                                        }
                                        if(st[i]=5){
                                            output[i]=d5[p];
                                        }
                                        if(st[i]=6){
                                            output[i]=d6[p];
                                        }
                                        if(st[i]=7){
                                            output[i]=d7[p];
                                        }
                                        if(st[i]=8){
                                            output[i]=d8[p];
                                        }
                                        if(st[i]=9){
                                            output[i]=d9[p];
                                        }
                                        for (int k=0;k<7;k++){
                                            printf("%c",output[k]);
                                        }
                                        printf("\n");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}