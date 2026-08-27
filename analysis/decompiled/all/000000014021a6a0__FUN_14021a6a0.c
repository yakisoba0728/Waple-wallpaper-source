// Function: FUN_14021a6a0
// Addr: 14021a6a0
// Size: 1634 bytes


void FUN_14021a6a0(undefined8 *param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  byte bStackX_9;
  byte bStackX_a;
  byte bStackX_b;
  undefined1 local_48 [16];
  
  *param_1 = &PTR_FUN_140491338;
  if (param_1[0x58] != param_1[0x59]) {
    param_1[0x59] = param_1[0x58];
  }
  lVar11 = param_1[0x5b];
  if (lVar11 != 0) {
    thunk_FUN_14028af80(*(undefined8 *)(lVar11 + 0x90));
    thunk_FUN_14028af80(*(undefined8 *)(lVar11 + 0x98));
    FUN_1402d3dd0(*(undefined8 *)(lVar11 + 8));
    FUN_1402d3dd0(*(undefined8 *)(lVar11 + 0x10));
    plVar16 = *(longlong **)(lVar11 + 0x80);
    for (plVar15 = *(longlong **)(lVar11 + 0x78); plVar15 != plVar16; plVar15 = plVar15 + 1) {
      puVar5 = (undefined8 *)*plVar15;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    FUN_140215de0(lVar11 + 0xa0);
    FUN_14000d9e0(lVar11 + 0x78);
    FUN_1402283b0(lVar11 + 0x60);
    if (*(longlong *)(lVar11 + 0x48) != 0) {
      FUN_1402d3dd0();
      *(undefined8 *)(lVar11 + 0x48) = 0;
      *(undefined8 *)(lVar11 + 0x50) = 0;
      *(undefined8 *)(lVar11 + 0x58) = 0;
    }
    if (*(longlong *)(lVar11 + 0x30) != 0) {
      FUN_1402d3dd0();
      *(undefined8 *)(lVar11 + 0x30) = 0;
      *(undefined8 *)(lVar11 + 0x38) = 0;
      *(undefined8 *)(lVar11 + 0x40) = 0;
    }
    if (*(longlong *)(lVar11 + 0x18) != 0) {
      FUN_1402d3dd0();
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(undefined8 *)(lVar11 + 0x20) = 0;
      *(undefined8 *)(lVar11 + 0x28) = 0;
    }
    thunk_FUN_14028af80(lVar11,0xb8);
    param_1[0x5b] = 0;
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x314);
  uVar17 = 0xcbf29ce484222325;
  if (uVar4 != 0) {
    uVar12 = param_1[0x5e];
    if (uVar12 != 0) {
      lVar11 = param_1[0x19];
      uVar10 = ((((((((uVar12 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar12 >> 8 & 0xff) *
                     0x100000001b3 ^ uVar12 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x18 & 0xff)
                   * 0x100000001b3 ^ uVar12 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x28 & 0xff)
                 * 0x100000001b3 ^ uVar12 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar12 >> 0x38) *
               0x100000001b3 & *(ulonglong *)(lVar11 + 0x1c70);
      plVar16 = *(longlong **)(*(longlong *)(lVar11 + 0x1c58) + 8 + uVar10 * 0x10);
      if (plVar16 == *(longlong **)(lVar11 + 0x1c48)) {
LAB_14021a8e3:
        plVar16 = (longlong *)0x0;
      }
      else {
        uVar19 = plVar16[2];
        while (uVar12 != uVar19) {
          if (plVar16 == *(longlong **)(*(longlong *)(lVar11 + 0x1c58) + uVar10 * 0x10))
          goto LAB_14021a8e3;
          plVar16 = (longlong *)plVar16[1];
          uVar19 = plVar16[2];
        }
      }
      if ((plVar16 != (longlong *)0x0) && (plVar16 != *(longlong **)(lVar11 + 0x1c48))) {
        bStackX_9 = (byte)(uVar4 >> 8);
        bStackX_a = (byte)(uVar4 >> 0x10);
        bStackX_b = (byte)(uVar4 >> 0x18);
        lVar6 = plVar16[6];
        uVar12 = plVar16[9] &
                 (((((ulonglong)(uVar4 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)bStackX_9) * 0x100000001b3 ^ (ulonglong)bStackX_a) * 0x100000001b3 ^
                 (ulonglong)bStackX_b) * 0x100000001b3;
        plVar15 = (longlong *)plVar16[4];
        plVar18 = *(longlong **)(lVar6 + 8 + uVar12 * 0x10);
        if (plVar18 == plVar15) {
LAB_14021a965:
          plVar18 = (longlong *)0x0;
        }
        else {
          uVar3 = *(uint *)(plVar18 + 2);
          while (uVar4 != uVar3) {
            if (plVar18 == *(longlong **)(lVar6 + uVar12 * 0x10)) goto LAB_14021a965;
            plVar18 = (longlong *)plVar18[1];
            uVar3 = *(uint *)(plVar18 + 2);
          }
        }
        if ((plVar18 != (longlong *)0x0) && (plVar18 != plVar15)) {
          uVar12 = plVar16[9] &
                   (((((ulonglong)*(byte *)(plVar18 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar18 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar18 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar18 + 0x13)) * 0x100000001b3;
          plVar7 = *(longlong **)(lVar6 + uVar12 * 0x10);
          if (*(longlong **)(lVar6 + 8 + uVar12 * 0x10) == plVar18) {
            if (plVar7 == plVar18) {
              *(longlong **)(lVar6 + uVar12 * 0x10) = plVar15;
              *(longlong **)(lVar6 + 8 + uVar12 * 0x10) = plVar15;
            }
            else {
              *(longlong *)(lVar6 + 8 + uVar12 * 0x10) = plVar18[1];
            }
          }
          else if (plVar7 == plVar18) {
            *(longlong *)(lVar6 + uVar12 * 0x10) = *plVar18;
          }
          lVar8 = *plVar18;
          plVar16[5] = plVar16[5] + -1;
          *(longlong *)plVar18[1] = lVar8;
          *(longlong *)(lVar8 + 8) = plVar18[1];
          plVar15 = (longlong *)plVar18[10];
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 0x20))
                      (plVar15,CONCAT71((int7)((ulonglong)lVar6 >> 8),plVar15 != plVar18 + 3));
            plVar18[10] = 0;
          }
          thunk_FUN_14028af80(plVar18,0x58);
          if (plVar16[5] == 0) {
            lVar6 = *(longlong *)(lVar11 + 0x1c58);
            uVar12 = (((((((((ulonglong)*(byte *)(plVar16 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                           ^ (ulonglong)*(byte *)((longlong)plVar16 + 0x11)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar16 + 0x12)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar16 + 0x13)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar16 + 0x14)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar16 + 0x15)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar16 + 0x16)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar16 + 0x17)) * 0x100000001b3 &
                     *(ulonglong *)(lVar11 + 0x1c70);
            plVar15 = *(longlong **)(lVar6 + uVar12 * 0x10);
            if (*(longlong **)(lVar6 + 8 + uVar12 * 0x10) == plVar16) {
              if (plVar15 == plVar16) {
                uVar9 = *(undefined8 *)(lVar11 + 0x1c48);
                *(undefined8 *)(lVar6 + uVar12 * 0x10) = uVar9;
                *(undefined8 *)(lVar6 + 8 + uVar12 * 0x10) = uVar9;
              }
              else {
                *(longlong *)(lVar6 + 8 + uVar12 * 0x10) = plVar16[1];
              }
            }
            else if (plVar15 == plVar16) {
              *(longlong *)(lVar6 + uVar12 * 0x10) = *plVar16;
            }
            lVar6 = *plVar16;
            *(longlong *)(lVar11 + 0x1c50) = *(longlong *)(lVar11 + 0x1c50) + -1;
            *(longlong *)plVar16[1] = lVar6;
            *(longlong *)(lVar6 + 8) = plVar16[1];
            FUN_14000d9e0(plVar16 + 6);
            FUN_1400d2120(plVar16 + 4);
            thunk_FUN_14028af80(plVar16,0x58);
          }
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  }
  uVar12 = 0;
  lVar11 = param_1[0x5e];
  if (lVar11 != 0) {
    lVar6 = param_1[0x19];
    if (*(int *)(lVar11 + 0x234) == 0) {
      puVar5 = (undefined8 *)(lVar11 + 0x210);
      puVar13 = puVar5;
      if (0xf < *(ulonglong *)(lVar11 + 0x228)) {
        puVar13 = (undefined8 *)*puVar5;
      }
      uVar19 = 0xcbf29ce484222325;
      uVar10 = uVar12;
      if (*(ulonglong *)(lVar11 + 0x220) != 0) {
        do {
          uVar14 = uVar10 + 1;
          uVar19 = (uVar19 ^ *(byte *)(uVar10 + (longlong)puVar13)) * 0x100000001b3;
          uVar10 = uVar14;
        } while (uVar14 < *(ulonglong *)(lVar11 + 0x220));
      }
      lVar11 = FUN_1400110a0(lVar6 + 0x1bb8,local_48,puVar5,uVar19);
      plVar16 = *(longlong **)(lVar11 + 8);
      if ((plVar16 != (longlong *)0x0) && (plVar16 != *(longlong **)(lVar6 + 0x1bc0))) {
        piVar1 = (int *)(plVar16[6] + 0x230);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1401d7af0();
          if ((ulonglong)plVar16[5] < 0x10) {
            plVar15 = plVar16 + 2;
          }
          else {
            plVar15 = (longlong *)plVar16[2];
          }
          if (plVar16[4] != 0) {
            do {
              pbVar2 = (byte *)(uVar12 + (longlong)plVar15);
              uVar12 = uVar12 + 1;
              uVar17 = (uVar17 ^ *pbVar2) * 0x100000001b3;
            } while (uVar12 < (ulonglong)plVar16[4]);
          }
          uVar17 = uVar17 & *(ulonglong *)(lVar6 + 0x1be8);
          lVar11 = *(longlong *)(lVar6 + 0x1bd0);
          plVar15 = *(longlong **)(lVar11 + uVar17 * 0x10);
          if (*(longlong **)(lVar11 + 8 + uVar17 * 0x10) == plVar16) {
            if (plVar15 == plVar16) {
              uVar9 = *(undefined8 *)(lVar6 + 0x1bc0);
              *(undefined8 *)(lVar11 + uVar17 * 0x10) = uVar9;
              *(undefined8 *)(lVar11 + 8 + uVar17 * 0x10) = uVar9;
            }
            else {
              *(longlong *)(lVar11 + 8 + uVar17 * 0x10) = plVar16[1];
            }
          }
          else if (plVar15 == plVar16) {
            *(longlong *)(lVar11 + uVar17 * 0x10) = *plVar16;
          }
          lVar11 = *plVar16;
          *(longlong *)(lVar6 + 0x1bc8) = *(longlong *)(lVar6 + 0x1bc8) + -1;
          *(longlong *)plVar16[1] = lVar11;
          *(longlong *)(lVar11 + 8) = plVar16[1];
          FUN_140017240(plVar16 + 2);
          thunk_FUN_14028af80(plVar16,0x38);
        }
      }
    }
    else {
      FUN_1401d6bb0(lVar6 + 0x1a60);
    }
  }
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  FUN_1400efc60(param_1 + 0x58);
  FUN_14000d9e0(param_1 + 0x53);
  FUN_14015a700(param_1 + 0x51);
  FUN_14000d9e0(param_1 + 0x4b);
  FUN_14015a780(param_1 + 0x49);
  FUN_1401de1e0(param_1);
  return;
}

