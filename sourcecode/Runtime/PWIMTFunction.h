#pragma once
#include "PWrapper.h"

namespace Nom
{
	namespace Runtime
	{
		class PWIMTFunction : public PWrapper
		{
		public:
			PWIMTFunction(llvm::Value* _wrapped=nullptr) : PWrapper(_wrapped)
			{

			}
		};
	}
}
