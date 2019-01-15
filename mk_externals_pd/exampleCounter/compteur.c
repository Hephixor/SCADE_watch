/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/carlos/Desktop/ChronoMontre/KCG/config.txt
** Generation date: 2019-01-05T15:50:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compteur.h"

/* compteur/ */
void compteur(inC_compteur *inC, outC_compteur *outC)
{
  /* _L6= */
  if (inC->incr) {
    outC->Output1 = kcg_lit_int64(1) + outC->_L6;
  }
  else {
    outC->Output1 = outC->_L6;
  }
  outC->_L6 = outC->Output1;
}

#ifndef KCG_USER_DEFINED_INIT
void compteur_init(outC_compteur *outC)
{
  outC->Output1 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void compteur_reset(outC_compteur *outC)
{
  outC->_L6 = kcg_lit_int64(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** compteur.c
** Generation date: 2019-01-05T15:50:26
*************************************************************$ */

