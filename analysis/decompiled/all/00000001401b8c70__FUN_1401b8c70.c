// Function: FUN_1401b8c70
// Addr: 1401b8c70
// Size: 369 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1401b8c70(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = DAT_140492860;
  fVar9 = param_2[2];
  fVar8 = fVar9 * param_2[1];
  dVar3 = (double)FUN_14041ce00((double)(*param_2 * DAT_140492860),DAT_1404927f0);
  fVar7 = (float)dVar3;
  dVar3 = (double)FUN_14041ce00((double)fVar7,DAT_1404927b0);
  fVar9 = fVar9 - fVar8;
  fVar2 = 0.0;
  fVar6 = (float)((DAT_140492778 -
                  (double)CONCAT44((uint)((ulonglong)(dVar3 - DAT_140492778) >> 0x20) &
                                   _UNK_140492fd4,SUB84(dVar3 - DAT_140492778,0) & _DAT_140492fd0))
                 * (double)fVar8);
  if (((0.0 <= fVar7) && (fVar5 = fVar6, fVar4 = fVar8, fVar7 < DAT_140492704)) ||
     ((fVar5 = fVar8, fVar4 = fVar6, DAT_140492704 <= fVar7 && (fVar2 = 0.0, fVar7 < DAT_1404927a8))
     )) goto LAB_1401b8da5;
  if (((fVar7 < DAT_1404927a8) || (fVar2 = fVar6, DAT_140492830 <= fVar7)) &&
     ((fVar2 = fVar8, fVar7 < DAT_140492830 || (fVar5 = fVar6, DAT_14049284c <= fVar7)))) {
    if ((DAT_14049284c <= fVar7) && (fVar7 < DAT_140492858)) {
      fVar5 = 0.0;
      goto LAB_1401b8da5;
    }
    if ((DAT_140492858 <= fVar7) && (fVar7 < fVar1)) {
      fVar5 = 0.0;
      fVar2 = fVar6;
      fVar4 = fVar8;
      goto LAB_1401b8da5;
    }
    fVar5 = 0.0;
    fVar2 = 0.0;
  }
  fVar4 = 0.0;
LAB_1401b8da5:
  *param_1 = fVar4 + fVar9;
  param_1[1] = fVar5 + fVar9;
  param_1[2] = fVar2 + fVar9;
  return param_1;
}

