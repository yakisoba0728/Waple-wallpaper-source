// Function: FUN_1403ea9c0
// Addr: 1403ea9c0
// Size: 927 bytes


undefined8 FUN_1403ea9c0(longlong param_1,uint param_2,int param_3,undefined4 param_4,byte param_5)

{
  char *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  byte bVar13;
  char cVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar21;
  byte bVar22;
  byte local_res18;
  
  lVar7 = *(longlong *)(param_1 + 0xa0);
  if (1 < (uint)(param_3 - *(int *)(lVar7 + 0x5c))) {
    if (*(uint *)(lVar7 + 0x1c) < 2) {
      FUN_1403ec280(lVar7);
    }
    else {
      FUN_14040eef0();
    }
  }
  if (1 < param_2) {
    uVar17 = 1;
    do {
      if ((*(byte *)(*(longlong *)(lVar7 + 0x70) + 0xc +
                    (ulonglong)(*(uint **)(param_1 + 0x148))[uVar17] * 0x14) & 8) == 0) {
        local_res18 = 0;
        goto LAB_1403eaa6f;
      }
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while (uVar16 < param_2);
  }
  bVar13 = (byte)*(undefined2 *)
                  (*(longlong *)(lVar7 + 0x70) + 0xc +
                  (ulonglong)**(uint **)(param_1 + 0x148) * 0x14);
  local_res18 = bVar13 >> 3 & 1;
  if (((bVar13 >> 1 & 1) == 0) && (local_res18 == 0)) {
LAB_1403eaa6f:
    pcVar1 = (char *)(lVar7 + 0xd1);
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 == '\0') {
      *(undefined1 *)(lVar7 + 0xd1) = 1;
      bVar13 = 1;
    }
    else {
      bVar13 = *(byte *)(lVar7 + 0xd1) & 7;
      if (bVar13 == 0) {
        bVar13 = FUN_14039b7d0(lVar7);
        uVar21 = 4;
        bVar12 = true;
        goto LAB_1403eaacc;
      }
    }
    bVar12 = true;
    uVar21 = 4;
  }
  else {
    bVar13 = 0;
    bVar12 = false;
    uVar21 = 0;
  }
LAB_1403eaacc:
  bVar5 = *(byte *)(*(longlong *)(lVar7 + 0x70) + 0xe + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14);
  lVar2 = *(longlong *)(lVar7 + 0x70) + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14;
  if (((*(byte *)(lVar2 + 0xc) & 4) == 0) || ((bVar5 & 0x10) == 0)) {
    bVar22 = 1;
  }
  else {
    bVar22 = bVar5 & 0xf;
  }
  if (bVar12) {
    *(byte *)(lVar2 + 0xe) = bVar13 << 5 | param_5 & 0xf | 0x10;
    uVar6 = *(ushort *)
             (*(longlong *)(lVar7 + 0x70) + 0x10 + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14);
    if (((byte)uVar6 & 0x1f) == 0xc) {
      *(ushort *)(*(longlong *)(lVar7 + 0x70) + (ulonglong)*(uint *)(lVar7 + 0x5c) * 0x14 + 0x10) =
           uVar6 & 0xe0 | 7;
    }
  }
  FUN_1403a2580(param_1,param_4,uVar21,1,0);
  FUN_1403f7e30(*(undefined8 *)(param_1 + 0xa0),param_4);
  uVar17 = 1;
  bVar19 = bVar22;
  if (1 < param_2) {
    do {
      uVar16 = *(uint *)(lVar7 + 0x5c);
      if (uVar16 < *(uint *)(uVar17 * 4 + *(longlong *)(param_1 + 0x148))) {
        do {
          if (*(char *)(lVar7 + 0x58) == '\0') break;
          if (bVar12) {
            bVar5 = *(byte *)(*(longlong *)(lVar7 + 0x70) + 0xe + (ulonglong)uVar16 * 0x14);
            bVar15 = 0;
            if ((bVar5 & 0x10) == 0) {
              bVar15 = bVar5 & 0xf;
            }
            if (bVar15 == 0) {
              bVar15 = bVar19;
            }
            bVar5 = bVar19;
            if (bVar15 <= bVar19) {
              bVar5 = bVar15;
            }
            *(byte *)(*(longlong *)(lVar7 + 0x70) + (ulonglong)uVar16 * 0x14 + 0xe) =
                 (bVar5 - bVar19) + bVar22 & 0xf | bVar13 << 5;
            uVar16 = *(uint *)(lVar7 + 0x5c);
          }
          if (*(char *)(lVar7 + 0x59) == '\0') {
LAB_1403eac58:
            *(uint *)(lVar7 + 0x5c) = uVar16 + 1;
          }
          else {
            if ((*(longlong *)(lVar7 + 0x78) == *(longlong *)(lVar7 + 0x70)) &&
               (*(uint *)(lVar7 + 100) == uVar16)) {
LAB_1403eac55:
              *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
              goto LAB_1403eac58;
            }
            cVar14 = FUN_1403bf1a0(lVar7,*(int *)(lVar7 + 100) + 1);
            if (cVar14 != '\0') {
              uVar16 = *(uint *)(lVar7 + 0x5c);
              lVar2 = *(longlong *)(lVar7 + 0x70);
              uVar18 = *(uint *)(lVar7 + 100);
              puVar3 = (undefined4 *)(lVar2 + (ulonglong)uVar16 * 0x14);
              uVar9 = puVar3[1];
              uVar10 = puVar3[2];
              uVar11 = puVar3[3];
              lVar8 = *(longlong *)(lVar7 + 0x78);
              puVar4 = (undefined4 *)(lVar8 + (ulonglong)uVar18 * 0x14);
              *puVar4 = *puVar3;
              puVar4[1] = uVar9;
              puVar4[2] = uVar10;
              puVar4[3] = uVar11;
              *(undefined4 *)(lVar8 + (ulonglong)uVar18 * 0x14 + 0x10) =
                   *(undefined4 *)(lVar2 + 0x10 + (ulonglong)uVar16 * 0x14);
              uVar16 = *(uint *)(lVar7 + 0x5c);
              goto LAB_1403eac55;
            }
          }
          uVar16 = *(uint *)(lVar7 + 0x5c);
        } while (uVar16 < *(uint *)(uVar17 * 4 + *(longlong *)(param_1 + 0x148)));
      }
      bVar5 = *(byte *)(*(longlong *)(lVar7 + 0x70) + 0xe + (ulonglong)uVar16 * 0x14);
      if (((*(byte *)(*(longlong *)(lVar7 + 0x70) + 0xc + (ulonglong)uVar16 * 0x14) & 4) == 0) ||
         ((bVar5 & 0x10) == 0)) {
        bVar19 = 1;
      }
      else {
        bVar19 = bVar5 & 0xf;
      }
      bVar22 = bVar22 + bVar19;
      uVar18 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar18;
      *(uint *)(lVar7 + 0x5c) = uVar16 + 1;
    } while (uVar18 < param_2);
  }
  if (((local_res18 == 0) && (bVar5 >> 5 != 0)) &&
     (uVar16 = *(uint *)(lVar7 + 0x5c), uVar16 < *(uint *)(lVar7 + 0x60))) {
    do {
      uVar17 = (ulonglong)uVar16;
      bVar15 = *(byte *)(*(longlong *)(lVar7 + 0x70) + 0xe + uVar17 * 0x14);
      if (bVar5 >> 5 != bVar15 >> 5) {
        return 1;
      }
      bVar20 = 0;
      if ((bVar15 & 0x10) == 0) {
        bVar20 = bVar15 & 0xf;
      }
      if (bVar20 == 0) {
        return 1;
      }
      bVar15 = bVar19;
      if (bVar20 <= bVar19) {
        bVar15 = bVar20;
      }
      uVar16 = uVar16 + 1;
      *(byte *)(*(longlong *)(lVar7 + 0x70) + uVar17 * 0x14 + 0xe) =
           (bVar15 - bVar19) + bVar22 & 0xf | bVar13 << 5;
    } while (uVar16 < *(uint *)(lVar7 + 0x60));
  }
  return 1;
}

