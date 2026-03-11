#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    char str[n + 1]; // 为字符串结束符留出空间
    scanf("%s", str);
    
    int k = n - m; // 需要保留的字符数
    char result[k + 1]; // 保存最终结果，预留结束符位置
    bool used[n]; // 标记字符是否已被使用
    for (int i = 0; i < n; i++) {
        used[i] = false; // 初始化标记数组
    }
    
    int lastPos = 0; // 记录当前已选字符在原字符串中的位置
    int resultIndex = 0; // 结果字符串的索引
    
    // 依次选择k个字符
    for (int i = 0; i < k; i++) {
        char minChar = 'z' + 1; // 初始化为较大的字符
        int minIndex = -1;
        
        // 在可选的范围内查找最小的字符
        // 可选范围：从lastPos到n-(k-resultIndex)
        for (int j = lastPos; j <= n - (k - resultIndex); j++) {
            if (!used[j] && str[j] < minChar) {
                minChar = str[j];
                minIndex = j;
            }
        }
        
        // 将找到的最小字符加入结果
        if (minIndex != -1) {
            result[resultIndex++] = minChar;
            used[minIndex] = true;
            lastPos = minIndex + 1; // 更新查找起点
        }
    }
    
    result[resultIndex] = '\0'; // 添加字符串结束符
    printf("%s", result);
    
    return 0;
}