#include "stdafx.h"
#include "CppUnitTest.h"

#include "Vector2D.h"
#include "Vector3D.h"

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
			Vector2D u = { 1, 1 };
			const float scale = 2;
			Vector2D sub = Scale(&u, scale);
			Vector2D r = { 2, 2 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(GetPolarAngleDeg1)
		{

			//GetPolarAngleDeg();
		}
		TEST_METHOD(GetPolarAngleDeg2)
		{

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
		TEST_METHOD(Length1)
		{
			Vector2D vect = { 10, 10 };
			float desiredResult = 14.1f;
			float total = Length(&vect);
			Assert::IsTrue((desiredResult - total)< EPSILON);
		}
		TEST_METHOD(Length2)
		{
			Vector2D vect = { 6, 6 };
			float desiredResult = 8.485281f;
			float total = Length(&vect);
			Assert::IsTrue((desiredResult - total)< EPSILON);
		}
		TEST_METHOD(LengthSq1)
		{
			Vector2D vect = { 10, 10 };
			float desiredResult = 200.0f;
			float total = LengthSq(&vect);
			Assert::IsTrue((desiredResult - total)< EPSILON);
		}
		TEST_METHOD(LengthSq2)
		{
			Vector2D vect = { -10, -10 };
			float desiredResult = 14.1f;
			float total = LengthSq(&vect);
			Assert::IsTrue((desiredResult - total)< EPSILON);
		}
		TEST_METHOD(Normalize1)
		{
			Vector2D temp = { 10, 10 };
			Vector2D desiredTemp = { 1, 1 };
			Assert::IsTrue(Equals(&temp, &desiredTemp));
		}
		TEST_METHOD(Normalize2)
		{
			Vector2D temp = { 0, 0 };
			Vector2D desiredTemp = { 1, 1 };
			Assert::IsFalse(Equals(&temp, &desiredTemp));
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
		TEST_METHOD(GetVectorByAngleDeg1)
		{

		}
		TEST_METHOD(GetVectorByAngleDeg2)
		{

		}
		TEST_METHOD(Add3D1)
		{
			Vector3D u = { 9, -5, 1 };
			Vector3D v = { -9, 5, 1 };
			Vector3D add = Add(&u, &v);
			Vector3D r = { 0, 0, 2 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(Add3D2)
		{
			Vector3D u = { 20, 15, 1 };
			Vector3D v = { -80, 30.5, 1 };
			Vector3D add = Add(&u, &v);
			Vector3D r = { -60, 45.5, 2 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(Subtract3D1)
		{
			Vector3D u = { 100, 100, 1 };
			Vector3D sub = Substract(&u, &u);
			Vector3D r = { 0, 0, 0 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(Subtract3D2)
		{
			Vector3D u = { 20, 15, 1 };
			Vector3D v = { -80, 30.5, 0 };
			Vector3D sub = Substract(&u, &v);
			Vector3D r = { 100, -15.5, 1 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(Scale3D1)
		{
			Vector3D u = { 2, 2, 1 };
			const float scale = 2;
			Vector3D sub = Scale(&u, scale);
			Vector3D r = { 4, 4, 1 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(Scale3D2)
		{
			Vector3D u = { 1, 1, 1 };
			const float scale = 2;
			Vector3D sub = Scale(&u, scale);
			Vector3D r = { 2, 2, 2 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(Dot1)
		{

		}
		TEST_METHOD(Dot2)
		{

		}
		TEST_METHOD(CrossRH1)
		{
			Vector3D firstVect = { 2,2,2};
			Vector3D secondVect = { 3,3,3};
			Vector3D desiredVect = { 0,0,0 };

			Assert::IsTrue(Equals(&CrossRH(&firstVect, &secondVect), &desiredVect));
		}
		TEST_METHOD(CrossRH2)
		{
			Vector3D firstVect = { 2,2,2};
			Vector3D secondVect = { 3,3,3};
			Vector3D desiredVect = { 0,0,0 };

			Assert::IsTrue(Equals(&CrossRH(&firstVect, &secondVect), &desiredVect));
		}
		TEST_METHOD(CrossLH1)
		{
			Vector3D firstVect = { 2,2,2 };
			Vector3D secondVect = { 3,3,3 };
			Vector3D desiredVect = { 0,0,0 };

			Assert::IsTrue(Equals(&CrossLH(&firstVect, &secondVect), &desiredVect));
		}
		TEST_METHOD(CrossLH2)
		{
			Vector3D firstVect = { 2,2,2 };
			Vector3D secondVect = { 3,3,3 };
			Vector3D desiredVect = { 0,0,0 };

			Assert::IsTrue(Equals(&CrossLH(&firstVect, &secondVect), &desiredVect));
		}
		TEST_METHOD(MoveBy3D1)
		{

		}
		TEST_METHOD(MoveBy3D2)
		{

		}
		TEST_METHOD(Length3D1)
		{

		}
		TEST_METHOD(Length3D2)
		{

		}
		TEST_METHOD(LengthSq3D1)
		{

		}
		TEST_METHOD(LengthSq3D2)
		{

		}
		TEST_METHOD(Normalize3D1)
		{

		}
		TEST_METHOD(Normalize3D2)
		{

		}
		TEST_METHOD(ScaleBy3D1)
		{

		}
		TEST_METHOD(ScaleBy3D2)
		{

		}
	};
}