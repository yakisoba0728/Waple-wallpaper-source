// Function: FUN_1403a4200
// Addr: 1403a4200
// Size: 881 bytes


undefined8 FUN_1403a4200(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 local_b8 [32];
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return 0;
  }
  if ((param_2 != 0) && ((param_2 >> 1) + param_2 < *(uint *)(param_1 + 0x1c))) {
    return 1;
  }
  if (param_2 <= *(uint *)(param_1 + 0x14)) {
    param_2 = *(uint *)(param_1 + 0x14);
  }
  uVar7 = 4;
  if (3 < param_2 * 2) {
    uVar7 = param_2 * 2;
  }
  if (uVar7 == 0) {
    uVar12 = 0;
  }
  else {
    iVar5 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    uVar12 = (ulonglong)(iVar5 + 1);
  }
  uVar7 = 1 << ((byte)uVar12 & 0x1f);
  lVar9 = _malloc_base((ulonglong)uVar7 * 0x18);
  if (lVar9 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    uVar10 = 0;
  }
  else {
    if (uVar7 * 0x18 != 0) {
      FUN_1404217a0(lVar9,0,uVar7 * 0x18);
    }
    *(undefined8 *)(param_1 + 0x14) = 0;
    local_b8[0] = 1;
    local_b8[1] = 2;
    local_b8[2] = 3;
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar11 = *(int *)(param_1 + 0x1c) + 1;
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar11 = 0;
    }
    *(uint *)(param_1 + 0x1c) = uVar7 - 1;
    uVar8 = 0x7fffffff;
    local_b8[0x1f] = 0x7fffffff;
    local_b8[3] = 7;
    local_b8[4] = 0xd;
    local_b8[5] = 0x1f;
    local_b8[6] = 0x3d;
    local_b8[7] = 0x7f;
    local_b8[8] = 0xfb;
    local_b8[9] = 0x1fd;
    local_b8[10] = 0x3fd;
    local_b8[0xb] = 0x7f7;
    local_b8[0xc] = 0xffd;
    local_b8[0xd] = 0x1fff;
    local_b8[0xe] = 0x3ffd;
    local_b8[0xf] = 0x7fed;
    local_b8[0x10] = 0xfff1;
    local_b8[0x11] = 0x1ffff;
    local_b8[0x12] = 0x3fffb;
    local_b8[0x13] = 0x7ffff;
    local_b8[0x14] = 0xffffd;
    local_b8[0x15] = 0x1ffff7;
    local_b8[0x16] = 0x3ffffd;
    local_b8[0x17] = 0x7ffff1;
    local_b8[0x18] = 0xfffffd;
    local_b8[0x19] = 0x1ffffd9;
    local_b8[0x1a] = 0x3fffffb;
    local_b8[0x1b] = 0x7ffffd9;
    local_b8[0x1c] = 0xfffffc7;
    local_b8[0x1d] = 0x1ffffffd;
    local_b8[0x1e] = 0x3fffffdd;
    if ((uint)uVar12 < 0x20) {
      uVar8 = local_b8[uVar12];
    }
    *(undefined4 *)(param_1 + 0x20) = uVar8;
    *(short *)(param_1 + 0x12) = (short)uVar12 * 2;
    *(longlong *)(param_1 + 0x28) = lVar9;
    if (uVar11 != 0) {
      uVar7 = 0;
      lVar9 = 0;
      do {
        plVar1 = (longlong *)(lVar3 + lVar9 * 0x18);
        if ((((*(byte *)(lVar3 + 8 + lVar9 * 0x18) & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')
            ) && ((uVar2 = *(uint *)(plVar1 + 1),
                  (*(uint *)(param_1 + 0x18) >> 1) + *(int *)(param_1 + 0x18) <
                  *(uint *)(param_1 + 0x1c) || (cVar6 = FUN_1403a4200(param_1), cVar6 != '\0')))) {
          lVar4 = *(longlong *)(param_1 + 0x28);
          uVar13 = 0xffffffff;
          uVar12 = (ulonglong)(uVar2 >> 2) % (ulonglong)*(uint *)(param_1 + 0x20);
          if ((*(uint *)(lVar4 + 8 + uVar12 * 0x18) >> 1 & 1) == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = 0;
            do {
              if (*(longlong *)(lVar4 + uVar12 * 0x18) == *plVar1) break;
              if (((*(byte *)(lVar4 + 8 + uVar12 * 0x18) & 1) == 0) && (uVar13 == 0xffffffff)) {
                uVar13 = (uint)uVar12;
              }
              uVar15 = uVar15 + 1;
              uVar12 = (ulonglong)((uint)uVar12 + uVar15 & *(uint *)(param_1 + 0x1c));
            } while ((*(uint *)(lVar4 + 8 + uVar12 * 0x18) >> 1 & 1) != 0);
          }
          uVar14 = (ulonglong)uVar13;
          if (uVar13 == 0xffffffff) {
            uVar14 = uVar12;
          }
          if ((*(uint *)(lVar4 + 8 + uVar14 * 0x18) >> 1 & 1) != 0) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            *(int *)(param_1 + 0x14) =
                 *(int *)(param_1 + 0x14) - (*(byte *)(lVar4 + 8 + uVar14 * 0x18) & 1);
          }
          *(longlong *)(lVar4 + uVar14 * 0x18) = *plVar1;
          *(longlong *)(lVar4 + 0x10 + uVar14 * 0x18) = plVar1[2];
          *(uint *)(lVar4 + 8 + uVar14 * 0x18) = uVar2 | 3;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          if ((*(ushort *)(param_1 + 0x12) < uVar15) &&
             (*(uint *)(param_1 + 0x1c) < (uint)(*(int *)(param_1 + 0x18) * 8))) {
            FUN_1403a4200(param_1);
          }
        }
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 1;
      } while (uVar7 < uVar11);
    }
    thunk_FUN_1402d9040();
    uVar10 = 1;
  }
  return uVar10;
}

