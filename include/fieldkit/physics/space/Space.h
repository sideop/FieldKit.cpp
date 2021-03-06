/*                                                                           
 *      _____  __  _____  __     ____                                   
 *     / ___/ / / /____/ / /    /    \   FieldKit
 *    / ___/ /_/ /____/ / /__  /  /  /   (c) 2010, FIELD. All rights reserved.              
 *   /_/        /____/ /____/ /_____/    http://www.field.io           
 *   
 *	 Created by Marcus Wendt on 21/05/2010.
 */

#pragma once

#include "fieldkit/physics/PhysicsKit_Prefix.h"
#include "fieldkit/physics/space/Spatial.h"
#include "fieldkit/math/AABB.h"

namespace fieldkit { namespace physics {
	
	class Space : public AABB {
	public:
		Space() 
		{
			ownsSpatials = false;
		};
		virtual ~Space() {};

		//! make sure the space can hold a certain amount of spatials
		virtual void reserve(int count) = 0;
		
		//! empties the entire space contents
		virtual void clear() = 0;

		//! adds a single spatial
		virtual void insert(Spatial* s) = 0;

		//! selects all spatials within the given bounding volume
		virtual void select(BoundingVolume* volume, SpatialListPtr result) = 0;
		
		//! returns the center of the space
		Vec3f getCenter();
		
		//! converts a relative value to the space dimensions
		float toAbsolute(float value);

		//! converts an absolute value to relative dimensions
		float toRelative(float value);

		void setOwnsSpatials(bool isOwner) { ownsSpatials = isOwner; }
		bool getOwnsSpatials() { return ownsSpatials; }

	protected:
		bool ownsSpatials;

	};

} } // namespace fieldkit::physics