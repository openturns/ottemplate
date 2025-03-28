%feature("docstring") OTTEMPLATE::MyClass
"MyClass class.

Examples
--------
>>> import ottemplate
>>> a = ottemplate.MyClass()

Notes
-----
Template module class."

// ---------------------------------------------------------------------

%feature("docstring") OTTEMPLATE::MyClass::square
R"RAW(Square of a point.

.. math::

    x_i^2

Parameters
----------
point : sequence of float 
    Input point

Returns
-------
square : :py:class:`openturns.Point`
    Square of point
                  
Examples
--------
>>> import openturns as ot
>>> import ottemplate
>>> a = ottemplate.MyClass()
>>> point = ot.Point([1.0, 2.0, 3.0])
>>> a.square(point)
class=Point name=Unnamed dimension=3 values=[1,4,9])RAW"

