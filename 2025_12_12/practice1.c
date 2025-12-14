//C Primer Plus P60
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

////1  此段代码由ai生成，因为我还不是特别理解整数上溢、浮点数上溢和下溢
//int main() {
//    printf("=== 综合演示：整数上溢、浮点数上溢和下溢 ===\n\n");
//
//    // 1. 整数上溢
//    printf("1. 整数上溢:\n");
//    unsigned int ui = UINT_MAX;
//    printf("   UINT_MAX = %u\n", ui);
//    printf("   UINT_MAX + 1 = %u （回绕到0）\n\n", ui + 1);
//
//    // 2. 浮点数上溢
//    printf("2. 浮点数上溢:\n");
//    float f = FLT_MAX;
//    printf("   FLT_MAX = %e\n", f);
//    f = f * 2.0f;
//    printf("   FLT_MAX * 2 = %e", f);
//    if (isinf(f)) {
//        printf(" （变为正无穷）");
//    }
//    printf("\n\n");
//
//    // 3. 浮点数下溢
//    printf("3. 浮点数下溢:\n");
//    float tiny = 1.0e-40f;
//    printf("   初始值: %e\n", tiny);
//
//    // 重复操作直到下溢
//    int steps = 0;
//    while (tiny > 0.0f && steps < 100) {
//        tiny /= 2.0f;
//        steps++;
//        if (steps % 10 == 0) {
//            printf("   第%d次除以2后: %e", steps, tiny);
//            if (tiny < FLT_MIN) {
//                printf(" （非规格化数）");
//            }
//            printf("\n");
//        }
//    }
//    printf("   最终在 %d 步后变为: %e\n", steps, tiny);
//
//    return 0;
//}

////2
//int main()
//{
//	printf("输入一个字符：\n");
//	int n = 0;
//	scanf("%d", &n);  //易错点：这里用%d
//	printf("这个字符是：%c",n); //这里显示的是字符
//
//	printf("输入一个字符：\n");
//	char n2 = 0;
//	scanf(" %c", &n2); //注意这里要加空格清除缓存区残留
//	printf("这个字符是：%d", n);  //这里显示的是ASCII码值 
//	return 0;
//}编译通过
//重点问题设计缓存区残留这个知识点我没见过，问了AI有三种解决方法
//用while (getchar() != '\n');  // 关键代码！清楚缓存区
//我用的方法 跳过空白区域
//用getchar单独处理


////3
int main()
{
	printf("\a");
	printf("Startled by the sudden sound, Sally shouted,\n");
	printf("\"By the Great Pumpkin, what was that!\"");  //转义字符的使用
	return 0;
}//编译通过

////4
//int main()
//{
//
//	return 0;
//}