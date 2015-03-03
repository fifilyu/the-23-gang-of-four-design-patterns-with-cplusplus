#ifndef _COMMAND_H_
#define _COMMAND_H_

class Reciever;

class Command {
public:
  virtual ~Command();
  virtual void Excute() = 0;

protected:
  Command();

private:
};

class ConcreteCommand: public Command {
public:
  ConcreteCommand(Reciever* rev);
  ~ConcreteCommand();
  void Excute();

protected:

private:
  Reciever* _rev;
};

#endif //~_COMMAND_H_
