/**********************************************************************************
**
** Copyright (C) 1994 Narvik University College
** Contact: GMlib Online Portal at http://episteme.hin.no
**
** This file is part of the Geometric Modeling Library, GMlib.
**
** GMlib is free software: you can redistribute it and/or modify
** it under the terms of the GNU Lesser General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** GMlib is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU Lesser General Public License for more details.
**
** You should have received a copy of the GNU Lesser General Public License
** along with GMlib.  If not, see <http://www.gnu.org/licenses/>.
**
**********************************************************************************/



/*! \file gmPoint3D_Point3D.c
 *  File Description
 *
 *  \date   2008-07-02
 */



namespace GMlib {


  /*! Point3D<T>::Point3D(const T p[3])
   *  \brief  Default Constructor
   *
   *  Detailed description of
   *  the default constructor
   */
  template <typename T>
  inline
  Point3D<T>::Point3D(T d) : Point<T,3>(d) {
  }

  /*! Point3D<T>::Point3D(const T p[3])
   *  \brief  Default Constructor
   *
   *  Detailed description of
   *  the default constructor
   */
  template <typename T>
  inline
  Point3D<T>::Point3D(const T p[3]) : Point<T,3>(p) {
  }

  /*! Point3D<T>::Point3D(const Point<T,3>& v)
   *  \brief  Default Constructor
   *
   *  Detailed description of
   *  the default constructor
   */
  template <typename T>
  inline
  Point3D<T>::Point3D(const Point<T,3>& v) : Point<T,3>(v) {
  }

  /*! Point3D<T>::Point3D(const T& x,const T& y,const T& z)
   *  \brief  Default Constructor
   *
   *  Detailed description of
   *  the default constructor
   */
  template <typename T>
  inline
  Point3D<T>::Point3D(const T& x,const T& y,const T& z) {
    Point<T,3>::_pt[0]=x; Point<T,3>::_pt[1]=y; Point<T,3>::_pt[2]=z;
  }


  /*! Point<T,3> Point<T,3> ::operator^(const Point<T,3>& v)  const
   *  \brief  Vector product
   *
   *  Detailed description of
   *  the operator
   */
  template <typename T>
  inline
  Point<T,3> Point3D<T>::operator^(const Point<T,3>& v)  const {
    return Point3D<T>(
      this->_pt[1]*v(2) - this->_pt[2]*v(1),
      this->_pt[2]*v(0) - this->_pt[0]*v(2),
      this->_pt[0]*v(1) - this->_pt[1]*v(0)
    );
  }

}
