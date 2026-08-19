// Function: FUN_14018e270
// Addr: 14018e270
// Size: 7 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018e270(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  
  fVar4 = DAT_1404927d4;
  lVar1 = *(longlong *)(param_1 + 0x90);
  uStack_60 = 0x3f000000;
  fStack_64 = DAT_1404927d4 - *(float *)(lVar1 + 0x90);
  uStack_5c = _DAT_140492ef0;
  uStack_54 = _UNK_140492ef8;
  uStack_68 = *(undefined4 *)(lVar1 + 0x8c);
  FUN_14019e060(&fStack_78,&uStack_68,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40),
                &uStack_5c);
  lVar1 = *(longlong *)(param_1 + 0x90);
  *(undefined8 *)param_2 = *(undefined8 *)(lVar1 + 0x68);
  param_2[2] = *(float *)(lVar1 + 0x70);
  fVar3 = DAT_140492a88;
  if ((*(byte *)(param_1 + 0x98) & 8) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
    fStack_78 = fStack_78 - *(float *)(lVar1 + 0x68);
    fStack_70 = fStack_70 - *(float *)(lVar1 + 0x70);
    fStack_74 = fStack_74 - *(float *)(lVar1 + 0x6c);
    fVar3 = fStack_78 * fStack_78 + fStack_74 * fStack_74 + fStack_70 * fStack_70;
    if (fVar3 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041ade0();
    }
    fVar4 = fVar4 / SQRT(fVar3);
    fVar3 = fStack_70 * fVar4;
    fVar2 = fVar4 * fStack_74;
    fVar4 = fVar4 * fStack_78;
  }
  else {
    fVar4 = 0.0;
    *param_2 = fStack_78;
    fVar2 = 0.0;
    param_2[1] = fStack_74;
  }
  *param_3 = fVar4;
  param_3[1] = fVar2;
  param_3[2] = fVar3;
  return;
}

