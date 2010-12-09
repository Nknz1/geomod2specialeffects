#pragma once

#include "EntityFactory.h"
#include <Core/CoreMgr.h>
#include <Resource/ResMgr.h>

//Specials
#include <Entities/Curve.h>

namespace Engine
{
	class EntityReg
	{
	public:
		static void Register(EntityFactory *factory, CoreMgr *coreMgr)
		{
			//Register special C++ entity types
			factory->RegisterSpecial(Curve::GetSpecialType(), &Curve::Create);

			//Register XML defined entities
			std::vector<CL_String> entities = coreMgr->getResMgr()->getFilesInDir("/XML/Entities/");
			for(unsigned int i = 0; i < entities.size(); i++)
			{
				factory->registerEntity(entities[i].c_str());
			}
		}
	};
}
