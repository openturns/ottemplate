// SWIG file MyClass.i

%{
#include "ottemplate/MyClass.hxx"
%}

%include MyClass_doc.i

TypedInterfaceObjectImplementationHelper(OTTEMPLATE, MyClass, MyClassImplementation)

%include ottemplate/MyClass.hxx
%copyctor OTTEMPLATE::MyClass;
