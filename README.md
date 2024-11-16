# CPP LEARNING
## 1. new
1. 使用new来开辟内存空间 delete来删除已开辟的空间
2. new返回的是该数据类型的指针
3. 使用delete释放数组时需要用 delete[]

## 2.引用
1. 引用必须要初始化
2. 初始化后引用就不能改了
3. 不要返回局部变量的引用
4. 返回值是引用的函数可以作左值
5. 引用的本质在C++内部的实现就是一个指针常量
6. 可以用const修饰防止形参修改实参

## 3.函数
### 1. 函数的默认参数
1. C++的函数可以有默认参数，但是从第一个默认参数开始，后面的参数都必须有默认值
2. 函数的声明和实现只能有一个有默认参数
### 2.函数的重载
1. C++的函数可以同名，提高函数的复用性。
2. 函数的重载必须在同一个作用域下，且名称相同。
3. 函数的重载要求满足函数的参数或者类型不同，或者个数不同，或者顺序不同。 **函数的返回值不能做函数重载的条件**
4. 引用可以做函数重载的条件 (const修饰与无const修饰) 传入常量区数据，调用const引用，传入其他数据，调用非const引用。
5.当重载函数有默认参数时，默认参数可能会无法重载
```c
void func2(int a,int b = 10)
{
    cout<<"func2()的调用"<<endl;
}
void func2(int a)
{
    cout<<"func2()的调用"<<endl;
}
```
`func2(int a,int b = 10)`具有一个默认参数，这使得func2(10)具有`二义性`
*****
# 类和对象
## C++ 面向对象三大特性&emsp;封装、继承、多态
## 1. 封装
### 将属性和行为写在一起，并加入一些权限控制。 ———— 类
与`struct`不同的是 类——`class`的权限是默认私有的。
通过一个类来创建一个对象的过程称为 “实例化” 。

### 访问权限
1. 公共 成员在类内可以访问 类外也可以访问
2. 保护 成员在类内可以访问 类外不可以访问 父类的保护权限，子可以访问
3. 私有 成员在类内可以访问 类外不可以访问 父类的私有权限，子也不可以访问 (继承)
### 构造函数和析构函数
#### 使用`构造函数`来初始化，`析构函数`来清理。 构造函数和析构函数由编译器自动调用 但如果不自己实现，调用的是空实现。
##### 构造函数
不需要写返回值类型，函数名称与类相同，可以有参数，可以发生重载。 <br>
在创建对象时，程序会自动调用构造函数，不需要手动调用,并且只会调用一次
##### 析构函数
没有返回值，没有参数，函数名前要加上`~`<br>
由于不可以有参数，所以不能发生重载。<br>
和构造函数一样，析构函数会在对象销毁前自动调用析构函数。<br>
**构造和析构函数都是必须要有的** 如果自己不提供，程序会提供空实现
### 构造函数的分类
按参数：有参构造和无参构造
按类型：普通构造和拷贝构造

### 构造函数的调用方式
1. 括号法&emsp;&emsp;&emsp;`person p(10);`
2. 显示法&emsp;&emsp;&emsp;`person p = person(10);`
3. 隐式转换法&emsp;`person p = {10,"name"};`

`person(10)`创建的是一个匿名对象,匿名对象在当前行结束后就会被释放。显示法相当于给匿名对象找到一个名字。<br>
**不要利用拷贝构造函数来初始化一个匿名的对象。**

### 拷贝构造函数的调用时机
C++中拷贝构造函数的调用时机通常有三种情况
* 使用一个已经创建完的对象来初始化一个新对象`person p(p0);`
* 以值传递的方式给函数参数传参 `doWorK(p);` 值传递的本质会拷贝一个临时副本 这个过程会调用拷贝构造函数
* 以值方式返回局部对象
```cpp
Person func()
{
    person p1;
    return p1;
}
```
函数内的p1在函数运行完就会被是放掉,return 的p1是创建的新变量。
### 构造函数的调用规则
C++会为一个类提供至少三个默认函数
1. 默认构造函数(空实现)
2. 默认析构函数(空实现)
3. 默认拷贝构造函数 => 有默认内容(值拷贝)

