/*                                                                           
 *      _____  __  _____  __     ____                                   
 *     / ___/ / / /____/ / /    /    \   FieldKit
 *    / ___/ /_/ /____/ / /__  /  /  /   (c) 2010, FIELD. All rights reserved.              
 *   /_/        /____/ /____/ /_____/    http://www.field.io           
 *   
 *	 Created by Marcus Wendt on 27/05/2010.
 */

#pragma once

#include "fieldkit/physics/Behaviour.h"

namespace fieldkit { namespace physics {

	class BoxRandom : public Behaviour, public AABB {
	public:
		BoxRandom() {}
		
		BoxRandom(Space* space) {
			set(space);
		}
		
		BoxRandom(AABB box) {
			set(box);
		}
		
		void apply(Particle* p);
	};
	
} } // namespace fieldkit::physics