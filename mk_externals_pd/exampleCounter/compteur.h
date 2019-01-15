/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/carlos/Desktop/ChronoMontre/KCG/config.txt
** Generation date: 2019-01-05T15:50:26
*************************************************************$ */
#ifndef _compteur_H_
#define _compteur_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct { kcg_bool /* _L1/, incr/ */ incr; } inC_compteur;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int64 /* _L6/ */ _L6;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_compteur;

/* ===========  node initialization and cycle functions  =========== */
/* compteur/ */
extern void compteur(inC_compteur *inC, outC_compteur *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void compteur_reset(outC_compteur *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void compteur_init(outC_compteur *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _compteur_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** compteur.h
** Generation date: 2019-01-05T15:50:26
*************************************************************$ */

