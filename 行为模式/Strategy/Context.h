#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class Strategy;

/**
 *这个类是 Strategy 模式的关键,也是 Strategy 模式和 Template 模式的根本
 第 83 页 共 171 页
 k_eckel设计模式精解-GoF 23 种设计模式解析附 C++实现源码
 http://www.mscenter.edu.cn/blog/k_eckel
 区别所在。
 *Strategy 通过“组合”(委托)方式实现算法(实现)的异构,而 Template 模
 式则采取的是继承的方式
 *这两个模式的区别也是继承和组合两种实现接口重用的方式的区别
 */
class Context {
public:
  Context(Strategy* stg);
  ~Context();
  void DoAction();

protected:

private:
  Strategy* _stg;
};

#endif //~_CONTEXT_H_
