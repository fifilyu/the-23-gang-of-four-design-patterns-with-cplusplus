#ifndef _ADAPTER_H_
#define _ADAPTER_H_

class Target {
public:
  Target();
  virtual ~Target();
  virtual void Request();

protected:

private:
};

class Adaptee {
public:
  Adaptee();
  ~Adaptee();
  void SpecificRequest();

protected:

private:
};

class Adapter: public Target {
public:
  Adapter(Adaptee* ade);
  ~Adapter();
  void Request();

protected:

private:
  Adaptee* _ade;
};

#endif //~_ADAPTER_H_
