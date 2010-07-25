/*                                                                           
 *      _____  __  _____  __     ____                                   
 *     / ___/ / / /____/ / /    /    \   FieldKit
 *    / ___/ /_/ /____/ / /__  /  /  /   (c) 2010, FIELD. All rights reserved.              
 *   /_/        /____/ /____/ /_____/    http://www.field.io           
 *   
 *	 Created by Marcus Wendt on 20/05/2010.
 */

#pragma once

#include "fieldkit/FieldKit.h"
#include "fieldkit/physics/Behaviour.h"
#include "fieldkit/physics/Constraint.h"

namespace fieldkit { namespace physics {
	
	class Behavioural {
	public:
		list<BehaviourPtr> behaviours;
		list<ConstraintPtr> constraints;
		
		Behavioural() {};
		~Behavioural() {};

		// Behaviours
		void addBehaviour(BehaviourPtr b);
		void removeBehaviour(BehaviourPtr b);

		// Constraints
		void addConstraint(ConstraintPtr c);
		void removeConstraint(ConstraintPtr c);
	};

} } // namespace fieldkit::physics