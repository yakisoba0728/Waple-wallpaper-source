// Function: FUN_1403bf9f0
// Addr: 1403bf9f0
// Size: 2520 bytes


void FUN_1403bf9f0(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ushort uVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  
  lVar6 = *(longlong *)(param_2 + 0x70);
  plVar7 = *(longlong **)(param_1 + 0x98);
  iVar17 = *(int *)((longlong)plVar7 + 0xc);
  uVar21 = (ulonglong)param_3;
  if ((iVar17 == 0) || (uVar13 = uVar21, uVar14 = uVar21, param_4 <= param_3)) {
    uVar20 = *(uint *)(plVar7 + 0x18);
    bVar22 = uVar20 != 0;
    uVar11 = uVar20;
    bVar10 = bVar22;
    uVar13 = uVar21;
    uVar16 = param_3;
    goto joined_r0x0001403bfad4;
  }
  do {
    lVar2 = lVar6 + uVar13 * 0x14;
    if ((*(int *)(lVar6 + uVar13 * 0x14) == iVar17) &&
       (((byte)*(ushort *)(lVar2 + 0xc) & 0x60) == 0x60)) {
      *(undefined1 *)(lVar2 + 0x12) = 4;
      *(ushort *)(lVar2 + 0xc) = *(ushort *)(lVar2 + 0xc) & 0xff9f;
    }
    uVar20 = (int)uVar14 + 1;
    uVar13 = uVar13 + 1;
    uVar14 = (ulonglong)uVar20;
  } while (uVar20 < param_4);
  uVar20 = *(uint *)(plVar7 + 0x18);
  bVar22 = uVar20 != 0;
  uVar14 = uVar21;
  uVar11 = uVar20;
  bVar10 = bVar22;
  do {
    if (3 < *(byte *)(lVar6 + 0x13 + uVar14 * 0x14)) {
      if ((uVar11 == 0) || (uVar11 = (int)uVar14 + 1, param_4 <= uVar11)) goto LAB_1403bfb8f;
      goto LAB_1403bfb10;
    }
    uVar16 = (int)uVar14 + 1;
    uVar13 = (ulonglong)uVar16;
joined_r0x0001403bfad4:
    uVar14 = uVar13;
  } while (uVar16 < param_4);
  goto LAB_1403bfc8d;
  while( true ) {
    bVar4 = *(byte *)(lVar2 + 0x12);
    if (bVar4 < 0x20) {
      uVar20 = 1 << (bVar4 & 0x1f);
    }
    else {
      uVar20 = 0;
    }
    if ((uVar20 >> 4 & 1) == 0) {
      if ((uint)uVar13 < param_4) goto LAB_1403bfb78;
      break;
    }
    uVar20 = (uint)uVar13 + 1;
    uVar13 = (ulonglong)uVar20;
    if (param_4 <= uVar20) break;
LAB_1403bfb40:
    lVar2 = lVar6 + uVar13 * 0x14;
    if ((*(byte *)(lVar6 + 0xc + uVar13 * 0x14) & 0x20) != 0) {
LAB_1403bfb78:
      *(undefined1 *)(lVar2 + 0x13) = 4;
      break;
    }
  }
  bVar10 = false;
  bVar22 = false;
  uVar14 = uVar13;
  if ((uint)uVar13 != param_4) goto LAB_1403bfb8f;
  goto LAB_1403bfc91;
LAB_1403bffba:
  uVar20 = (int)uVar14 + 1;
  if ((((uVar20 < uVar16) && ((*(byte *)(lVar6 + 0xc + (ulonglong)uVar20 * 0x14) & 0x20) == 0)) &&
      (bVar4 = *(byte *)(lVar6 + 0x12 + (ulonglong)uVar20 * 0x14), bVar4 < 0x20)) && (bVar4 - 5 < 2)
     ) {
    uVar14 = (ulonglong)uVar20;
  }
  goto LAB_1403c0154;
joined_r0x0001403c024f:
  if (uVar20 <= param_3) goto LAB_1403c02e6;
  uVar20 = (int)uVar13 - 1;
  if ((((*(byte *)(lVar6 + 0xc + (ulonglong)uVar20 * 0x14) & 0x20) == 0) &&
      (bVar4 = *(byte *)(lVar6 + 0x12 + (ulonglong)uVar20 * 0x14), bVar4 < 0x20)) &&
     ((1 << (bVar4 & 0x1f) & 0x2090U) != 0)) goto LAB_1403c0294;
  uVar13 = (ulonglong)uVar20;
  goto joined_r0x0001403c024f;
LAB_1403c0294:
  uVar20 = (uint)uVar13;
  if ((*(byte *)(lVar6 + 0xc + (ulonglong)(uVar20 - 1) * 0x14) & 0x20) == 0) {
    bVar4 = *(byte *)(lVar6 + 0x12 + (ulonglong)(uVar20 - 1) * 0x14);
    if (bVar4 < 0x20) {
      uVar16 = 1 << (bVar4 & 0x1f);
    }
    else {
      uVar16 = 0;
    }
    if ((((uVar16 >> 4 & 1) != 0) && (uVar20 < param_4)) &&
       (((*(byte *)(lVar6 + 0xc + uVar13 * 0x14) & 0x20) == 0 &&
        ((bVar4 = *(byte *)(lVar6 + 0x12 + uVar13 * 0x14), bVar4 < 0x20 && (bVar4 - 5 < 2)))))) {
      uVar13 = (ulonglong)(uVar20 + 1);
    }
  }
LAB_1403c02e6:
  iVar17 = (int)uVar13;
  if (1 < (uVar11 + 1) - iVar17) {
    if (*(uint *)(param_2 + 0x1c) < 2) {
      FUN_1403ec280(param_2,uVar13);
    }
    else {
      FUN_14040eef0();
    }
  }
  uVar8 = *puVar3;
  uVar9 = puVar3[1];
  uVar5 = *(undefined4 *)(puVar3 + 2);
  puVar3 = (undefined8 *)(lVar6 + uVar13 * 0x14);
  FUN_1404210f0(lVar6 + (ulonglong)(iVar17 + 1) * 0x14,puVar3,(ulonglong)(uVar11 - iVar17) * 0x14);
  *puVar3 = uVar8;
  puVar3[1] = uVar9;
  *(undefined4 *)(puVar3 + 2) = uVar5;
  goto LAB_1403c0340;
  while (uVar11 = uVar11 + 1, uVar11 < param_4) {
LAB_1403bfb10:
    uVar13 = (ulonglong)uVar11;
    if ((*(uint *)(lVar6 + 4 + uVar13 * 0x14) & uVar20) != 0) {
      uVar19 = *(ushort *)(lVar6 + uVar13 * 0x14 + 0xc);
      if (((uVar19 & 0x10) == 0) || (((byte)uVar19 & 0x60) != 0x20)) goto LAB_1403bfb40;
      break;
    }
  }
LAB_1403bfb8f:
  if (*(int *)(param_2 + 0x3c) == 0x4d6c796d) {
    uVar20 = (uint)uVar14;
joined_r0x0001403bfba2:
    uVar13 = (ulonglong)(uVar20 + 1);
    if (uVar20 + 1 < param_4) {
      do {
        if ((((*(byte *)(lVar6 + 0xc + uVar13 * 0x14) & 0x20) != 0) ||
            (bVar4 = *(byte *)(lVar6 + 0x12 + uVar13 * 0x14), 0x1f < bVar4)) ||
           (bVar4 != 5 && bVar4 != 6)) goto LAB_1403bfbdb;
        uVar20 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar20;
      } while (uVar20 < param_4);
      if (uVar20 == param_4) goto LAB_1403bfc78;
LAB_1403bfbdb:
      if ((*(byte *)(lVar6 + 0xc + uVar13 * 0x14) & 0x20) != 0) goto LAB_1403bfc78;
      bVar4 = *(byte *)(lVar6 + 0x12 + uVar13 * 0x14);
      if (bVar4 < 0x20) {
        uVar20 = 1 << (bVar4 & 0x1f);
      }
      else {
        uVar20 = 0;
      }
      if ((uVar20 >> 4 & 1) == 0) goto LAB_1403bfc78;
      uVar20 = (uint)uVar13;
      do {
        uVar20 = uVar20 + 1;
        uVar13 = (ulonglong)uVar20;
        if (param_4 <= uVar20) goto joined_r0x0001403bfba2;
        lVar2 = lVar6 + uVar13 * 0x14;
        uVar19 = *(ushort *)(lVar6 + 0xc + uVar13 * 0x14) & 0x20;
      } while (((uVar19 == 0) && (bVar4 = *(byte *)(lVar2 + 0x12), bVar4 < 0x20)) &&
              (bVar4 == 5 || bVar4 == 6));
      if (((uVar20 < param_4) && (uVar19 == 0)) &&
         ((*(byte *)(lVar2 + 0x12) < 0x20 &&
          (((1 << (*(byte *)(lVar2 + 0x12) & 0x1f) & 0x58c06U) != 0 &&
           (*(char *)(lVar2 + 0x13) == '\b')))))) {
        *(undefined1 *)(lVar2 + 0x13) = 4;
        uVar14 = uVar13;
      }
      goto joined_r0x0001403bfba2;
    }
  }
LAB_1403bfc78:
  uVar13 = uVar14;
  if ((param_3 < (uint)uVar14) && (4 < *(byte *)(lVar6 + 0x13 + uVar14 * 0x14))) {
    uVar13 = (ulonglong)((uint)uVar14 - 1);
  }
LAB_1403bfc8d:
  uVar20 = (uint)uVar13;
  if (uVar20 == param_4) {
LAB_1403bfc91:
    if (param_3 < (uint)uVar13) {
      uVar20 = (uint)uVar13 - 1;
      if ((*(byte *)(lVar6 + 0xc + (ulonglong)uVar20 * 0x14) & 0x20) == 0) {
        bVar4 = *(byte *)(lVar6 + 0x12 + (ulonglong)uVar20 * 0x14);
        if (bVar4 < 0x20) {
          uVar11 = 1 << (bVar4 & 0x1f);
        }
        else {
          uVar11 = 0;
        }
        if ((uVar11 >> 6 & 1) != 0) {
          uVar13 = (ulonglong)uVar20;
        }
      }
      uVar20 = (uint)uVar13;
      goto LAB_1403bfcc4;
    }
  }
  else {
LAB_1403bfcc4:
    if ((uVar20 < param_4) && (param_3 < (uint)uVar13)) {
      while ((*(byte *)(lVar6 + 0xc + uVar13 * 0x14) & 0x20) == 0) {
        bVar4 = *(byte *)(lVar6 + 0x12 + uVar13 * 0x14);
        if (((0x1f < bVar4) || (bVar4 != 3 && bVar4 != 4)) ||
           (uVar20 = (int)uVar13 - 1, uVar13 = (ulonglong)uVar20, uVar20 <= param_3)) break;
      }
    }
  }
  if (param_3 + 1 < param_4) {
    uVar20 = (uint)uVar13;
    if (param_3 < uVar20) {
      uVar11 = uVar20 - 2;
      if (uVar20 != param_4) {
        uVar11 = uVar20 - 1;
      }
      uVar14 = (ulonglong)uVar11;
      uVar15 = uVar21;
      if ((*(int *)(param_2 + 0x3c) == 0x4d6c796d) || (*(int *)(param_2 + 0x3c) == 0x54616d6c)) {
LAB_1403bfddb:
        if ((param_3 < (uint)uVar14) &&
           (uVar18 = uVar14, *(char *)(lVar6 + 0x13 + uVar14 * 0x14) != '\x02')) {
          do {
            uVar20 = (int)uVar14 - 1;
            uVar15 = (ulonglong)uVar20;
            puVar3 = (undefined8 *)(lVar6 + uVar15 * 0x14);
            if (*(char *)(lVar6 + 0x13 + uVar15 * 0x14) == '\x02') {
              uVar11 = (uint)uVar13;
              uVar16 = (uint)uVar18;
              if ((uVar20 < uVar11) && (uVar11 <= uVar16)) {
                uVar13 = (ulonglong)(uVar11 - 1);
              }
              uVar8 = *puVar3;
              uVar9 = puVar3[1];
              uVar5 = *(undefined4 *)(puVar3 + 2);
              FUN_1404210f0(puVar3,lVar6 + uVar14 * 0x14,
                            (ulonglong)((uVar16 - (int)uVar14) + 1) * 0x14);
              uVar11 = (int)uVar13 + 1;
              puVar3 = (undefined8 *)(lVar6 + uVar18 * 0x14);
              *puVar3 = uVar8;
              puVar3[1] = uVar9;
              if (param_4 <= uVar11) {
                uVar11 = param_4;
              }
              *(undefined4 *)(lVar6 + 0x10 + uVar18 * 0x14) = uVar5;
              if (1 < uVar11 - uVar16) {
                if (*(uint *)(param_2 + 0x1c) < 2) {
                  FUN_1403ec280(param_2,uVar18);
                }
                else {
                  FUN_14040eef0();
                }
              }
              uVar18 = (ulonglong)(uVar16 - 1);
            }
            uVar14 = uVar15;
          } while (param_3 < uVar20);
          goto LAB_1403bff11;
        }
      }
      else {
        while( true ) {
          uVar11 = (uint)uVar14;
          while ((uVar16 = (uint)uVar14, param_3 < uVar11 &&
                 ((((*(byte *)(lVar6 + 0xc + uVar14 * 0x14) & 0x20) != 0 ||
                   (bVar4 = *(byte *)(lVar6 + 0x12 + uVar14 * 0x14), 0x1f < bVar4)) ||
                  ((1 << (bVar4 & 0x1f) & 0x2090U) == 0))))) {
            uVar11 = uVar16 - 1;
            uVar14 = (ulonglong)uVar11;
          }
          if ((*(byte *)(lVar6 + 0xc + uVar14 * 0x14) & 0x20) != 0) break;
          bVar4 = *(byte *)(lVar6 + 0x12 + uVar14 * 0x14);
          if (bVar4 < 0x20) {
            uVar11 = 1 << (bVar4 & 0x1f);
          }
          else {
            uVar11 = 0;
          }
          if (((uVar11 >> 4 & 1) == 0) || (*(char *)(lVar6 + uVar14 * 0x14 + 0x13) == '\x02'))
          break;
          if ((param_4 <= uVar16 + 1) ||
             (*(char *)(lVar6 + 0x12 + (ulonglong)(uVar16 + 1) * 0x14) != '\x06'))
          goto LAB_1403bfddb;
          if (uVar16 <= param_3) break;
          uVar14 = (ulonglong)(uVar16 - 1);
        }
      }
      do {
        if (*(char *)(lVar6 + 0x13 + uVar15 * 0x14) == '\x02') {
          uVar11 = uVar20 + 1;
          if (param_4 <= uVar20 + 1) {
            uVar11 = param_4;
          }
          if (1 < uVar11 - (int)uVar15) {
            if (*(uint *)(param_2 + 0x1c) < 2) {
              FUN_1403ec280(param_2);
            }
            else {
              FUN_14040eef0();
            }
          }
          break;
        }
        uVar11 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar11;
      } while (uVar11 < uVar20);
    }
LAB_1403bff11:
    uVar20 = param_3 + 1;
    puVar3 = (undefined8 *)(lVar6 + uVar21 * 0x14);
    bVar10 = bVar22;
    if ((*(char *)(lVar6 + 0x13 + uVar21 * 0x14) == '\x01') &&
       ((*(char *)((longlong)puVar3 + 0x12) == '\x0e') !=
        ((*(byte *)((longlong)puVar3 + 0xc) & 0x60) == 0x20))) {
      iVar17 = *(int *)(*plVar7 + 0xc);
      uVar16 = (uint)uVar13;
      uVar11 = uVar20;
      if (iVar17 == 0xc) {
joined_r0x0001403c007e:
        for (; uVar11 = param_4, uVar20 < uVar16; uVar20 = uVar20 + 1) {
          uVar14 = (ulonglong)uVar20;
          if ((*(byte *)(lVar6 + 0xc + uVar14 * 0x14) & 0x20) == 0) {
            bVar4 = *(byte *)(lVar6 + 0x12 + uVar14 * 0x14);
            if (bVar4 < 0x20) {
              uVar12 = 1 << (bVar4 & 0x1f);
            }
            else {
              uVar12 = 0;
            }
            if ((uVar12 >> 4 & 1) != 0) {
              if (bVar4 < 0x20) {
                uVar20 = 1 << (bVar4 & 0x1f);
              }
              else {
                uVar20 = 0;
              }
              if ((uVar20 >> 4 & 1) != 0) goto LAB_1403bffba;
              break;
            }
          }
        }
        do {
          uVar11 = uVar11 - 1;
          uVar14 = (ulonglong)uVar11;
          if (uVar11 <= param_3) break;
        } while (*(char *)(lVar6 + 0x13 + uVar14 * 0x14) == '\r');
        if ((*(byte *)(lVar6 + 0xc + uVar14 * 0x14) & 0x20) == 0) {
          bVar4 = *(byte *)(lVar6 + 0x12 + uVar14 * 0x14);
          if (bVar4 < 0x20) {
            uVar20 = 1 << (bVar4 & 0x1f);
          }
          else {
            uVar20 = 0;
          }
          if (((uVar20 >> 4 & 1) != 0) && (uVar20 = uVar16 + 1, uVar20 < uVar11)) {
            do {
              bVar4 = *(byte *)(lVar6 + 0x12 + (ulonglong)uVar20 * 0x14);
              if ((bVar4 < 0x20) && ((1 << (bVar4 & 0x1f) & 0x2080U) != 0)) {
                uVar14 = (ulonglong)((int)uVar14 - 1);
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 < (uint)uVar14);
          }
        }
      }
      else {
        for (; uVar11 < uVar16; uVar11 = uVar11 + 1) {
          uVar14 = (ulonglong)uVar11;
          if ((*(byte *)(lVar6 + 0xc + uVar14 * 0x14) & 0x20) == 0) {
            bVar4 = *(byte *)(lVar6 + 0x12 + uVar14 * 0x14);
            if (bVar4 < 0x20) {
              uVar12 = 1 << (bVar4 & 0x1f);
            }
            else {
              uVar12 = 0;
            }
            if ((uVar12 >> 4 & 1) != 0) {
              if (bVar4 < 0x20) {
                uVar11 = 1 << (bVar4 & 0x1f);
              }
              else {
                uVar11 = 0;
              }
              if ((uVar11 >> 4 & 1) != 0) goto LAB_1403bffba;
              break;
            }
          }
        }
        uVar14 = uVar13;
        if (iVar17 == 5) {
          uVar11 = uVar16 + 1;
          while (uVar11 < param_4) {
            iVar17 = (int)uVar14;
            uVar11 = iVar17 + 1;
            if (5 < *(byte *)(lVar6 + 0x13 + (ulonglong)uVar11 * 0x14)) break;
            uVar14 = (ulonglong)uVar11;
            uVar11 = iVar17 + 2;
          }
        }
        else {
          if (iVar17 != 9) goto joined_r0x0001403c007e;
          uVar11 = uVar16 + 1;
          while (uVar11 < param_4) {
            iVar17 = (int)uVar14;
            uVar11 = iVar17 + 1;
            bVar4 = *(byte *)(lVar6 + 0x13 + (ulonglong)uVar11 * 0x14);
            if ((bVar4 < 0x20) && (bVar4 - 0xb < 3)) break;
            uVar14 = (ulonglong)uVar11;
            uVar11 = iVar17 + 2;
          }
        }
        if (param_4 <= (uint)uVar14) goto joined_r0x0001403c007e;
      }
LAB_1403c0154:
      uVar20 = (uint)uVar14;
      if (1 < (uVar20 + 1) - param_3) {
        if (*(uint *)(param_2 + 0x1c) < 2) {
          FUN_1403ec280(param_2,uVar21);
        }
        else {
          FUN_14040eef0();
        }
      }
      uVar8 = *puVar3;
      uVar9 = puVar3[1];
      uVar5 = *(undefined4 *)(puVar3 + 2);
      FUN_1404210f0(puVar3,lVar6 + (ulonglong)(param_3 + 1) * 0x14,
                    (ulonglong)(uVar20 - param_3) * 0x14);
      puVar3 = (undefined8 *)(lVar6 + uVar14 * 0x14);
      *puVar3 = uVar8;
      puVar3[1] = uVar9;
      *(undefined4 *)(lVar6 + 0x10 + uVar14 * 0x14) = uVar5;
      if ((param_3 < uVar16) && (uVar16 <= uVar20)) {
        uVar13 = (ulonglong)(uVar16 - 1);
      }
    }
  }
  if (bVar10) {
    uVar20 = (uint)uVar13;
    uVar11 = uVar20 + 1;
    if (uVar11 < param_4) {
      do {
        puVar3 = (undefined8 *)(lVar6 + (ulonglong)uVar11 * 0x14);
        if ((*(uint *)(lVar6 + 4 + (ulonglong)uVar11 * 0x14) & *(uint *)(plVar7 + 0x18)) != 0) {
          if ((*(byte *)((longlong)puVar3 + 0xc) & 0x60) == 0x20) {
            if ((*(int *)(param_2 + 0x3c) != 0x4d6c796d) && (*(int *)(param_2 + 0x3c) != 0x54616d6c)
               ) goto joined_r0x0001403c024f;
            if (param_3 < uVar20) goto LAB_1403c0294;
            goto LAB_1403c02e6;
          }
          break;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_4);
    }
  }
LAB_1403c0340:
  if (*(char *)(lVar6 + 0x13 + uVar21 * 0x14) == '\x02') {
    if ((param_3 != 0) &&
       ((*(ushort *)(lVar6 + 0x10 + (ulonglong)(param_3 - 1) * 0x14) & 0x1f) - 1 < 0xc)) {
      FUN_14040eef0(param_2,(ulonglong)(param_3 - 1),param_3 + 1);
      return;
    }
    puVar1 = (uint *)(lVar6 + uVar21 * 0x14 + 4);
    *puVar1 = *puVar1 | *(uint *)((longlong)plVar7 + 0xdc);
  }
  return;
}

