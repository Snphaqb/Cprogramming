//Write the following loop without using && or ||
//for (i=0; i<lim-1 && (c = getchar()) != '\n' && c != EOF;++i)
// s[i] = c;
int i=0, c; 
while(i < lim -1){
    if(c=getchar() == '\n')
        break;
    if(c == EOF)
        break;
    s[i] = c;
    i++;
}
