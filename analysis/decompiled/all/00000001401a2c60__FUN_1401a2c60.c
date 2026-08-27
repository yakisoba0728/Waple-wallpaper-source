// Function: FUN_1401a2c60
// Addr: 1401a2c60
// Size: 481 bytes


void FUN_1401a2c60(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  code *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  
  lVar13 = (longlong)(param_3 - 1) >> 1;
  lVar10 = param_2;
  while (lVar10 < lVar13) {
    cVar8 = (*param_5)(param_1 + 0xc0 + lVar10 * 0xc0,param_1 + 0x60 + lVar10 * 0xc0);
    lVar9 = lVar10 * 0x60;
    lVar10 = (2 - (ulonglong)(cVar8 != '\0')) + lVar10 * 2;
    lVar11 = lVar10 * 0x60;
    uVar7 = ((undefined8 *)(lVar11 + param_1))[1];
    *(undefined8 *)(lVar9 + param_1) = *(undefined8 *)(lVar11 + param_1);
    ((undefined8 *)(lVar9 + param_1))[1] = uVar7;
    puVar12 = (undefined8 *)(lVar11 + 0x10 + param_1);
    uVar7 = puVar12[1];
    puVar1 = (undefined8 *)(lVar9 + 0x10 + param_1);
    *puVar1 = *puVar12;
    puVar1[1] = uVar7;
    puVar12 = (undefined8 *)(lVar11 + 0x20 + param_1);
    uVar7 = puVar12[1];
    puVar1 = (undefined8 *)(lVar9 + 0x20 + param_1);
    *puVar1 = *puVar12;
    puVar1[1] = uVar7;
    puVar12 = (undefined8 *)(lVar11 + 0x30 + param_1);
    uVar7 = puVar12[1];
    puVar1 = (undefined8 *)(lVar9 + 0x30 + param_1);
    *puVar1 = *puVar12;
    puVar1[1] = uVar7;
    puVar2 = (undefined4 *)(lVar11 + 0x40 + param_1);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (undefined4 *)(lVar9 + 0x40 + param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    puVar2 = (undefined4 *)(lVar11 + 0x50 + param_1);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (undefined4 *)(lVar9 + 0x50 + param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
  }
  if ((lVar10 == lVar13) && ((param_3 & 1) == 0)) {
    lVar13 = param_3 * 0x60;
    lVar10 = lVar10 * 0x60;
    puVar12 = (undefined8 *)(lVar13 + -0x60 + param_1);
    uVar7 = puVar12[1];
    *(undefined8 *)(lVar10 + param_1) = *puVar12;
    ((undefined8 *)(lVar10 + param_1))[1] = uVar7;
    puVar12 = (undefined8 *)(lVar13 + -0x50 + param_1);
    uVar7 = puVar12[1];
    puVar1 = (undefined8 *)(lVar10 + 0x10 + param_1);
    *puVar1 = *puVar12;
    puVar1[1] = uVar7;
    puVar12 = (undefined8 *)(lVar13 + -0x40 + param_1);
    uVar7 = puVar12[1];
    puVar1 = (undefined8 *)(lVar10 + 0x20 + param_1);
    *puVar1 = *puVar12;
    puVar1[1] = uVar7;
    puVar12 = (undefined8 *)(lVar13 + -0x30 + param_1);
    uVar7 = puVar12[1];
    puVar1 = (undefined8 *)(lVar10 + 0x30 + param_1);
    *puVar1 = *puVar12;
    puVar1[1] = uVar7;
    puVar2 = (undefined4 *)(lVar13 + -0x20 + param_1);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (undefined4 *)(lVar10 + 0x40 + param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    puVar2 = (undefined4 *)(lVar13 + -0x10 + param_1);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (undefined4 *)(lVar10 + 0x50 + param_1);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    lVar10 = param_3 - 1;
  }
  while (param_2 < lVar10) {
    lVar13 = lVar10 + -1 >> 1;
    puVar12 = (undefined8 *)(lVar13 * 0x60 + param_1);
    cVar8 = (*param_5)(puVar12,param_4);
    if (cVar8 == '\0') break;
    uVar7 = puVar12[1];
    lVar10 = lVar10 * 0x60;
    *(undefined8 *)(lVar10 + param_1) = *puVar12;
    ((undefined8 *)(lVar10 + param_1))[1] = uVar7;
    uVar7 = puVar12[3];
    puVar1 = (undefined8 *)(lVar10 + 0x10 + param_1);
    *puVar1 = puVar12[2];
    puVar1[1] = uVar7;
    uVar7 = puVar12[5];
    puVar1 = (undefined8 *)(lVar10 + 0x20 + param_1);
    *puVar1 = puVar12[4];
    puVar1[1] = uVar7;
    uVar7 = puVar12[7];
    puVar1 = (undefined8 *)(lVar10 + 0x30 + param_1);
    *puVar1 = puVar12[6];
    puVar1[1] = uVar7;
    uVar4 = *(undefined4 *)((longlong)puVar12 + 0x44);
    uVar5 = *(undefined4 *)(puVar12 + 9);
    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x4c);
    puVar2 = (undefined4 *)(lVar10 + 0x40 + param_1);
    *puVar2 = *(undefined4 *)(puVar12 + 8);
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    uVar4 = *(undefined4 *)((longlong)puVar12 + 0x54);
    uVar5 = *(undefined4 *)(puVar12 + 0xb);
    uVar6 = *(undefined4 *)((longlong)puVar12 + 0x5c);
    puVar2 = (undefined4 *)(lVar10 + 0x50 + param_1);
    *puVar2 = *(undefined4 *)(puVar12 + 10);
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    lVar10 = lVar13;
  }
  uVar7 = param_4[1];
  lVar10 = lVar10 * 0x60;
  *(undefined8 *)(lVar10 + param_1) = *param_4;
  ((undefined8 *)(lVar10 + param_1))[1] = uVar7;
  uVar7 = param_4[3];
  puVar12 = (undefined8 *)(lVar10 + 0x10 + param_1);
  *puVar12 = param_4[2];
  puVar12[1] = uVar7;
  uVar7 = param_4[5];
  puVar12 = (undefined8 *)(lVar10 + 0x20 + param_1);
  *puVar12 = param_4[4];
  puVar12[1] = uVar7;
  uVar7 = param_4[7];
  puVar12 = (undefined8 *)(lVar10 + 0x30 + param_1);
  *puVar12 = param_4[6];
  puVar12[1] = uVar7;
  uVar7 = param_4[9];
  puVar12 = (undefined8 *)(lVar10 + 0x40 + param_1);
  *puVar12 = param_4[8];
  puVar12[1] = uVar7;
  uVar7 = param_4[0xb];
  puVar12 = (undefined8 *)(lVar10 + 0x50 + param_1);
  *puVar12 = param_4[10];
  puVar12[1] = uVar7;
  return;
}

