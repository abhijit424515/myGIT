from random import randint


def ActRobot(robot):

        x,y = robot.GetPosition()
        signal = robot.GetCurrentBaseSignal()

        up = robot.investigate_up()
        down = robot.investigate_down()
        left = robot.investigate_left()
        right =robot.investigate_right()
        ne =robot.investigate_ne()
        nw =robot.investigate_nw()
        se =robot.investigate_se()
        sw =robot.investigate_sw()

        l1 = [up,down,left,right,ne,nw,se,sw]
        if "enemy" in l1 and robot.GetVirus() > 500:
                robot.DeployVirus(700)

        
                

  #      if l1 == "enemy-base":
    #            base.create_robot(x,y)

 


        
        if up == "enemy-base":
                if x < 10:
                        msg_x = str(0) + str(x)
                else:
                        msg_x = str(x)
                if (y-1) < 10:
                        msg_y = str(0) + str(y-1)
                else:
                        msg_y = str(y-1)
                msg = msg_x + msg_y
                robot.setSignal(msg)
                
                robot.DeployVirus(robot.GetVirus())
        
        if down == "enemy-base":
                if x < 10:
                        msg_x = str(0) + str(x)
                else:
                        msg_x = str(x)
                if (y+1) < 10:
                        msg_y = str(0) + str(y+1)
                else:
                        msg_y = str(y+1)
                msg = msg_x + msg_y
                robot.setSignal(msg)
                
                robot.DeployVirus(robot.GetVirus())

        if left == "enemy-base":
                if x-1 < 10:
                        msg_x = str(0) + str(x-1)
                else:
                        msg_x = str(x-1)
                if (y) < 10:
                        msg_y = str(0) + str(y)
                else:
                        msg_y = str(y)
                msg = msg_x + msg_y
                robot.setSignal(msg)
                
                robot.DeployVirus(robot.GetVirus())
        
        if right == "enemy-base":
                if x+1 < 10:
                        msg_x = str(0) + str(x+1)
                else:
                        msg_x = str(x+1)
                if (y) < 10:
                        msg_y = str(0) + str(y)
                else:
                        msg_y = str(y)
                msg = msg_x + msg_y
                robot.setSignal(msg)
                
                robot.DeployVirus(robot.GetVirus())

        if ne == "enemy-base":
                if x+1 < 10:
                        msg_x = str(0) + str(x+1)
                else:
                        msg_x = str(x+1)
                if (y-1) < 10:
                        msg_y = str(0) + str(y-1)
                else:
                        msg_y = str(y-1)
                msg = msg_x + msg_y
                robot.setSignal(msg)
                
                robot.DeployVirus(robot.GetVirus())

        if nw == "enemy-base":
                if x-1 < 10:
                        msg_x = str(0) + str(x-1)
                else:
                        msg_x = str(x-1)
                if (y-1) < 10:
                        msg_y = str(0) + str(y-1)
                else:
                        msg_y = str(y-1)
                msg = msg_x + msg_y
                robot.setSignal(msg)
                
                robot.DeployVirus(700)

        if se == "enemy-base":
                if x+1 < 10:
                        msg_x = str(0) + str(x+1)
                else:
                        msg_x = str(x+1)
                if (y+1) < 10:
                        msg_y = str(0) + str(y+1)
                else:
                        msg_y = str(y+1)
                msg = msg_x + msg_y
                robot.setSignal(msg)
                robot.DeployVirus(robot.GetVirus())

        if sw == "enemy-base":
                if x-1 < 10:
                        msg_x = str(0) + str(x-1)
                else:
                        msg_x = str(x-1)
                if (y+1) < 10:
                        msg_y = str(0) + str(y+1)
                else:
                        msg_y = str(y+1)
                msg = msg_x + msg_y
                robot.setSignal(msg)
                robot.DeployVirus(robot.GetVirus())


        for i in range (0,4):
                if l1 == "friend-base":
                        return 0
                
        for i in range (5, 20):
                if l1 == "enemy":
                        return 0

        for i in range (20, 31):
                if l1 == "enemy":
                        return(1,4)

        if robot.GetInitialSignal() == '0':
                if l1 == "friend-base":
                        return 0
                else:
                        return randint(1,4)
        if l1 == "enemy-base":
                c,d = robot.GetPosition()
                dx = c - x
                dy = d - c
                if dx == 0:
                        if dy == 0:
                                return 0
                        elif dy > 0: 
                                return 1
                        else: 
                                return 4
                        
                elif dx > 0:
                        if dy < 0:
                                return 3
                        elif dy > 0:
                                return 1
                        return 2
                elif dx < 0:
                        if dy < 0:
                                return 3
                        elif dy > 0:
                                return 1
                        return 4 
        elif robot.GetInitialSignal() == 'E0':
                if 'enemy-base' in l1:
                        return 0
                elif len(signal) > 0:
                        
                        desti_x = int(signal[:2])
                        desti_y = int(signal[2:])
                        if x < desti_x:
                                return 2
                        if x > desti_x:
                                return 4
                        if y > desti_y:
                                return 1
                        if y < desti_y:
                                return 3
                        if x == desti_x:
                                if y == desti_y:
                                        return 0
                else:
                        return randint(1,4)
        else: 
                return randint(1,4)


              



 #               elif up == "enemy-base":
 #                       x,y = robot.GetPosition()
                        


 #                       msg = "base" + str(x) + str(y-1) 
 #                      robot.setSignal(msg)
 #                       if robot.GetVirus() > 500:
 #                           robot.DeployVirus(500)
 #               if down == "enemy" and robot.GetVirus() > 1000:
 #                       robot.DeployVirus(100)        
 #               elif down == "enemy-base":
 #                       x,y = robot.GetPosition()
 #                       if x < 10:
 #                               msg_X = '0' + str(x)
