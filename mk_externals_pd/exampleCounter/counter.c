/*
 * HOWTO write an External for Pure data
 * (c) 2001-2006 IOhannes m zmölnig zmoelnig[AT]iem.at
 *
 * this is the source-code for the second example in the HOWTO
 * it creates an object that increments and outputs a counter
 * whenever it gets banged.
 *
 * for legal issues please see the file LICENSE.txt
 */



/**
 * include the interface to Pd 
 */
#include "m_pd.h"
#include "Horloge.h"

/**
 * define a new "class" 
 */
static t_class *counter_class;



/**
 * this is the dataspace of our new object
 * the first (mandatory) "t_object"
 * and a variable that holds the current counter value
 */
typedef struct _counter {
  t_object  x_obj;
  inC_Horloge inC;
  outC_Horloge outC;
  t_outlet *h_out, *m_out, *s_out; /* outlets */
} t_counter;

void Horloge(inC_Horloge *inC, outC_Horloge *outC)
{
  if (inC->incr) {
     outC->_L27 = kcg_lit_int32(1) + outC->_L27;
  }
  else {
    outC->_L27 = kcg_lit_int32(1) + outC->_L27;
  }
 
  outC->hours = outC->_L27 / kcg_lit_int32(3600) % kcg_lit_int32(24);
  outC->minutes = outC->_L27 / kcg_lit_int32(60) % kcg_lit_int32(60);
  outC->seconds = outC->_L27 % kcg_lit_int32(60);
}


void Horloge_init(outC_Horloge *outC)
{
  outC->hours = kcg_lit_int32(0);
  outC->minutes = kcg_lit_int32(0);
  outC->seconds = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
}

void Horloge_reset(outC_Horloge *outC)
{
  outC->_L27 = kcg_lit_int32(0);
}

/**
 * this method is called whenever a "bang" is sent to the object
 * a reference to the class-dataspace is given as argument
 * this enables us to do something with the data (e.g. increment the counter)
 */
void counter_bang(t_counter *x)
{
  
  Horloge(&x->inC,&x->outC);

  t_float seconds = x->outC.seconds;
  t_float minutes = x->outC.minutes;
  t_float hours = x->outC.hours;

  outlet_float(x->h_out, hours);
  outlet_float(x->m_out, minutes);
  outlet_float(x->s_out, seconds);
}


/**
 * this is the "constructor" of the class
 * we have one argument of type floating-point (as specified below in the counter_setup() routine)
 */
void *counter_new()
{
  t_counter *x = (t_counter *)pd_new(counter_class);

 // Horloge_reset(&x->outC);
  x->inC.incr = kcg_true;
 
  x->h_out = outlet_new(&x->x_obj, &s_float);
  x->m_out = outlet_new(&x->x_obj, &s_float);
  x->s_out = outlet_new(&x->x_obj, &s_float);

  return (void *)x;
}


/**
 * define the function-space of the class
 */
void counter_setup(void) {
  counter_class = class_new(gensym("counter"),
			    (t_newmethod)counter_new,
			    0, 
			    sizeof(t_counter),
			    CLASS_DEFAULT,
			     0); 

  /* call a function when object gets banged */
  class_addbang(counter_class, counter_bang);
}
