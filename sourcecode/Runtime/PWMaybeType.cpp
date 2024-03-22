#include "PWTypeVar.h"
#include "CompileHelpers.h"
#include "XRTMaybeType.h"
#include "PWMaybeType.h"

namespace Nom
{
	namespace Runtime
	{
		llvm::Type* PWMaybeType::GetLLVMType()
		{
			return XRTMaybeType::GetLLVMType();
		}
		llvm::Type* PWMaybeType::GetWrappedLLVMType()
		{
			return NLLVMPointer(GetLLVMType());
		}
		PWType PWMaybeType::ReadPotentialType(NomBuilder& builder)
		{
			return PWType(MakeLoad(builder, GetLLVMType(), wrapped, MakeInt32(XRTMaybeTypeFields::PotentialType)));
		}
	}
}
