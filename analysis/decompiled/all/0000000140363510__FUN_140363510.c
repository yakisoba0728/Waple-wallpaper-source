// Function: FUN_140363510
// Addr: 140363510
// Size: 529 bytes


void FUN_140363510(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  
  uVar10 = param_2 - param_1 >> 1;
  lVar11 = param_2 - param_1 >> 2;
  if (0 < lVar11) {
    lVar6 = (longlong)(uVar10 - 1) >> 1;
    do {
      uVar1 = *(undefined2 *)(param_1 + -2 + lVar11 * 2);
      lVar11 = lVar11 + -1;
      lVar4 = lVar11;
      while (lVar4 < lVar6) {
        lVar9 = lVar4 * 2 + 2;
        lVar7 = FUN_1403c03e0(*param_3,local_68,*(undefined2 *)(param_1 + -2 + lVar9 * 2));
        lVar8 = FUN_1403c03e0(*param_3,local_50,*(undefined2 *)(param_1 + lVar9 * 2));
        uVar3 = *(uint *)(lVar8 + 0x10);
        if (uVar3 == *(uint *)(lVar7 + 0x10)) {
          if (uVar3 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = memcmp(*(void **)(lVar7 + 8),*(void **)(lVar8 + 8),(ulonglong)uVar3);
          }
        }
        else {
          iVar5 = *(uint *)(lVar7 + 0x10) - uVar3;
        }
        lVar7 = lVar4 * 2 + 1;
        if (iVar5 < 1) {
          lVar7 = lVar9;
        }
        *(undefined2 *)(param_1 + lVar4 * 2) = *(undefined2 *)(param_1 + lVar7 * 2);
        lVar4 = lVar7;
      }
      if ((lVar4 == lVar6) && ((uVar10 & 1) == 0)) {
        *(undefined2 *)(param_1 + lVar4 * 2) = *(undefined2 *)(param_1 + -2 + uVar10 * 2);
        lVar4 = uVar10 - 1;
      }
      while (lVar11 < lVar4) {
        lVar8 = lVar4 + -1 >> 1;
        lVar9 = FUN_1403c03e0(*param_3,local_50,uVar1);
        uVar2 = *(undefined2 *)(param_1 + lVar8 * 2);
        lVar7 = FUN_1403c03e0(*param_3,local_68,uVar2);
        uVar3 = *(uint *)(lVar7 + 0x10);
        if (uVar3 == *(uint *)(lVar9 + 0x10)) {
          if (uVar3 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = memcmp(*(void **)(lVar9 + 8),*(void **)(lVar7 + 8),(ulonglong)uVar3);
          }
        }
        else {
          iVar5 = *(uint *)(lVar9 + 0x10) - uVar3;
        }
        if (iVar5 < 1) break;
        *(undefined2 *)(param_1 + lVar4 * 2) = uVar2;
        lVar4 = lVar8;
      }
      *(undefined2 *)(param_1 + lVar4 * 2) = uVar1;
    } while (0 < lVar11);
  }
  return;
}

