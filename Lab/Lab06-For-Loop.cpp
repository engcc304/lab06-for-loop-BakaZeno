/*
    จงเขียนโปรแกรมรับค่าตัวเลขจากผู้ใช้ ใส่ไว้ในตัวแปร N และทำการแสดงข้อมูลดังเงื่อนไขต่อไปนี้
    - หากผู้ใช้กรอกเลขคี่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ 1 ถึง N และให้แสดงเฉพาะตัวเลขคี่เท่านั้น
    - หากผู้ใช้กรอกเลขคู่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ N ถึง 0 และให้แสดงเฉพาะตัวเลขคู่เท่านั้น

    Test case:
        Enter value:
            11
    Output:
        Series: 1 3 5 7 9 11

    Test case:
        Enter value:
            8
    Output:
        Series: 8 6 4 2 0
*/
#include <stdio.h>

int main() {
    int i=0;
    int N;
    printf("Enter value:\n");
    scanf("%d",&N);
    if(N%2 == 1){
        printf("Series: ");
        for(i=1; i<=N; i+=2){
        printf("%d ",i);
        }
    }
    else{
        printf("Series: ");
        for(i=N; i>=0; i-=2){
        printf("%d ",i);
        }
    }
    
    //--| YOUR CODE HERE

    return 0 ;
}//end main function