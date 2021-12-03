int main(int argc, char **argv)
{
    int s = 0;
    for (int i=0;i<=atoi(argv[1]);i++)
    {
        //printf("%d ->%d\n",i,s);
        s=s+(i+i*i^i)%(i+1); 
    }
    printf("%d\n",s);
}