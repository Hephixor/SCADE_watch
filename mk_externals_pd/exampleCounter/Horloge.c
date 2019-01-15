/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/Horloge/KCG/config.txt
** Generation date: 2019-01-15T15:03:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Horloge.h"

/* Horloge/ */
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

#ifndef KCG_USER_DEFINED_INIT
void Horloge_init(outC_Horloge *outC)
{
  outC->hours = kcg_lit_int32(0);
  outC->minutes = kcg_lit_int32(0);
  outC->seconds = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Horloge_reset(outC_Horloge *outC)
{
  outC->_L27 = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Horloge.c
** Generation date: 2019-01-15T15:03:08
*************************************************************$ */

