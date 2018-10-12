#include <stdio.h>
int main()
{
    int pen, khata, book, bag, p_total, k_total, bk_total, bg_total;
    double Total, Total_Vat, Grand_Total;
    printf("Pen Quantity:");
    scanf("%d",&pen);
    printf("Khata_Quantity:");
    scanf("%d",&khata);
    printf("Book_Quantity:");
    scanf("%d",&book);
    printf("Bag_Quantity:");
    scanf("%d",&bag);
    printf("\n");
    p_total=pen*20;
    k_total=khata*120;
    bk_total=book*150;
    bg_total=bag*350;
    Total=p_total+k_total+bk_total+bg_total;
    Total_Vat=((Total*5)/100);
    Grand_Total=Total+Total_Vat;
    printf("VAT: %.2lf\n, Total_Vat");
    printf("Grand Total: %.2lf\n\n", Grand_Total);
    if(Grand_Total>1500)
    {
        double dis=((Grand_Total*15)/100);
        printf("Discount: %.2lf\n",dis);
        printf("Payable Amount after Discount: %.2lf\n\n",Grand_Total-dis);
    }
    else
    {
        printf("Payable Amount: %.2lf\n",Grand_Total);
    }
    return 0;
}
