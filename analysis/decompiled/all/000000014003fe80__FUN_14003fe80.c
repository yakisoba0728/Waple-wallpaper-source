// Function: FUN_14003fe80
// Addr: 14003fe80
// Size: 265 bytes


undefined8 * FUN_14003fe80(undefined8 *param_1)

{
  short *psVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  short *psVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  short *psVar9;
  int local_38 [2];
  undefined **local_30;
  undefined1 local_28 [32];
  
  uVar2 = param_1[3];
  puVar7 = param_1;
  if (7 < uVar2) {
    puVar7 = (undefined8 *)*param_1;
  }
  uVar3 = param_1[2];
  psVar9 = (short *)((longlong)puVar7 + uVar3 * 2);
  for (psVar5 = (short *)FUN_140015e90(puVar7); psVar5 != psVar9; psVar5 = psVar5 + 1) {
    if ((*psVar5 != 0x5c) && (*psVar5 != 0x2f)) goto LAB_14003fee0;
  }
LAB_14003feff:
  uVar6 = (longlong)psVar9 - (longlong)puVar7 >> 1;
  if (uVar3 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_140012940();
  }
  param_1[2] = uVar6;
  puVar8 = param_1;
  if (7 < uVar2) {
    puVar8 = (undefined8 *)*param_1;
  }
  local_38[0] = 0;
  *(undefined2 *)(((longlong)psVar9 - (longlong)puVar7 & 0xfffffffffffffffeU) + (longlong)puVar8) =
       0;
  local_30 = &PTR_PTR_1404df530;
  FUN_140051fc0(local_28,param_1,local_38);
  if (local_38[0] == 0) {
    FUN_140016560(param_1,local_28);
    FUN_140016770(local_28);
    return param_1;
  }
  FUN_140053bc0();
  pcVar4 = (code *)swi(3);
  puVar7 = (undefined8 *)(*pcVar4)();
  return puVar7;
LAB_14003fee0:
  psVar1 = psVar9 + -1;
  if (psVar9[-1] == 0x5c) goto LAB_14003feff;
  if ((psVar9[-1] == 0x2f) || (psVar9 = psVar1, psVar5 == psVar1)) goto LAB_14003feff;
  goto LAB_14003fee0;
}