#                      else:
#                                msg_x = str(x)
#                        if y+1 < 10:
#                                msg_y = '0' + str(y+1)
 #                       else:
#                                msg_y = str(y+1)        
#                        msg = "base" + str(x) + str(y+1) 
#                        robot.setSignal(msg)
#                        if robot.GetVirus() > 500:
#                            robot.DeployVirus(500)  
#                if right == "enemy" and robot.GetVirus() > 1000:
#                        robot.DeployVirus(100)        
#                elif up == "enemy-base":
#                        x,y = robot.GetPosition()
#                        msg = "base" + str(x) + str(y-1) 
#                        robot.setSignal(msg)
#                        if robot.GetVirus() > 500:
#                            robot.DeployVirus(500)                     



 #               if len(robot.GetCurrentBaseSignal())  >0:


#       return randint(1,4)


def ActBase(base):

       
        up_b = base.investigate_up()
        down_b = base.investigate_down()
        left_b = base.investigate_left()
        right_b =base.investigate_right()
        ne_b = base.investigate_ne()
        nw_b = base.investigate_nw()
        se_b = base.investigate_se()
        sw_b = base.investigate_sw()

        l2=[up_b,down_b,left_b,right_b,ne_b,nw_b,se_b,sw_b]
        if "enemy" in l2 and base.GetVirus() > 400 and base.GetElixir() > 500:
                base.DeployVirus(1000)
                

        if "enemy-base" in l2 and base.GetVirus() > 500:
                base.DeployVirus(700)

        pos = base.GetListOfSignals() 
        if  base.GetElixir() > 500:
                 base.create_robot('')
                 base.create_robot('')
                 base.create_robot('')
                 base.create_robot('0')
                 base.create_robot('E0')
                 
        if len(pos) > 0:
                bx = pos[0][:2]
                by = pos[0][2:]
                base.SetYourSignal(bx + by)
                 
               
        return





#    if base.GetElixir() > 500:
#            base.create_robot('')

#    return
# 
# from random import randint
