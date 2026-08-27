// Function: FUN_140350750
// Addr: 140350750
// Size: 522 bytes


void FUN_140350750(longlong param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar10 = *(int *)(param_1 + 0x18);
  uVar11 = *(uint *)(param_1 + 0x70) & 2;
  uVar12 = 0x80000000;
  if (uVar11 != 0) {
    uVar12 = 0x100;
  }
  iVar9 = iVar10;
  if (iVar10 < *(int *)(param_1 + 0x1c)) {
    do {
      iVar7 = *(int *)(param_1 + 0x10);
      iVar6 = 0;
      piVar4 = *(int **)(*(longlong *)(param_1 + 0x40) + (longlong)(iVar10 - iVar9) * 8);
      lVar5 = *(longlong *)(param_1 + 0x78) - (longlong)(iVar10 * *(int *)(param_1 + 0x80));
      if (piVar4 != *(int **)(param_1 + 0x38)) {
        do {
          if ((iVar6 != 0) && (iVar7 < *piVar4)) {
            uVar1 = iVar6 >> 9;
            uVar3 = ~uVar1;
            if ((uVar12 & uVar1) == 0) {
              uVar3 = uVar1;
            }
            if ((0xff < (int)uVar3) && (uVar11 == 0)) {
              uVar3 = 0xff;
            }
            iVar9 = *piVar4 - iVar7;
            puVar8 = (undefined1 *)(iVar7 + lVar5);
            uVar2 = (undefined1)uVar3;
            switch(iVar9) {
            case 0:
              break;
            case 7:
              *puVar8 = uVar2;
              puVar8 = puVar8 + 1;
            case 6:
              *puVar8 = uVar2;
              puVar8 = puVar8 + 1;
            case 5:
              *puVar8 = uVar2;
              puVar8 = puVar8 + 1;
            case 4:
              *puVar8 = uVar2;
              puVar8 = puVar8 + 1;
            case 3:
              *puVar8 = uVar2;
              puVar8 = puVar8 + 1;
            case 2:
              *puVar8 = uVar2;
              puVar8 = puVar8 + 1;
            case 1:
              *puVar8 = uVar2;
              break;
            default:
              FUN_1404217a0(puVar8,uVar3,(longlong)iVar9);
            }
          }
          iVar6 = iVar6 + piVar4[1] * 0x200;
          if ((iVar6 - piVar4[2] != 0) && (*(int *)(param_1 + 0x10) <= *piVar4)) {
            uVar1 = iVar6 - piVar4[2] >> 9;
            uVar3 = ~uVar1;
            if ((uVar12 & uVar1) == 0) {
              uVar3 = uVar1;
            }
            if ((0xff < (int)uVar3) && (uVar11 == 0)) {
              uVar3 = 0xff;
            }
            *(char *)(*piVar4 + lVar5) = (char)uVar3;
          }
          iVar7 = *piVar4;
          piVar4 = *(int **)(piVar4 + 4);
          iVar7 = iVar7 + 1;
        } while (piVar4 != *(int **)(param_1 + 0x38));
        iVar9 = *(int *)(param_1 + 0x18);
        if (iVar6 != 0) {
          uVar1 = iVar6 >> 9;
          uVar3 = ~uVar1;
          if ((uVar12 & uVar1) == 0) {
            uVar3 = uVar1;
          }
          if ((0xff < (int)uVar3) && (uVar11 == 0)) {
            uVar3 = 0xff;
          }
          iVar9 = *(int *)(param_1 + 0x14) - iVar7;
          puVar8 = (undefined1 *)(iVar7 + lVar5);
          uVar2 = (undefined1)uVar3;
          switch(iVar9) {
          case 0:
            break;
          case 7:
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
          case 6:
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
          case 5:
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
          case 4:
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
          case 3:
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
          case 2:
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
          case 1:
            *puVar8 = uVar2;
            break;
          default:
            FUN_1404217a0(puVar8,uVar3,(longlong)iVar9);
          }
          iVar9 = *(int *)(param_1 + 0x18);
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x1c));
  }
  return;
}

