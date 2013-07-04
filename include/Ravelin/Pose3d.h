/****************************************************************************
 * Copyright 2013 Evan Drumwright
 * This library is distributed under the terms of the GNU Lesser General Public 
 * License (found in COPYING).
 ****************************************************************************/

#ifndef _POSE3D_H
#define _POSE3D_H

#include <boost/enable_shared_from_this.hpp>
#include <boost/shared_ptr.hpp>
#include <Ravelin/FrameException.h>
#include <Ravelin/Vector3d.h>
#include <Ravelin/Point3d.h>
#include <Ravelin/Origin3d.h>
#include <Ravelin/Quatd.h>
#include <Ravelin/AAngled.h>
#include <Ravelin/Matrix3d.h>
#include <Ravelin/SForced.h>
#include <Ravelin/SAcceld.h> 
#include <Ravelin/SVelocityd.h>
#include <Ravelin/SpatialRBInertiad.h>
#include <Ravelin/SpatialABInertiad.h>
#include <Ravelin/Transform3d.h>

namespace Ravelin {

#include "ddefs.h"
#include "Pose3.h"
#include "undefs.h"

} // end namespace

#endif

