// Function: FUN_140199580
// Addr: 140199580
// Size: 509 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140199580(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = (float)FUN_14041e350(*(undefined4 *)(param_1 + 0x330),DAT_140492830);
  fVar5 = DAT_140492654;
  fVar7 = *(float *)(param_1 + 0x32c) * DAT_140492654;
  fVar6 = *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x328) *
          *(float *)(*(longlong *)(param_1 + 0xd8) + 0x130);
  fVar2 = (float)FUN_14041a2e0(fVar6);
  fVar3 = (float)FUN_14041a9c0(fVar6 * _DAT_140492728);
  fVar4 = (float)FUN_14041a9c0(fVar6);
  fVar6 = DAT_140492704;
  if ((*(byte *)(param_1 + 0xe0) & 8) != 0) {
    fVar4 = 0.0;
    fVar7 = *(float *)(param_1 + 0x358) * fVar5 * fVar7;
  }
  if ((DAT_140492608 < fVar1) && (fVar1 != DAT_140492704)) {
    fVar5 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
    if (fVar5 < 0.0) {
      fVar5 = (float)FUN_14041ad10(fVar5);
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    fVar1 = (float)FUN_14041e350(fVar5,fVar1);
    fVar6 = fVar6 / fVar5;
    fVar4 = fVar6 * fVar4 * fVar1;
    fVar2 = fVar6 * fVar2 * fVar1;
    fVar3 = fVar6 * fVar3 * fVar1;
  }
  *param_2 = fVar2 * fVar7 + *param_2;
  param_2[1] = fVar3 * fVar7 + param_2[1];
  param_2[2] = fVar4 * fVar7 + param_2[2];
  *param_3 = fVar2 * fVar7 + *param_3;
  param_3[1] = fVar3 * fVar7 + param_3[1];
  param_3[2] = fVar4 * fVar7 + param_3[2];
  return;
}

