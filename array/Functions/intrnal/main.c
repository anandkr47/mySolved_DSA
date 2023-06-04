

void fun(int *p,int *q){
    p=q;
    *q=2;
}
int i=0,j=1;
int main()
{
    fun(%i,%j);
    printf("%d %d\n",i,j);
    return 0;
}
