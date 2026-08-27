// Function: FUN_1403be160
// Addr: 1403be160
// Size: 735 bytes


void FUN_1403be160(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  longlong local_48;
  
  uVar3 = *(uint *)(param_2 + 0x60);
  uVar20 = 0;
  lVar5 = *(longlong *)(param_2 + 0x70);
  uVar11 = 0;
  iVar21 = 3;
  iVar19 = 2;
  if (uVar3 != 0) {
    local_48 = 0;
    iVar9 = DAT_14045f05c._4_4_;
    iVar10 = DAT_14045f0e0;
    iVar18 = DAT_14045f050;
    iVar17 = (int)DAT_14045f054;
    iVar16 = DAT_14045f054._4_4_;
    iVar14 = (int)DAT_14045f05c;
    iVar13 = DAT_14045f0d8._4_4_;
    iVar12 = (int)DAT_14045f0d8;
    do {
      puVar1 = (undefined4 *)(lVar5 + local_48 * 0x14);
      iVar4 = *(int *)(lVar5 + local_48 * 0x14);
      if ((((iVar4 == 0xe31) || (iVar4 - 0xe34U < 4)) || (iVar4 == 0xe47)) || (iVar4 - 0xe4dU < 2))
      {
        lVar15 = 0;
LAB_1403be2e4:
        lVar2 = (lVar15 + (longlong)iVar21 * 3) * 8;
        iVar9 = *(int *)(&UNK_14045f070 + lVar2);
        iVar21 = *(int *)(&UNK_14045f074 + lVar2);
        lVar15 = lVar15 + (longlong)iVar19 * 3;
        iVar19 = *(int *)(&UNK_14045f104 + lVar15 * 8);
        if (iVar9 == 0) {
          iVar9 = *(int *)(&UNK_14045f100 + lVar15 * 8);
        }
        if ((uVar11 == 0xffffffff) || (uVar11 - uVar20 < 0x100)) {
          uVar7 = *(uint *)(param_2 + 0x60);
          if (uVar11 <= *(uint *)(param_2 + 0x60)) {
            uVar7 = uVar11;
          }
          if (1 < uVar7 - uVar20) {
            uVar6 = *(undefined8 *)(param_2 + 0x70);
            uVar8 = FUN_1403a1a20(param_2,uVar6,uVar20,uVar7,0xffffffff);
            FUN_1403a1bc0(param_2,uVar6,uVar20,uVar7,uVar8,3);
          }
        }
        if (iVar9 == 4) {
          uVar8 = FUN_14040c970(*(undefined4 *)(lVar5 + (ulonglong)uVar20 * 0x14),4,param_3);
          *(undefined4 *)(lVar5 + (ulonglong)uVar20 * 0x14) = uVar8;
          iVar9 = DAT_14045f05c._4_4_;
          iVar10 = DAT_14045f0e0;
          iVar18 = DAT_14045f050;
          iVar16 = DAT_14045f054._4_4_;
          iVar14 = (int)DAT_14045f05c;
          iVar17 = (int)DAT_14045f054;
          iVar13 = DAT_14045f0d8._4_4_;
          iVar12 = (int)DAT_14045f0d8;
        }
        else {
          uVar8 = FUN_14040c970(*puVar1,iVar9,param_3);
          *puVar1 = uVar8;
          iVar9 = DAT_14045f05c._4_4_;
          iVar10 = DAT_14045f0e0;
          iVar18 = DAT_14045f050;
          iVar16 = DAT_14045f054._4_4_;
          iVar14 = (int)DAT_14045f05c;
          iVar17 = (int)DAT_14045f054;
          iVar13 = DAT_14045f0d8._4_4_;
          iVar12 = (int)DAT_14045f0d8;
        }
      }
      else {
        if (iVar4 - 0xe38U < 3) {
          lVar15 = 1;
          goto LAB_1403be2e4;
        }
        if (iVar4 - 0xe48U < 5) {
          lVar15 = 2;
          goto LAB_1403be2e4;
        }
        uVar20 = uVar11;
        if ((((iVar4 - 0xe1bU & 0xfffffff9) != 0) ||
            (iVar19 = DAT_14045f0d4, iVar21 = iVar17, iVar4 == 0xe21)) &&
           ((iVar19 = iVar12, iVar21 = iVar16, iVar4 != 0xe0d &&
            (((iVar4 != 0xe10 && (iVar19 = iVar13, iVar21 = iVar14, 1 < iVar4 - 0xe0eU)) &&
             (iVar19 = iVar10, iVar21 = iVar9, iVar4 - 0xe01U < 0x2e)))))) {
          iVar19 = DAT_14045f0d0;
          iVar21 = iVar18;
        }
      }
      uVar11 = uVar11 + 1;
      local_48 = local_48 + 1;
    } while (uVar11 < uVar3);
  }
  return;
}

