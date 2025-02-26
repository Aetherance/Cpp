# C++11 
## 引入了大量的新特性和语言改进。

# auto
`auto` 变量的声明必须初始化。

`auto` 变量由第一个初始化的值推导。

```cpp
auto pi = 3.14,p2 = 2.7; // 如果第一个为double类型，后面的都必须为double类型
```
# Range-based for
在C++11标准，`for`可以简写为以下形式

```cpp
for(每个元素定义 : 容器/数组)
{   
    /*循环内容*/
}
```

可以结合auto使用
```cpp
vector<int>v = {1,2,3,4,5};

for(int num : v)
{
    cout<<num<<endl;
}
```