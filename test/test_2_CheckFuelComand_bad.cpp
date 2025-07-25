#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MyStarWarFuel
#include <boost/test/unit_test.hpp>

#include <stdint-gcc.h>
#include "../inc/MoveComand.h"
#include "../inc/MySpaceship.h"
#include "../inc/MyVector.h"
#include "../inc/CheckFuelComand.h"
#include <queue>
#include "../inc/logCntr.h"
#include "../inc/comandhendlerex.h"



BOOST_AUTO_TEST_SUITE(test2)

BOOST_AUTO_TEST_CASE(test2)
{
    MyVector loc;

    loc.set_coordinates(0, 12);
    loc.set_coordinates(1, 5);

    MyVector vel;

    vel.set_coordinates(0, -7);
    vel.set_coordinates(1, 3);

    MySpaceship* spaceship = new MySpaceship(&loc, &vel);

    spaceship->setFuel(5);
    spaceship->setFuelVelocity(6);

    CheckFuelComand checkFuelCmd;

    checkFuelCmd.setCheckObj((IFuelObject*) spaceship);

    MoveComand moveComand;

    moveComand.setMoveObj((IMovingObject*) spaceship);

    std::queue<ICommand*> cmd_list;

    cmd_list.push(&checkFuelCmd);

    LogCntr* loger = new LogCntr();

    while (cmd_list.size())
    {
        try
        {
            cmd_list.front()->execute();
        }
        catch(const std::exception& e)
        {
            ComandHendlerEx* errHandler = new ComandHendlerEx(&cmd_list, cmd_list.front(), &e, loger);

            cmd_list.push(errHandler);
        }

        cmd_list.pop();
    }
    
    BOOST_CHECK_EQUAL(loger->getLineCount(), 1);
    BOOST_CHECK_EQUAL(loger->reade_line(0), "Error not fuel");
}

BOOST_AUTO_TEST_SUITE_END()
