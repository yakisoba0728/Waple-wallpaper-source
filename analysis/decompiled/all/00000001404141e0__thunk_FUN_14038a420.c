// Function: thunk_FUN_14038a420
// Addr: 1404141e0
// Size: 5 bytes


void thunk_FUN_14038a420(longlong param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  
  uVar11 = (ulonglong)param_3;
  uVar1 = *(uint *)(param_1 + 0x20);
  if (*(char *)(param_1 + 4) != '\0') {
    if (param_3 == 0xffffffff) {
      uVar11 = 0;
      iVar2 = *param_2;
      piVar9 = param_2;
      while (iVar2 != 0) {
        piVar9 = piVar9 + 1;
        uVar11 = (ulonglong)((int)uVar11 + 1);
        iVar2 = *piVar9;
      }
    }
    uVar10 = (uint)uVar11;
    if (param_5 == 0xffffffff) {
      param_5 = uVar10 - param_4;
    }
    if (param_4 <= uVar10) {
      uVar11 = (ulonglong)param_4;
    }
    uVar12 = uVar10 - (int)uVar11;
    uVar6 = 0;
    if (-1 < (int)param_5) {
      uVar6 = param_5;
    }
    if ((int)uVar6 <= (int)uVar12) {
      uVar12 = uVar6;
    }
    if ((uVar12 < 0x10000000) && (cVar5 = FUN_1403bf1a0(param_1), cVar5 != '\0')) {
      if ((*(int *)(param_1 + 0x60) == 0) && ((int)uVar11 != 0)) {
        piVar9 = param_2 + uVar11;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        if (param_2 < piVar9) {
          uVar6 = 0;
          do {
            if (4 < uVar6) break;
            uVar8 = piVar9[-1];
            piVar9 = piVar9 + -1;
            if ((uVar8 - 0xd800 < 0x800) || (0x10ffff < uVar8)) {
              uVar8 = uVar1;
            }
            *(uint *)(param_1 + 0x88 + (ulonglong)uVar6 * 4) = uVar8;
            *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
            uVar6 = *(uint *)(param_1 + 0xb0);
          } while (param_2 < piVar9);
        }
      }
      puVar4 = (uint *)(param_2 + uVar11);
      while (puVar13 = puVar4, puVar13 < param_2 + uVar11 + (int)uVar12) {
        uVar6 = *puVar13;
        if ((uVar6 - 0xd800 < 0x800) || (0x10ffff < uVar6)) {
          uVar6 = uVar1;
        }
        cVar5 = FUN_1403bf1a0(param_1);
        puVar4 = puVar13 + 1;
        if (cVar5 != '\0') {
          uVar7 = (ulonglong)*(uint *)(param_1 + 0x60);
          lVar3 = *(longlong *)(param_1 + 0x70);
          *(undefined8 *)(lVar3 + 0xc + uVar7 * 0x14) = 0;
          *(uint *)(lVar3 + uVar7 * 0x14) = uVar6;
          *(undefined4 *)(lVar3 + 4 + uVar7 * 0x14) = 0;
          *(int *)(lVar3 + 8 + uVar7 * 0x14) = (int)((longlong)puVar13 - (longlong)param_2 >> 2);
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        }
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (puVar13 < param_2 + (int)uVar10) {
        uVar6 = 0;
        do {
          if (4 < uVar6) break;
          uVar12 = *puVar13;
          if ((uVar12 - 0xd800 < 0x800) || (0x10ffff < uVar12)) {
            uVar12 = uVar1;
          }
          puVar13 = puVar13 + 1;
          *(uint *)(param_1 + 0x9c + (ulonglong)uVar6 * 4) = uVar12;
          *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
          uVar6 = *(uint *)(param_1 + 0xb4);
        } while (puVar13 < param_2 + (int)uVar10);
      }
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}

