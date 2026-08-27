// Function: FUN_140228ef0
// Addr: 140228ef0
// Size: 294 bytes


void FUN_140228ef0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  code *param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  
  lVar11 = (longlong)(param_3 - 1) >> 1;
  lVar9 = param_2;
  while (lVar9 < lVar11) {
    cVar10 = (*param_5)(param_1 + 0x30 + lVar9 * 0x30,param_1 + 0x18 + lVar9 * 0x30);
    lVar1 = (2 - (ulonglong)(cVar10 != '\0')) + lVar9 * 2;
    puVar2 = (undefined4 *)(param_1 + lVar1 * 0x18);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)(param_1 + lVar9 * 0x18);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    *(undefined8 *)(param_1 + 0x10 + lVar9 * 0x18) = *(undefined8 *)(param_1 + 0x10 + lVar1 * 0x18);
    lVar9 = lVar1;
  }
  if ((lVar9 == lVar11) && ((param_3 & 1) == 0)) {
    puVar3 = (undefined4 *)(param_1 + -0x18 + param_3 * 0x18);
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    puVar2 = (undefined4 *)(param_1 + lVar9 * 0x18);
    *puVar2 = *puVar3;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(undefined8 *)(param_1 + 0x10 + lVar9 * 0x18) = *(undefined8 *)(param_1 + -8 + param_3 * 0x18);
    lVar9 = param_3 - 1;
  }
  while (param_2 < lVar9) {
    lVar11 = lVar9 + -1 >> 1;
    puVar2 = (undefined4 *)(param_1 + lVar11 * 0x18);
    cVar10 = (*param_5)(puVar2,param_4);
    if (cVar10 == '\0') break;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (undefined4 *)(param_1 + lVar9 * 0x18);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    *(undefined8 *)(param_1 + 0x10 + lVar9 * 0x18) = *(undefined8 *)(puVar2 + 4);
    lVar9 = lVar11;
  }
  uVar8 = param_4[1];
  puVar4 = (undefined8 *)(param_1 + lVar9 * 0x18);
  *puVar4 = *param_4;
  puVar4[1] = uVar8;
  *(undefined8 *)(param_1 + 0x10 + lVar9 * 0x18) = param_4[2];
  return;
}

