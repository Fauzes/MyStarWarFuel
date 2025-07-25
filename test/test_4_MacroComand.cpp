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
#include "../inc/BurnFueldComand.h"
#include "../inc/MacroComand.h"


BOOST_AUTO_TEST_SUITE(test4)

BOOST_AUTO_TEST_CASE(test4)
{
    MyVector loc;

    loc.set_coordinates(0, 12);
    loc.set_coordinates(1, 5);

    MyVector vel;

    vel.set_coordinates(0, -7);
    vel.set_coordinates(1, 3);

    MySpaceship* spaceship = new MySpaceship(&loc, &vel);

    spaceship->setFuel(5);
    spaceship->setFuelVelocity(1);

    CheckFuelComand checkFuelCmd;

    checkFuelCmd.setCheckObj((IFuelObject*) spaceship);

    BurnFueldComand burnFuelCmd;

    burnFuelCmd.setObj((IFuelObject*) spaceship);

    MoveComand moveComand;

    moveComand.setMoveObj((IMovingObject*) spaceship);

    std::queue<ICommand*> cmd_list;

    LogCntr* loger = new LogCntr();

    MacroComand macroCmd;

    macroCmd.addCmd(&checkFuelCmd);
    macroCmd.addCmd(&moveComand);
    macroCmd.addCmd(&burnFuelCmd);

    cmd_list.push(&macroCmd);

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
    
    BOOST_CHECK_EQUAL(loger->getLineCount(), 0);
    BOOST_CHECK_EQUAL(spaceship->getFuel(), 4);
    BOOST_CHECK_EQUAL(spaceship->getLocation()->get_coordinates(0), 5);
    BOOST_CHECK_EQUAL(spaceship->getLocation()->get_coordinates(1), 8);
}

BOOST_AUTO_TEST_SUITE_END()
