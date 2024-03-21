//                                               -*- C++ -*-
/**
 *  @brief MyClass
 *
 *  Copyright 2005-2024 Airbus-EDF-IMACS-ONERA-Phimeca
 *
 *  This library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef OTTEMPLATE_MYCLASS_HXX
#define OTTEMPLATE_MYCLASS_HXX

#include <openturns/PersistentObject.hxx>
#include <openturns/StorageManager.hxx>
#include <openturns/Point.hxx>
#include "ottemplate/OTTemplateprivate.hxx"

namespace OTTEMPLATE
{

/**
 * @class MyClass
 *
 * MyClass is some myclass type to illustrate how to add some classes in OpenTURNS
 */
class OTTEMPLATE_API MyClass
  : public OT::PersistentObject
{
  CLASSNAME

public:
  /** Default constructor */
  MyClass();

  /** Virtual constructor method */
  MyClass * clone() const override;

  /** example of a func that return a point squared. **/
  OT::Point square(OT::Point& p) const;

  /** String converter */
  OT::String __repr__() const override;

  /** Method save() stores the object through the StorageManager */
  void save(OT::Advocate & adv) const override;

  /** Method load() reloads the object from the StorageManager */
  void load(OT::Advocate & adv) override;

private:

}; /* class MyClass */

} /* namespace OTTEMPLATE */

#endif /* OTTEMPLATE_MYCLASS_HXX */
