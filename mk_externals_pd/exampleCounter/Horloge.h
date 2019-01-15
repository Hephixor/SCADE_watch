/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/3771834/Desktop/Horloge/KCG/config.txt
** Generation date: 2019-01-15T15:03:08
*************************************************************$ */
#ifndef _Horloge_H_
#define _Horloge_H_

#include "kcg_types.h"


/* =====================  input structure  ====================== */
typedef struct { kcg_bool /* _L1/, incr/ */ incr; } inC_Horloge;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* _L12/, seconds/ */ seconds;
  kcg_int32 /* _L30/, minutes/ */ minutes;
  kcg_int32 /* _L31/, hours/ */ hours;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int32 /* _L27/ */ _L27;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Horloge;

/* ===========  node initialization and cycle functions  =========== */
/* Horloge/ */
extern void Horloge(inC_Horloge *inC, outC_Horloge *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Horloge_reset(outC_Horloge *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Horloge_init(outC_Horloge *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Horloge_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Horloge.h
** Generation date: 2019-01-15T15:03:08
*************************************************************$ */

