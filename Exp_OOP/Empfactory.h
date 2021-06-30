#pragma once

namespace Exp_OOP
{
	class Empfactory
	{
	public:
		Employee makeEmp(int id)
		{
			Employee mep;
			mep.TaxId = id;
			return mep;
		}


	};
}