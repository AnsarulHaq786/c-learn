//Soulution to the leet code problem:1672
//"Richest customer wealth"
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int i,j,sum,max=0;
    for(i=0;i<accountsSize;i++)
    {
        sum=0;
        for(j=0;j<*accountsColSize;j++)
        {
            sum+=accounts[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    return max;
}