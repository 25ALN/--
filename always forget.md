## 链表
### 插入链表
- 头插法
```c
struct List*creatlist(struct List*head){  //头插法，将数据从头开始插入链表
    struct List *prv=NULL;
    int n,x;
    head=(struct List*)malloc(sizeof(struct List));
    head->next=NULL;
    scanf("%d",&n);
    while(n>0){
        prv=(struct List*)malloc(sizeof(struct List));
        scanf("%d",&x);
        prv->val=x;
        prv->next=head->next;
        head->next=prv;
        n--;
    }
    head=head->next;
    return head;
}
```

### 反转链表
```c
Node* list_reverse(Node* head){
   Node*pre,*cur,*next;
   cur=head;
   pre=NULL,next=NULL;
   while(cur!=NULL){
      next=cur->next; // 保存下一个节点
      cur->next=pre;  // 反转当前节点的指针
      pre=cur;        // 将prev指针移动到当前节点
      cur=next;       // 将curr指针移动到下一个节点
   }
   return pre;
}
// pre即为新链表的头指针
```

### 递归删除某个节点
```c
struct ListNode* deleteNode(struct ListNode* head, int val){
   if(NULL == head) {
      return head;
   }
   head->next = deleteNode(head->next, val);
   return head->val == val ? head->next : head;
}
```

### 逆序输入链表
```c
struct ListNode *Createlist(int n) {
    struct ListNode *head = NULL;
    int value;
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        struct ListNode *new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->data = value;
        new_node->next = head;
        head = new_node;
    }
    return head;
}
```

## 辗转相除法
```c
#include <stdio.h>

int main()
{    
  int a,b,t;
  scanf("%d %d",&a,&b);
  while(b!=0){
  	t=a%b;
	a=b;
	b=t; 
  } 
  printf("%d",a);
}
```
## qsort排序(要引用stdlib头文件)
```c
int cmp(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
   int n;
   for( n = 0 ; n < 5; n++ ) {
      printf("%d ", values[n]);
   }
   qsort(values, 5, sizeof(int), cmp);
   return 0;
}
```
- 函数原型
```c
void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *));
```
- base: 指向待排序数组的第一个元素的指针。
- nitems: 数组中的元素数量。
- size: 数组中每个元素的大小（以字节为单位）。
- compar: 比较函数的指针，该函数用于比较两个元素。比较函数应当返回一个整数，表示比较结果：
- 小于零：表示第一个元素小于第二个元素。
-等于零：表示两个元素相等。
-大于零：表示第一个元素大于第二个元素。

## memset
```c
void *memset(void *str, int c, size_t n)
```
参数
- str -- 指向要填充的内存区域的指针。
- c -- 要设置的值，通常是一个无符号字符。
- n -- 要被设置为该值的字节数。

## memmove
```c
void *memmove(void *str1, const void *str2, size_t n)
```
从 str2 复制 n 个字符到 str1，但是在重叠内存块这方面，memmove() 是比 memcpy() 更安全的方法。
如果目标区域和源区域有重叠的话，memmove() 能够保证源串在被覆盖之前将重叠区域的字节拷贝到目标区域中，
复制后源区域的内容会被更改。如果目标区域与源区域没有重叠，则和 memcpy() 函数功能相同。

## calloc与malloc,realloc
C 库函数 void *calloc(size_t nitems, size_t size) 分配所需的内存空间，并返回一个指向它的指针。
malloc 和 calloc 之间的不同点是，malloc 不会设置内存为零，而 calloc 会设置分配的内存为零。
- nitems -- 要被分配的元素个数。
- size -- 元素的大小。

_注意_ ：calloc() 函数将分配的内存全部初始化为零。如果不需要初始化，可以使用 malloc() 函数代替。
另外，使用 calloc() 函数时需要注意，如果分配的内存块过大，可能会导致内存不足的问题。
因此在利用哈希时数据较大时可以使用calloc分配内存空间（力扣2958）。

realloc使用时需要有一个参数来接受返回值,例如
```c
int *temp;
temp=(int *)realloc(ans,sizeof(int)*5);
if(temp==NULL){
   free(ans);
   printf("fail");
}
ans=temp;
```

## getopt
```c
#include<unistd.h>
#include<getopt.h>  
int getopt(int argc, char * const argv[], const char *optstring);
```
char*optstring = “ab:c::”;
单个字符a         表示选项a没有参数            格式：-a即可，不加参数
单字符加冒号b:     表示选项b有且必须加参数      格式：-b 100或-b100,但-b=100错
单字符加2冒号c::   表示选项c可以有，也可以无     格式：-c200，其它格式错误

## tolower与toupper
```c
tolower //大写字母转小写
toupper //小写字母转大写
```

## color
- 字背景颜色范围:40 - 49      - 字颜色:30 - 39
40:黑                         30:黑
41:深红                       31:红
42:绿                         32:绿
43:黄色                       33:黄
44:蓝色                       34:蓝色
45:紫色                       35:紫色
46:深绿                       36:深绿
47:白色                       37:白色

1：粗体 4：下划线 
- 格式
```c
 "\033[ ; m 内容 \033[0m " 

```
## 缩进
- Ctrl + Shift + I 向后缩进 
- tab 

## &&
```
注意先判断左边再判断右边，在数组中反过来可能会遇到越界的问题
比如 if(p1>=0&&nums1[p1]>nums2[p2])不可反过来写

```
## INT_MIN 与 INT_MAX
```
二者都是宏定义,使用时需包含 #include <limits.h>  
INT_MIN 表示 int 类型能够表示的最小（最负）值,
INT_MAX 表示 int 类型能够表示的最大（最正）值。

```
## atoi
C 库函数 int atoi(const char *str) 把参数 str 所指向的字符串转换为一个整数（类型为 int 型）。

## 生成随机数
```c
int main(){
    int num;
    srand(time(NULL));
    for(int i=0;i<5;i++){
        num=random();
        printf("%d ",num%11);
    }
    return 0;
}
```
random是linux专用，它比rand质量更好

## c++
### 输入与输出
- 输入
cin >> 直接跟上变量
cout << 后面若是普通的字符串需要双引号，若是变量则不需要
换行可采用c语言中的\n或是 << endl

### 显示不同进制的控制符
dec 10进制
hex 16进制
oct 8进制
在修改格式前原来的格式一直存在
用法实例
```cpp
int main(){
   using namespace std;
   int x=42;
   cout << x <<endl; //输出42
   cout << hex;      //转化为16进制
   cout << x;        //输出2a
   cout << oct;      //转化为8进制
   cout << x;        //输出52
}
```  
## 一些常用函数
- cout.put()
用于输出一个字符
char ch；
cout.put(ch);

习惯用const来替换调c语言中的#define
static_cast<> 比传统强制类型转换更严格
auto还可自动识别类型