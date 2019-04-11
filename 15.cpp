 #include <stdio.h> 
 #include <stdlib.h> 
int main(void)

{
printf("判斷現在板橋高中是上學時間或放學時間");  
printf("輸入現在的時間："); 

int h,m; 

scanf("%d",&h); 
scanf("%d",&m); 

if((h==7 && m>=30)||(h>=8 && h<=16)){ 

printf("現在是上學時間\n");
}
else{
printf("現在是放學時間\n");
}
return 0 ;
}
