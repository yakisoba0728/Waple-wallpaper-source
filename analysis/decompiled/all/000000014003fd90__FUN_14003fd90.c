// Function: FUN_14003fd90
// Addr: 14003fd90
// Size: 221 bytes


undefined8 * FUN_14003fd90(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  psVar2 = (short *)((longlong)puVar4 + param_1[2] * 2);
  for (psVar1 = (short *)FUN_140015e90(puVar4); psVar1 != psVar2; psVar1 = psVar1 + 1) {
    if ((*psVar1 != 0x5c) && (psVar3 = psVar2, *psVar1 != 0x2f)) goto LAB_14003fde0;
  }
  goto LAB_14003fe2f;
  while (psVar3 = psVar2, psVar1 != psVar2) {
LAB_14003fde0:
    psVar2 = psVar3 + -1;
    if ((psVar3[-1] == 0x5c) || (psVar3[-1] == 0x2f)) goto joined_r0x00014003fe04;
  }
  goto LAB_14003fe2f;
  while( true ) {
    psVar3 = psVar2 + -1;
    if ((psVar2[-1] != 0x5c) && (psVar2[-1] != 0x2f)) break;
joined_r0x00014003fe04:
    psVar2 = psVar3;
    if (psVar1 == psVar2) break;
  }
LAB_14003fe2f:
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140016170(&local_28,puVar4,(longlong)psVar2 - (longlong)puVar4 >> 1);
  *param_2 = local_28;
  param_2[1] = uStack_20;
  param_2[2] = local_18;
  param_2[3] = uStack_10;
  return param_2;
}

