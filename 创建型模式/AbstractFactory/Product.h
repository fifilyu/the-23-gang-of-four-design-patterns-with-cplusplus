#ifndef _PRODUCT_H_
#define _PRODUCT_H_

class AbstractProductA {
public:
  virtual ~AbstractProductA();
  virtual  void show() = 0;

protected:
  AbstractProductA();
private:
};

class AbstractProductB {
public:
  virtual ~AbstractProductB();
  virtual  void show() = 0;
protected:
  AbstractProductB();

private:
};

class ProductA1: public AbstractProductA {
public:
  ProductA1();
  ~ProductA1();
  void show();
protected:

private:

};

class ProductA2: public AbstractProductA {
public:
  ProductA2();
  ~ProductA2();
  void show();
protected:

private:
};

class ProductB1: public AbstractProductB {
public:
  ProductB1();
  ~ProductB1();
  void show();
protected:

private:
};

class ProductB2: public AbstractProductB {
public:
  ProductB2();
  ~ProductB2();
  void show();
protected:

private:
};

#endif //~_PRODUCT_H_
