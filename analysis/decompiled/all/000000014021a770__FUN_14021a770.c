// Function: FUN_14021a770
// Addr: 14021a770
// Size: 997 bytes


void FUN_14021a770(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  byte bStackX_9;
  byte bStackX_a;
  byte bStackX_b;
  undefined1 local_48 [16];
  
  *param_1 = &PTR_DAT_140491408;
  if (param_1[0x58] != param_1[0x59]) {
    param_1[0x59] = param_1[0x58];
  }
  uVar18 = 0;
  if (param_1[0x5b] != 0) {
    func_0x00014028b040(*(undefined8 *)(param_1[0x5b] + 0x90));
    return;
  }
  uVar5 = *(uint *)((longlong)param_1 + 0x314);
  uVar16 = 0xcbf29ce484222325;
  if (uVar5 != 0) {
    uVar12 = param_1[0x5e];
    if (uVar12 != 0) {
      lVar11 = param_1[0x19];
      uVar10 = ((((((((uVar12 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar12 >> 8 & 0xff) *
                     0x100000001b3 ^ uVar12 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x18 & 0xff)
                   * 0x100000001b3 ^ uVar12 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x28 & 0xff)
                 * 0x100000001b3 ^ uVar12 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x38) *
               0x100000001b3 & *(ulonglong *)(lVar11 + 0x1c70);
      lVar15 = *(longlong *)(*(longlong *)(lVar11 + 0x1c58) + 8 + uVar10 * 0x10);
      if (lVar15 == *(longlong *)(lVar11 + 0x1c48)) {
LAB_14021a9b3:
        lVar15 = 0;
      }
      else {
        uVar14 = *(ulonglong *)(lVar15 + 0x10);
        while (uVar12 != uVar14) {
          if (lVar15 == *(longlong *)(*(longlong *)(lVar11 + 0x1c58) + uVar10 * 0x10))
          goto LAB_14021a9b3;
          lVar15 = *(longlong *)(lVar15 + 8);
          uVar14 = *(ulonglong *)(lVar15 + 0x10);
        }
      }
      if ((lVar15 != 0) && (lVar15 != *(longlong *)(lVar11 + 0x1c48))) {
        bStackX_9 = (byte)(uVar5 >> 8);
        bStackX_a = (byte)(uVar5 >> 0x10);
        bStackX_b = (byte)(uVar5 >> 0x18);
        lVar11 = *(longlong *)(lVar15 + 0x30);
        uVar12 = *(ulonglong *)(lVar15 + 0x48) &
                 (((((ulonglong)(uVar5 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)bStackX_9) * 0x100000001b3 ^ (ulonglong)bStackX_a) * 0x100000001b3 ^
                 (ulonglong)bStackX_b) * 0x100000001b3;
        plVar6 = *(longlong **)(lVar15 + 0x20);
        plVar17 = *(longlong **)(lVar11 + 8 + uVar12 * 0x10);
        if (plVar17 == plVar6) {
LAB_14021aa35:
          plVar17 = (longlong *)0x0;
        }
        else {
          uVar4 = *(uint *)(plVar17 + 2);
          while (uVar5 != uVar4) {
            if (plVar17 == *(longlong **)(lVar11 + uVar12 * 0x10)) goto LAB_14021aa35;
            plVar17 = (longlong *)plVar17[1];
            uVar4 = *(uint *)(plVar17 + 2);
          }
        }
        if ((plVar17 != (longlong *)0x0) && (plVar17 != plVar6)) {
          uVar18 = *(ulonglong *)(lVar15 + 0x48) &
                   (((((ulonglong)*(byte *)(plVar17 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar17 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar17 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar17 + 0x13)) * 0x100000001b3;
          plVar7 = *(longlong **)(lVar11 + uVar18 * 0x10);
          if (*(longlong **)(lVar11 + 8 + uVar18 * 0x10) == plVar17) {
            if (plVar7 == plVar17) {
              *(longlong **)(lVar11 + uVar18 * 0x10) = plVar6;
              *(longlong **)(lVar11 + 8 + uVar18 * 0x10) = plVar6;
            }
            else {
              *(longlong *)(lVar11 + 8 + uVar18 * 0x10) = plVar17[1];
            }
          }
          else if (plVar7 == plVar17) {
            *(longlong *)(lVar11 + uVar18 * 0x10) = *plVar17;
          }
          lVar8 = *plVar17;
          *(longlong *)(lVar15 + 0x28) = *(longlong *)(lVar15 + 0x28) + -1;
          *(longlong *)plVar17[1] = lVar8;
          *(longlong *)(lVar8 + 8) = plVar17[1];
          plVar6 = (longlong *)plVar17[10];
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x20))
                      (plVar6,CONCAT71((int7)((ulonglong)lVar11 >> 8),plVar6 != plVar17 + 3));
            plVar17[10] = 0;
          }
          func_0x00014028b040(plVar17,0x58);
          return;
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  }
  lVar11 = param_1[0x5e];
  if (lVar11 != 0) {
    lVar15 = param_1[0x19];
    if (*(int *)(lVar11 + 0x234) == 0) {
      puVar1 = (undefined8 *)(lVar11 + 0x210);
      puVar13 = puVar1;
      if (0xf < *(ulonglong *)(lVar11 + 0x228)) {
        puVar13 = (undefined8 *)*puVar1;
      }
      uVar10 = 0xcbf29ce484222325;
      uVar12 = uVar18;
      if (*(ulonglong *)(lVar11 + 0x220) != 0) {
        do {
          uVar14 = uVar12 + 1;
          uVar10 = (uVar10 ^ *(byte *)(uVar12 + (longlong)puVar13)) * 0x100000001b3;
          uVar12 = uVar14;
        } while (uVar14 < *(ulonglong *)(lVar11 + 0x220));
      }
      lVar11 = func_0x000140011170(lVar15 + 0x1bb8,local_48,puVar1,uVar10);
      plVar6 = *(longlong **)(lVar11 + 8);
      if ((plVar6 != (longlong *)0x0) && (plVar6 != *(longlong **)(lVar15 + 0x1bc0))) {
        piVar2 = (int *)(plVar6[6] + 0x230);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_1401d7bc0();
          if ((ulonglong)plVar6[5] < 0x10) {
            plVar17 = plVar6 + 2;
          }
          else {
            plVar17 = (longlong *)plVar6[2];
          }
          if (plVar6[4] != 0) {
            do {
              pbVar3 = (byte *)(uVar18 + (longlong)plVar17);
              uVar18 = uVar18 + 1;
              uVar16 = (uVar16 ^ *pbVar3) * 0x100000001b3;
            } while (uVar18 < (ulonglong)plVar6[4]);
          }
          uVar16 = uVar16 & *(ulonglong *)(lVar15 + 0x1be8);
          lVar11 = *(longlong *)(lVar15 + 0x1bd0);
          plVar17 = *(longlong **)(lVar11 + uVar16 * 0x10);
          if (*(longlong **)(lVar11 + 8 + uVar16 * 0x10) == plVar6) {
            if (plVar17 == plVar6) {
              uVar9 = *(undefined8 *)(lVar15 + 0x1bc0);
              *(undefined8 *)(lVar11 + uVar16 * 0x10) = uVar9;
              *(undefined8 *)(lVar11 + 8 + uVar16 * 0x10) = uVar9;
            }
            else {
              *(longlong *)(lVar11 + 8 + uVar16 * 0x10) = plVar6[1];
            }
          }
          else if (plVar17 == plVar6) {
            *(longlong *)(lVar11 + uVar16 * 0x10) = *plVar6;
          }
          lVar11 = *plVar6;
          *(longlong *)(lVar15 + 0x1bc8) = *(longlong *)(lVar15 + 0x1bc8) + -1;
          *(longlong *)plVar6[1] = lVar11;
          *(longlong *)(lVar11 + 8) = plVar6[1];
                    /* WARNING: Subroutine does not return */
          FUN_140017310(plVar6 + 2);
        }
      }
    }
    else {
      FUN_1401d6c80(lVar15 + 0x1a60);
    }
  }
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  func_0x0001400efd30(param_1 + 0x58);
  func_0x00014000dab0(param_1 + 0x53);
  return;
}

