// Function: FUN_140053c10
// Addr: 140053c10
// Size: 160 bytes


undefined8 * FUN_140053c10(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined8 *puVar4;
  short *psVar5;
  
  puVar4 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  psVar2 = (short *)((longlong)puVar4 + param_1[2] * 2);
  psVar5 = psVar2;
  for (psVar3 = (short *)FUN_140015e90(puVar4,psVar2); psVar3 != psVar2; psVar3 = psVar3 + 1) {
    if ((*psVar3 != 0x5c) && (*psVar3 != 0x2f)) goto LAB_140053c61;
  }
LAB_140053c7e:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_140016170(param_2,psVar5,(longlong)psVar2 - (longlong)psVar5 >> 1);
  return param_2;
LAB_140053c61:
  psVar1 = psVar5 + -1;
  if (psVar5[-1] == 0x5c) goto LAB_140053c7e;
  if ((psVar5[-1] == 0x2f) || (psVar5 = psVar1, psVar3 == psVar1)) goto LAB_140053c7e;
  goto LAB_140053c61;
}

