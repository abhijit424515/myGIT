#include <iostream>
using namespace std;

#include <FL/Fl.H> 
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>

#include <stdlib.h>
#include <time.h>  


class Backend : public Fl_Widget {

    private:
        static void looptime(void* callback){
            Backend* backend = (Backend*) callback;
            backend->redraw();
            Fl::repeat_timeout(0.1, looptime, callback);
        }
        int num = 0;

    protected:
        int x = 400; int w = 50;
        int random_pos(){
            srand (time(NULL));
            int iSecret = rand() % 200 + 201;
            return iSecret;
        }
        int y = random_pos();
        int new_x = 600;
        int new_y = random_pos();
        int dx = 10;
        bool add = false;
        int glitch_x;
        bool stop = false;
        int bird_x = 60;
        int bird_y = 250;


    public:
        Backend() : Fl_Widget( 0, 0, 600, 600){
            Fl::add_timeout(1, looptime, (void*)this);
        }

        virtual void draw(){



            fl_color(30);

            fl_yxline(0, 600, 600, 600);  

            fl_draw_box (FL_FLAT_BOX,glitch_x-50,0,150,600,FL_WHITE);

	        fl_draw_box (FL_FLAT_BOX,x+dx,y,w,600-y,FL_WHITE);
	        fl_draw_box (FL_FLAT_BOX,x+dx,0,w,y-100,FL_WHITE);

            fl_draw_box(FL_FLAT_BOX,x,y,w,600-y,30);
            fl_draw_box(FL_FLAT_BOX,x,0,w,y-100,30);

            fl_draw_box (FL_FLAT_BOX,new_x+dx,new_y,w,600-new_y,FL_WHITE);
	        fl_draw_box (FL_FLAT_BOX,new_x+dx,0,w,new_y-100,FL_WHITE);

            if (add && !stop){
                fl_draw_box (FL_FLAT_BOX,new_x+dx,new_y,w,600-new_y,FL_WHITE);
	            fl_draw_box (FL_FLAT_BOX,new_x+dx,0,w,new_y-100,FL_WHITE);

                fl_draw_box(FL_FLAT_BOX,new_x,new_y,w,600-new_y,30);
                fl_draw_box(FL_FLAT_BOX,new_x,0,w,new_y-100,30);

                new_x -= dx;
            }

            if (x < 200 && !add){

                fl_draw_box(FL_FLAT_BOX,new_x,new_y,w,600-new_y,30);
                fl_draw_box(FL_FLAT_BOX,new_x,0,w,new_y-100,30);
                add = true;
            } 

            if (x < -50){
                x = new_x;
                y = new_y;
                glitch_x = new_x;
                add = false;
                new_x = 600;
                new_y = random_pos();
                fl_draw_box (FL_FLAT_BOX,new_x+dx,new_y,w,600-new_y,FL_WHITE);
	            fl_draw_box (FL_FLAT_BOX,new_x+dx,0,w,new_y-100,FL_WHITE);

            }

            if (!stop){
                x -= dx;
            }



            //circle

            fl_color(80);
            fl_begin_polygon();
            fl_circle(bird_x, bird_y, 30);
            fl_end_polygon();


            //collision
            if (x < 90 && x > 30){
                if (y < bird_y+30 || y-100 > bird_y-30 ){
                    if (!stop){
                        cout << "You got hit. You lost the game!" << endl;
                    }
                    stop = true;

                }
            }

        }

        virtual int handle(int e){
            Fl::focus();
            if(Fl::get_key('s')==0){
                 if (Fl::event_key()==65362){
                    fl_color(FL_WHITE);
                    fl_begin_polygon();
                    fl_circle(bird_x, bird_y, 30);
                    fl_end_polygon();
                    bird_y -= 5;
                } else if (Fl::event_key()==65364){
                    fl_color(FL_WHITE);
                    fl_begin_polygon();
                    fl_circle(bird_x, bird_y, 30);
                    fl_end_polygon();
                    bird_y += 5;

                } 
            }
        }


};




int main(int argc, char *argv[]) {
Fl_Window *window;
window = new Fl_Window (600, 800,"Escape the Obstacle"); 

    Fl_Box *box = new Fl_Box(0,650,600,30,"Press up or down arrow key");
    Fl_Box *box2 = new Fl_Box(0,680,600,30,"to move up or down.");
    Fl_Box *box3 = new Fl_Box(0,710,600,30,"Move to escape the obstacle");
    box->box(FL_UP_BOX);
    box->labelfont(FL_BOLD+FL_ITALIC);
    box->labelsize(36);
    box->labeltype(FL_SHADOW_LABEL);
    box2->box(FL_UP_BOX);
    box2->labelfont(FL_BOLD+FL_ITALIC);
    box2->labelsize(36);
    box2->labeltype(FL_SHADOW_LABEL);
    box3->box(FL_UP_BOX);
    box3->labelfont(FL_BOLD+FL_ITALIC);
    box3->labelsize(36);
    box3->labeltype(FL_SHADOW_LABEL);



    Backend game;
	

	window->color(FL_WHITE);
    	window->end();
    	window->show();

    	return(Fl::run()); 
}