**如果你写了一个有参构造函数,C++不会提供默认无参构造，但会提供拷贝构造函数**<br>***如果你写了一个拷贝构造函数，C++就不会再提供默认的其他构造函数了***

### 深浅拷贝
深拷贝 重新申请空间<br>
浅拷贝 直接赋值

### 初始化列表

传统操作:
```cpp
Person(int a_,int b_,int c_)
{
    a = a_;
    b = b_;
    c = c_;
}

int a;
int b;
int c;
```
```cpp
Person():a(10),b(20),c(30){}  //行参列表
    int a;
    int b;
    int c;
```

```c
Person(int a_,int b_,int c_):a(a_),b(b_),c(c_){}  //更灵活的写法
    int a;
    int b;
    int c;
```

### 类对象作为类成员
```cpp
class A{};
class B
{
    A a;
}
```

当A作为B的成员时,创建一个类B的对象,会先创建一个类A的对象 &emsp; **[先有手机后有人]** 

### 静态成员变量
* 所有对象共享同一份数据
* 在编译阶段就分配内存 (还没有运行可执行文件前已经分好了)
* 类内声明，类外初始化 (必需操作) **(static修饰的成员变量在类外初始化时分配内存)** **(静态成员并不具体作用在某个对象上)**
* 静态成员不能在类内初始化
* C++中声明和定义是有区别的，在类内进行的是成员变量的声明，而不是定义。所以在类外初始化静态成员变量时仍然要加上数据类型。
* 由于静态成员变量不属于某个类，所以他有两种访问方式
* 1.通过对象访问
* 2.通过类名访问
```cpp
person::static_member_
```
* 静态成员变量也是有访问权限的 (类外访问不到静态成员变量的内容)

### 静态成员函数

* 所有对象共享同一个函数
* 静态成员函数只能访问静态成员变量

成员函数的大小并不算在类里！成员变量和成员函数在存储上是分离的

静态成员变量的调用有两种访问方式
1. 通过对象 
2. 通过类名

**静态成员函数只能访问静态成员变量**
* 静态成员函数也是有访问权限的

### C++对象模型和this指针

C++中 只有非静态成员变量才属于类的对象上

#### 空对象占用的内存大小为 1 字节
C++编译器会给每个空对象也分配一个字节的空间，是为了区分每个对象占用的位置<br>
*不是存储对象的地址，而是把对象的地址占用住，防止别的对象存在同一地址*

<br>**在C++中,空结构体的大小也是 1**<br>
**在C语言中 空结构体的大小是 0**

static成员变量和对象中的成员变量是分开存储的，不算在对象的大小里 (存储在全局区)

### `this`指针
非静态成员函数的实例只有一份，它通过this指针来区分是哪个对象调用的自己。
用途
* 当形参和成员变量同名时，可以用this指针来区分
* 在类的非静态成员函数中返回对象本身，可用 return *this
静态成员函数不具备 `this` 指针

### 空指针访问成员函数
C++的空指针也是可以访问成员函数的
但是要判断this指针是否为空 加强代码的健壮性

### const修饰成员函数

#### 常函数:
* 成员函数后加 `const` 的函数叫做常函数
* 常函数内不可以修改成员属性
* 成员属性声明时加关键字`mutable`后，在常函数中依然可以修改
#### 常对象:
* 在声明对象时，在对象前面加`const` 来定义一个常对象
* 常对象只能调用常函数
* `mutable`在常对象下也适用 
  
在成员函数后加const修饰的其实是this指针，让指针指向的值也不可以修改

**常对象只能调用常函数的原理：常对象的`this`指针是常量指针，而`this`指针是作为`隐含参数`传给类内函数的，只有常函数的`this`指针是常量指针常量，可以接收常对象的`this`指针** *(其实就是普通指针可以向const修饰的指针转换，而const修饰的指针不能向普通指针转换)*

### 友元 `friend`
通过关键字`friend`可以让类外访问类内的私有属性 可以让一个函数或者类 访问另一个类中的私有成员
```cpp
class Friend{};

friend func();

friend Friend;

friend Friend::func();
```

### 运算符重载
**可以对已经存在的运算符进行重新定义，赋予另一种功能**
1. 加号运算符重载
2. 左移运算符重载
3. 
4. 