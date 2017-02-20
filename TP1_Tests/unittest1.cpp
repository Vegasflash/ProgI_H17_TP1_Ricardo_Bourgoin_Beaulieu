#include "stdafx.h"
#include "CppUnitTest.h"

#include "Vector2D.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TP1_Tests
{		
	TEST_CLASS(Vector2DTest)
	{
	public:
		TEST_METHOD(AddTest1)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(AddTest2)
		{
			Vector2D u = { 20, 15 };
			Vector2D v = { -80, 30.5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { -60, 45.5 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(SubstractTest1)
		{
			Vector2D u = { 100, -99 };
			Vector2D sub = Substract(&u, &u);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(SubstractTest2)
		{
			Vector2D u = { 20, 15 };
			Vector2D v = { -80, 30.5 };
			Vector2D sub = Substract(&u, &v);
			Vector2D r = { 100, -15.5 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(ScaleTest1)
		{
			Vector2D u = { 2, 2 };
			const float scale = 2;
			Vector2D sub = Scale(&u, scale );
			Vector2D r = { 4, 4 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(ScaleTest2)
		{
			Vector2D u = { 2, 2 };
			const float scale = 2;
			Vector2D sub = Scale(&u, scale);
			Vector2D r = { 2, 2 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(AngleBetweenDeg1)
		{
			Vector2D test1 = { 1, 1 };
			Vector2D test2 = { 2, 2 };
			float total = AngleBetweenDeg(&test1, &test2);
			float result = 0;
			Assert::IsTrue((total - result) < EPSILON);
		}
		TEST_METHOD(AngleBetweenDeg2)
		{
			Vector2D test1 = { 10, 10 };
			Vector2D test2 = { -10, -10 };
			float result = 180;

			float total = AngleBetweenDeg(&test1, &test2);
			Assert::IsTrue((total - result) < EPSILON);
		}
		TEST_METHOD(MoveBy1)
		{
			Vector2D test1 = {5,5};
			Vector2D test2 = {10 , 10};
			Vector2D desiredResult = { 15 , 15 };

			MoveBy(&test1, &test2);
			Assert::IsTrue(Equals(&test2, &desiredResult));
		}
		TEST_METHOD(MoveBy2)
		{
			Vector2D test1 = { 10, 10 };
			Vector2D test2 = { -10 , -10 };
			Vector2D desiredResult = { 0 , 0 };

			MoveBy(&test1, &test2);
			Assert::IsTrue(Equals(&test2, &desiredResult));
		}
		TEST_METHOD(ScaleBy1)
		{
			Vector2D test1 = { 5 , 5 };
			const float scaleTest = 2.0f;
			Vector2D desiredResult = { 10, 10 };

			ScaleBy(&test1, scaleTest);
			Assert::IsTrue(Equals(&test1, &desiredResult));
		}
		TEST_METHOD(ScaleBy2)
		{
			Vector2D test1 = { 10 , 10 };
			const float scaleTest = -10.0f;
			Vector2D desiredResult = { -100, -100 };

			ScaleBy(&test1, scaleTest);
			Assert::IsTrue(Equals(&test1, &desiredResult));
		}
	};
}