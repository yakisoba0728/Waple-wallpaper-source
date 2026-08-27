// Function: FUN_14003fbc0
// Addr: 14003fbc0
// Size: 183 bytes


undefined8 * FUN_14003fbc0(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined8 *puVar4;
  short *psVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  psVar2 = (short *)((longlong)puVar4 + param_1[2] * 2);
  psVar5 = psVar2;
  for (psVar3 = (short *)FUN_140015e90(puVar4,psVar2); psVar3 != psVar2; psVar3 = psVar3 + 1) {
    if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) goto LAB_14003fc11;
  }
LAB_14003fc2e:
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140016170(&local_28,psVar5,(longlong)psVar2 - (longlong)psVar5 >> 1);
  *param_2 = local_28;
  param_2[1] = uStack_20;
  param_2[2] = local_18;
  param_2[3] = uStack_10;
  return param_2;
LAB_14003fc11:
  psVar1 = psVar5 + -1;
  if (psVar5[-1] == 0x5c) goto LAB_14003fc2e;
  if ((psVar5[-1] == 0x2f) || (psVar5 = psVar1, psVar3 == psVar1)) goto LAB_14003fc2e;
  goto LAB_14003fc11;
}

