// Function: FUN_14039a9c0
// Addr: 14039a9c0
// Size: 167 bytes


undefined8 * FUN_14039a9c0(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 local_78;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar9 = (undefined8 *)(param_1 + 8);
  if (param_1 == -9) {
    puVar9 = (undefined8 *)0x0;
  }
  uVar3 = *puVar9;
  iVar7 = *(int *)((longlong)puVar9 + 0x14) + *(uint *)(puVar9 + 2);
  lVar8 = puVar9[1] + (ulonglong)*(uint *)(puVar9 + 2) * 0x18;
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    cVar5 = (*pcVar1)(lVar8);
    if ((cVar5 != '\0') || (iVar6 == 0)) break;
    iVar7 = iVar7 + 1;
    lVar8 = lVar8 + 0x18;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *param_2 = local_78;
  param_2[1] = uVar3;
  param_2[2] = lVar8;
  *(int *)(param_2 + 3) = iVar6;
  *(int *)((longlong)param_2 + 0x1c) = iVar7;
  param_2[4] = pcVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar4;
  return param_2;
}

