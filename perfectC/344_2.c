int main(int argc, const char * argv[]) {
    // insert code here...
    for(int i=1;i<=5;i++){
        for(int j=5;j>0;j--){
            if(j>i){
                printf(" ");
            }else{
                printf("%d", j);
            }
        }
        puts("");
    }
    
}
