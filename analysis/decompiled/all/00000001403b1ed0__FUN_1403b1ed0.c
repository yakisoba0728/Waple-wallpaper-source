// Function: FUN_1403b1ed0
// Addr: 1403b1ed0
// Size: 964 bytes


void FUN_1403b1ed0(longlong param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  lVar3 = *(longlong *)(param_1 + 0x70);
  uVar8 = *(uint *)(param_1 + 0x60);
  uVar14 = 0;
  uVar10 = 0;
  uVar12 = 0xffffffff;
  if (*(int *)(param_1 + 0xb0) != 0) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x10);
      lVar13 = param_1 + uVar10 * 4;
      uVar5 = (**(code **)(lVar4 + 0x28))
                        (lVar4,*(undefined4 *)(lVar13 + 0x88),*(undefined8 *)(lVar4 + 0x68));
      uVar6 = FUN_1403cb1c0(*(undefined4 *)(lVar13 + 0x88),uVar5);
      if (uVar6 != 6) {
        uVar14 = (ulonglong)*(ushort *)(&DAT_14046fdb2 + (ulonglong)uVar6 * 4);
        break;
      }
      uVar6 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0xb0));
  }
  uVar6 = 0;
  if (uVar8 != 0) {
    lVar13 = 0;
    do {
      puVar1 = (undefined4 *)(lVar3 + lVar13 * 0x14);
      uVar7 = FUN_1403cb1c0(*puVar1,*(ushort *)(lVar3 + 0x10 + lVar13 * 0x14) & 0x1f);
      if (uVar7 == 6) {
        *(undefined1 *)((longlong)puVar1 + 0x13) = 7;
      }
      else {
        lVar4 = ((ulonglong)uVar7 + uVar14 * 6) * 4;
        uVar11 = (uint)uVar12;
        if ((&DAT_14046fdb0)[lVar4] == '\a') {
          if (uVar11 == 0xffffffff) goto LAB_1403b2102;
          if ((((1 < uVar7) || ((int)uVar14 - 2U < 4)) && ((*(byte *)(param_1 + 0x18) & 0x40) != 0))
             && ((uVar7 = uVar6 + 1, uVar6 == 0xfffffffe || (uVar7 - uVar11 < 0x100)))) {
            uVar9 = *(uint *)(param_1 + 0x60);
            if (uVar7 <= *(uint *)(param_1 + 0x60)) {
              uVar9 = uVar7;
            }
            while (uVar11 < uVar9) {
              uVar11 = (int)uVar12 + 1;
              puVar2 = (uint *)(*(longlong *)(param_1 + 0x70) + 4 + uVar12 * 0x14);
              *puVar2 = *puVar2 | 2;
              uVar12 = (ulonglong)uVar11;
            }
          }
        }
        else if (uVar11 == 0xffffffff) {
LAB_1403b2102:
          if (((1 < uVar7) && ((*(byte *)(param_1 + 0x18) & 0x40) != 0)) &&
             ((uVar7 = uVar6 + 1, uVar6 == 0xfffffffe || (uVar7 < 0x100)))) {
            uVar11 = *(uint *)(param_1 + 0x60);
            if (uVar7 <= *(uint *)(param_1 + 0x60)) {
              uVar11 = uVar7;
            }
            uVar12 = 0;
            if (*(char *)(param_1 + 0x59) == '\0') {
              if (uVar11 != 0) {
                do {
                  uVar7 = (int)uVar12 + 1;
                  puVar2 = (uint *)(*(longlong *)(param_1 + 0x70) + 4 + uVar12 * 0x14);
                  *puVar2 = *puVar2 | 2;
                  uVar12 = (ulonglong)uVar7;
                } while (uVar7 < uVar11);
              }
            }
            else {
              if (*(int *)(param_1 + 100) != 0) {
                do {
                  uVar7 = (int)uVar12 + 1;
                  puVar2 = (uint *)(*(longlong *)(param_1 + 0x78) + 4 + uVar12 * 0x14);
                  *puVar2 = *puVar2 | 2;
                  uVar12 = (ulonglong)uVar7;
                } while (uVar7 < *(uint *)(param_1 + 100));
              }
              for (uVar7 = *(uint *)(param_1 + 0x5c); uVar7 < uVar11; uVar7 = uVar7 + 1) {
                puVar2 = (uint *)(*(longlong *)(param_1 + 0x70) + 4 + (ulonglong)uVar7 * 0x14);
                *puVar2 = *puVar2 | 2;
              }
            }
          }
        }
        else {
          *(undefined *)(lVar3 + 0x13 + uVar12 * 0x14) = (&DAT_14046fdb0)[lVar4];
          uVar7 = uVar6 + 1;
          if ((*(byte *)(param_1 + 0x18) & 0x80) == 0) {
            FUN_14040eef0(param_1,uVar12,uVar7);
          }
          else if ((uVar7 == 0xffffffff) || (uVar7 - uVar11 < 0x100)) {
            uVar9 = *(uint *)(param_1 + 0x60);
            if (uVar7 <= *(uint *)(param_1 + 0x60)) {
              uVar9 = uVar7;
            }
            if (1 < uVar9 - uVar11) {
              uVar5 = FUN_1403a1a20(param_1,*(undefined8 *)(param_1 + 0x70),uVar12,uVar9,0xffffffff)
              ;
              FUN_1403a1bc0(param_1,*(undefined8 *)(param_1 + 0x70),uVar12,uVar9,uVar5,4);
            }
          }
        }
        uVar12 = (ulonglong)uVar6;
        *(undefined *)((longlong)puVar1 + 0x13) = (&DAT_14046fdb1)[lVar4];
        uVar14 = (ulonglong)*(ushort *)(&DAT_14046fdb2 + lVar4);
      }
      uVar6 = uVar6 + 1;
      lVar13 = lVar13 + 1;
    } while (uVar6 < uVar8);
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    while( true ) {
      lVar4 = *(longlong *)(param_1 + 0x10);
      lVar13 = param_1 + uVar10 * 4;
      uVar5 = (**(code **)(lVar4 + 0x28))
                        (lVar4,*(undefined4 *)(lVar13 + 0x9c),*(undefined8 *)(lVar4 + 0x68));
      uVar8 = FUN_1403cb1c0(*(undefined4 *)(lVar13 + 0x9c),uVar5);
      if (uVar8 != 6) break;
      uVar8 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar8;
      if (*(uint *)(param_1 + 0xb4) <= uVar8) {
        return;
      }
    }
    uVar6 = (uint)uVar12;
    if (((&DAT_14046fdb0)[((ulonglong)uVar8 + uVar14 * 6) * 4] != '\a') && (uVar6 != 0xffffffff)) {
      *(undefined *)(lVar3 + 0x13 + uVar12 * 0x14) =
           (&DAT_14046fdb0)[((ulonglong)uVar8 + uVar14 * 6) * 4];
      FUN_1403fb190(param_1,uVar12,*(undefined4 *)(param_1 + 0x60));
      return;
    }
    if ((((int)uVar14 - 2U < 4) && ((*(byte *)(param_1 + 0x18) & 0x40) != 0)) &&
       ((uVar8 = *(uint *)(param_1 + 0x60), uVar8 == 0xffffffff || (uVar8 - uVar6 < 0x100)))) {
      while (uVar6 < uVar8) {
        uVar6 = (int)uVar12 + 1;
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x70) + 4 + uVar12 * 0x14);
        *puVar2 = *puVar2 | 2;
        uVar12 = (ulonglong)uVar6;
      }
    }
  }
  return;
}

