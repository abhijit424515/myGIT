from random import randint


def ActRobot(robot):
        if robot.investigate_up()==('enemy' or 'enemy-base'):
            robot.DeployVirus(robot.GetVirus())
        elif robot.investigate_down()==('enemy' or 'enemy-base'):
            robot.DeployVirus(robot.GetVirus())
        elif robot.investigate_left()==('enemy' or 'enemy-base'):
            robot.DeployVirus(robot.GetVirus())
        elif robot.investigate_right()==('enemy' or 'enemy-base'):
            robot.DeployVirus(robot.GetVirus())

        elif robot.investigate_nw()==('enemy' or 'enemy-base'):
            robot.DeployVirus(robot.GetVirus())

        elif robot.investigate_ne()==('enemy' or 'enemy-base'):
            robot.DeployVirus(robot.GetVirus())

        elif robot.investigate_sw()==('enemy' or 'enemy-base'):
            robot.DeployVirus(robot.GetVirus())

        elif robot.investigate_se()==('enemy' or 'enemy-base'):
            robot.DeployVirus(robot.GetVirus())

        if robot.GetVirus() > 600:
            t1=robot.GetPosition()
            x,y=t1

            if robot.investigate_up()==('enemy' or 'enemy-base'):
                robot.DeployVirus(200)
            elif robot.investigate_down()==('enemy' or 'enemy-base'):
                robot.DeployVirus(200)
            elif robot.investigate_left()==('enemy' or 'enemy-base'):
                robot.DeployVirus(200)
            elif robot.investigate_right()==('enemy' or 'enemy-base'):
                robot.DeployVirus(200)

            elif robot.investigate_nw()==('enemy' or 'enemy-base'):
                robot.DeployVirus(200)

            elif robot.investigate_ne()==('enemy' or 'enemy-base'):
                robot.DeployVirus(200)

            elif robot.investigate_sw()==('enemy' or 'enemy-base'):
                robot.DeployVirus(200)

            elif robot.investigate_se()==('enemy' or 'enemy-base'):
                robot.DeployVirus(200)


            elif x>=20:
                robot.DeployVirus(200)
            else:
                return 4

        else:

            return randint(1,4)


def ActBase(base):
    fr=["friend","friend-base"]
    en=["enemy","enemy-base"]
    up=base.investigate_up()
    do=base.investigate_down()
    lf=base.investigate_left()
    rh=base.investigate_right()
    nw=base.investigate_nw()
    ne=base.investigate_ne()
    sw=base.investigate_sw()
    se=base.investigate_se()
    if up and do in en:
        if base.GetVirus()>300:
            base.DeployVirus(100)
            if base.GetElixir()>600:
                base.create_robot("")
    elif lf and rh in en:
        if base.GetVirus()>300:
            base.DeployVirus(100)


    if base.GetElixir() > 550:
            base.create_robot('')


    return 