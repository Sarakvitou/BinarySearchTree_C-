#include "pch.h"
#include "CppUnitTest.h"
#include "../BinarySearchTree_REvisit/Node.h"
#include "CppUnitTestAssert_NodeToStringSpecialization.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BinarySearchTreeUnitTest
{
	TEST_CLASS(NodeUnitTest)
	{
	public:

		TEST_METHOD(ShouldInitWith0)
		{
			Node node = Node();
			Assert::AreEqual(0, node.GetValue());
		}
		TEST_METHOD(ShouldNotEqualTo0WhenInitWithNonZeroNumber)
		{
			const int NON_ZERO_NUMBER = 1;
			Node node = Node(NON_ZERO_NUMBER);

			const int actual = node.GetValue();

			Assert::AreNotEqual(0, actual);
			Assert::AreEqual(NON_ZERO_NUMBER, actual);
		}
		TEST_METHOD(ShouldReturnNullPtrForLeftChild)
		{
			Node* EXPECTED = nullptr;
			Node node = Node();

			Assert::AreEqual(EXPECTED, node.GetLeftChild());
		}
		TEST_METHOD(ShouldReturnNullPtrForRightChild)
		{
			Node* EXPECTED = nullptr;
			Node node = Node();

			Assert::AreEqual(EXPECTED, node.GetRightChild());
		}
		TEST_METHOD(ShouldNotEqualToNonNullForLeftChild)
		{
			Node* EXPECTED = nullptr;
			Node* NOT_EXPECTED_NON_NULL = new Node(1);
			Node node = Node();

			Node* actual = node.GetLeftChild();

			Assert::AreEqual(EXPECTED, actual);
			Assert::AreNotEqual(NOT_EXPECTED_NON_NULL, actual);
		}
		TEST_METHOD(ShouldNotEqualToNonNullForRightChild)
		{
			Node* EXPECTED = nullptr;
			Node* NOT_EXPECTED_NON_NULL = new Node(1);
			Node node = Node();

			Node* actual = node.GetRightChild();

			Assert::AreEqual(EXPECTED, actual);
			Assert::AreNotEqual(NOT_EXPECTED_NON_NULL, actual);
		}
	};
}