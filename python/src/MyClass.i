// SWIG file MyClass.i

%{
#include "ottemplate/MyClass.hxx"
%}

%include MyClass_doc.i

%copyctor OTTEMPLATE::MyClass;

%include ottemplate/MyClass.hxx
