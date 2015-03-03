CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT(the-23-gang-of-four-design-patterns-with-cplusplus)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

ADD_SUBDIRECTORY(创建型模式/AbstractFactory)
ADD_SUBDIRECTORY(创建型模式/Builder)
ADD_SUBDIRECTORY(创建型模式/Factory)
ADD_SUBDIRECTORY(创建型模式/Prototype)
ADD_SUBDIRECTORY(创建型模式/Singleton)

ADD_SUBDIRECTORY(结构型模式/Proxy)
ADD_SUBDIRECTORY(结构型模式/Flyweight)
ADD_SUBDIRECTORY(结构型模式/Adapter)
ADD_SUBDIRECTORY(结构型模式/Composite)
ADD_SUBDIRECTORY(结构型模式/Bridge)
ADD_SUBDIRECTORY(结构型模式/Facade)
ADD_SUBDIRECTORY(结构型模式/Decorator)

ADD_SUBDIRECTORY(行为模式/Visitor)
ADD_SUBDIRECTORY(行为模式/Interpreter)
ADD_SUBDIRECTORY(行为模式/Command)
ADD_SUBDIRECTORY(行为模式/Strategy)
ADD_SUBDIRECTORY(行为模式/Observer)
ADD_SUBDIRECTORY(行为模式/State)
ADD_SUBDIRECTORY(行为模式/ChainofResponsibility)
ADD_SUBDIRECTORY(行为模式/Memento)
ADD_SUBDIRECTORY(行为模式/Template)
ADD_SUBDIRECTORY(行为模式/Mediator)
ADD_SUBDIRECTORY(行为模式/Iterator)

