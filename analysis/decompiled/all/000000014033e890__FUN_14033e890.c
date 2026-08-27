// Function: FUN_14033e890
// Addr: 14033e890
// Size: 468 bytes


void FUN_14033e890(uint *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  uint *puVar11;
  
  puVar11 = param_1 + 0x102;
  if (param_7 == 0) {
    puVar11 = param_1;
  }
  lVar9 = 0x60c;
  if (param_7 == 0) {
    lVar9 = 0x204;
  }
  puVar10 = (uint *)(lVar9 + (longlong)param_1);
  *puVar11 = 0;
  *puVar10 = 0;
  FUN_14033ea70(param_1,0,param_2,param_3,puVar11,puVar10);
  FUN_14033ea70(param_1,1,param_4,param_5,puVar11,puVar10);
  uVar1 = *puVar11;
  uVar2 = *puVar10;
  if (uVar1 != 0) {
    puVar10 = puVar11 + 1;
    uVar8 = uVar1;
    do {
      if ((1 < uVar8) && ((int)(puVar10[8] - *puVar10) < (int)puVar10[1])) {
        puVar10[1] = puVar10[8] - *puVar10;
      }
      puVar10[3] = *puVar10;
      puVar10[2] = *puVar10 + puVar10[1];
      puVar10 = puVar10 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  lVar9 = 0x610;
  if (uVar2 != 0) {
    lVar6 = 0x610;
    if (param_7 == 0) {
      lVar6 = 0x208;
    }
    piVar7 = (int *)(lVar6 + (longlong)param_1);
    uVar8 = uVar2;
    do {
      if ((1 < uVar8) && (piVar7[1] < *piVar7 - piVar7[8])) {
        piVar7[1] = *piVar7 - piVar7[8];
      }
      piVar7[2] = *piVar7;
      piVar7[3] = *piVar7 + piVar7[1];
      piVar7 = piVar7 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (uVar1 != 0) {
    puVar11[4] = puVar11[4] - param_6;
    uVar8 = puVar11[3];
    puVar11 = puVar11 + 1;
    while (uVar1 = uVar1 - 1, uVar1 != 0) {
      iVar3 = (int)(puVar11[0xb] - uVar8) / 2;
      uVar5 = iVar3 + uVar8;
      if (param_6 <= iVar3) {
        uVar5 = puVar11[0xb] - param_6;
        iVar3 = param_6;
      }
      puVar11[0xb] = uVar5;
      puVar11[2] = iVar3 + uVar8;
      uVar8 = puVar11[10];
      puVar11 = puVar11 + 8;
    }
    puVar11[2] = uVar8 + param_6;
  }
  if (uVar2 != 0) {
    if (param_7 == 0) {
      lVar9 = 0x208;
    }
    piVar7 = (int *)(lVar9 + 0xc + (longlong)param_1);
    *piVar7 = *piVar7 - param_6;
    iVar3 = *(int *)(lVar9 + 8 + (longlong)param_1);
    lVar9 = lVar9 + (longlong)param_1;
    while (uVar2 = uVar2 - 1, uVar2 != 0) {
      iVar4 = (*(int *)(lVar9 + 0x2c) - iVar3) / 2;
      if (iVar4 < param_6) {
        iVar4 = iVar4 + iVar3;
        *(int *)(lVar9 + 0x2c) = iVar4;
        *(int *)(lVar9 + 8) = iVar4;
      }
      else {
        *(int *)(lVar9 + 8) = iVar3 + param_6;
        *(int *)(lVar9 + 0x2c) = *(int *)(lVar9 + 0x2c) - param_6;
      }
      iVar3 = *(int *)(lVar9 + 0x28);
      lVar9 = lVar9 + 0x20;
    }
    *(int *)(lVar9 + 8) = iVar3 + param_6;
  }
  return;
}

