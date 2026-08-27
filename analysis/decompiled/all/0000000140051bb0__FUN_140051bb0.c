// Function: FUN_140051bb0
// Addr: 140051bb0
// Size: 216 bytes


undefined8 * FUN_140051bb0(short *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  psVar2 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar2 = *(short **)param_1;
  }
  psVar3 = psVar2 + *(longlong *)(param_1 + 8);
  psVar1 = (short *)FUN_140015e90();
  if ((psVar2 == psVar1) && (psVar1 != psVar3)) {
    do {
      if ((*psVar1 != 0x5c) && (*psVar1 != 0x2f)) break;
      psVar1 = psVar1 + 1;
    } while (psVar1 != psVar3);
    if ((psVar2 == psVar1) && (psVar1 != psVar3)) {
      while (*psVar1 != 0x5c) {
        if ((*psVar1 == 0x2f) || (psVar1 = psVar1 + 1, psVar1 == psVar3)) break;
      }
    }
  }
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140016170(&local_28,psVar2,(longlong)psVar1 - (longlong)psVar2 >> 1);
  psVar2 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar2 = *(short **)param_1;
  }
  *param_2 = psVar2;
  param_2[1] = local_28;
  param_2[2] = uStack_20;
  param_2[3] = local_18;
  param_2[4] = uStack_10;
  param_2[5] = param_1;
  return param_2;
}

