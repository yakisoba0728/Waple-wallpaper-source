// Function: FUN_14018e1a0
// Addr: 14018e1a0
// Size: 396 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018e1a0(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  
  fVar4 = DAT_140492704;
  lVar1 = *(longlong *)(param_1 + 0x90);
  local_60 = 0x3f000000;
  local_64 = DAT_140492704 - *(float *)(lVar1 + 0x90);
  local_5c = _DAT_140492e20;
  uStack_54 = _UNK_140492e28;
  local_68 = *(undefined4 *)(lVar1 + 0x8c);
  FUN_14019df90(&local_78,&local_68,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40),
                &local_5c);
  lVar1 = *(longlong *)(param_1 + 0x90);
  *(undefined8 *)param_2 = *(undefined8 *)(lVar1 + 0x68);
  param_2[2] = *(float *)(lVar1 + 0x70);
  fVar5 = DAT_1404929b8;
  if ((*(byte *)(param_1 + 0x98) & 8) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
    fVar6 = local_78 - *(float *)(lVar1 + 0x68);
    fVar5 = local_70 - *(float *)(lVar1 + 0x70);
    fVar2 = local_74 - *(float *)(lVar1 + 0x6c);
    fVar3 = fVar6 * fVar6 + fVar2 * fVar2 + fVar5 * fVar5;
    if (fVar3 < 0.0) {
      fVar3 = (float)FUN_14041ad10();
    }
    else {
      fVar3 = SQRT(fVar3);
    }
    fVar4 = fVar4 / fVar3;
    fVar5 = fVar5 * fVar4;
    fVar2 = fVar4 * fVar2;
    fVar4 = fVar4 * fVar6;
  }
  else {
    fVar4 = 0.0;
    *param_2 = local_78;
    fVar2 = 0.0;
    param_2[1] = local_74;
  }
  *param_3 = fVar4;
  param_3[1] = fVar2;
  param_3[2] = fVar5;
  return;
}

