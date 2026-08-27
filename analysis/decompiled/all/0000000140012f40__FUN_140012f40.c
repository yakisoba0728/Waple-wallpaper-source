// Function: FUN_140012f40
// Addr: 140012f40
// Size: 156 bytes


ulonglong FUN_140012f40(float *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar4 = (float)FUN_140419fa0((float)param_2 / *param_1);
  lVar2 = 0;
  if ((DAT_140492974 <= fVar4) && (fVar4 = fVar4 - DAT_140492974, fVar4 < DAT_140492974)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar4 + lVar2)) {
    uVar3 = (longlong)fVar4 + lVar2;
  }
  if (uVar3 <= uVar1) {
    return uVar1;
  }
  if ((uVar1 < 0x200) && (uVar3 <= uVar1 * 8)) {
    uVar3 = uVar1 * 8;
  }
  return uVar3;
}

