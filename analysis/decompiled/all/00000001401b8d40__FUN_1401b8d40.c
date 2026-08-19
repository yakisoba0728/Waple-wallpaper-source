// Function: FUN_1401b8d40
// Addr: 1401b8d40
// Size: 161 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1401b8d40(float *param_1,float *param_2)

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
  
  fVar1 = DAT_140492930;
  fVar9 = param_2[2];
  fVar8 = fVar9 * param_2[1];
  dVar3 = (double)FUN_14041ced0((double)(*param_2 * DAT_140492930),DAT_1404928c0);
  fVar7 = (float)dVar3;
  dVar3 = (double)FUN_14041ced0((double)fVar7,DAT_140492880);
  fVar9 = fVar9 - fVar8;
  fVar2 = 0.0;
  fVar6 = (float)((DAT_140492848 -
                  (double)CONCAT44((uint)((ulonglong)(dVar3 - DAT_140492848) >> 0x20) &
                                   _UNK_1404930a4,SUB84(dVar3 - DAT_140492848,0) & _DAT_1404930a0))
                 * (double)fVar8);
  if (((0.0 <= fVar7) && (fVar5 = fVar6, fVar4 = fVar8, fVar7 < DAT_1404927d4)) ||
     ((fVar5 = fVar8, fVar4 = fVar6, DAT_1404927d4 <= fVar7 && (fVar2 = 0.0, fVar7 < DAT_140492878))
     )) goto code_r0x0001401b8e75;
  if (((fVar7 < DAT_140492878) || (fVar2 = fVar6, DAT_140492900 <= fVar7)) &&
     ((fVar2 = fVar8, fVar7 < DAT_140492900 || (fVar5 = fVar6, DAT_14049291c <= fVar7)))) {
    if ((DAT_14049291c <= fVar7) && (fVar7 < DAT_140492928)) {
      fVar5 = 0.0;
      goto code_r0x0001401b8e75;
    }
    if ((DAT_140492928 <= fVar7) && (fVar7 < fVar1)) {
      fVar5 = 0.0;
      fVar2 = fVar6;
      fVar4 = fVar8;
      goto code_r0x0001401b8e75;
    }
    fVar5 = 0.0;
    fVar2 = 0.0;
  }
  fVar4 = 0.0;
code_r0x0001401b8e75:
  *param_1 = fVar4 + fVar9;
  param_1[1] = fVar5 + fVar9;
  param_1[2] = fVar2 + fVar9;
  return param_1;
}

