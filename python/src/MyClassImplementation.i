// SWIG file MyClassImplementation.i

%{
#include "ottemplate/MyClassImplementation.hxx"
%}

%include MyClassImplementation_doc.i

%template(MyClassImplementationdInterfaceObject)           OT::TypedInterfaceObject<OTTEMPLATE::MyClassImplementation>;

%include ottemplate/MyClassImplementation.hxx
%copyctor OTTEMPLATE::MyClassImplementation;
