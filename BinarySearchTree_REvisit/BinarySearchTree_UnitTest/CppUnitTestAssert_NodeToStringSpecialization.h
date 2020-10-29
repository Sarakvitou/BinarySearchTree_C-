#include "pch.h"
#include "CppUnitTest.h"
#include "../BinarySearchTree_REvisit/Node.h"

// This is a specialization ToString() template
// use to assert equality in test code.

namespace Microsoft 
{
	namespace VisualStudio 
	{
		namespace CppUnitTestFramework 
		{
			const std::wstring NODE_CLASS_NAME = L"Node";
			
			template<> static std::wstring ToString<Node>(const Node& node)
			{
				return NODE_CLASS_NAME;
			}
			template<> static std::wstring ToString<Node>(const Node* node)
			{
				return NODE_CLASS_NAME;
			}
			template<> static std::wstring ToString<Node>(Node* node) 
			{
				return NODE_CLASS_NAME;
			}
		}
	}
}
