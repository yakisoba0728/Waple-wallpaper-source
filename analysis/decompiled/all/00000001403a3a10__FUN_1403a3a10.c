// Function: FUN_1403a3a10
// Addr: 1403a3a10
// Size: 881 bytes


undefined8 FUN_1403a3a10(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
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
  uVar10 = 4;
  if (3 < param_2 * 2) {
    uVar10 = param_2 * 2;
  }
  if (uVar10 == 0) {
    uVar15 = 0;
  }
  else {
    iVar5 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    uVar15 = (ulonglong)(iVar5 + 1);
  }
  uVar10 = 1 << ((byte)uVar15 & 0x1f);
  lVar12 = _malloc_base((ulonglong)uVar10 * 0x18);
  if (lVar12 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    uVar13 = 0;
  }
  else {
    if (uVar10 * 0x18 != 0) {
      FUN_1404217a0(lVar12,0,uVar10 * 0x18);
    }
    *(undefined8 *)(param_1 + 0x14) = 0;
    local_b8[0] = 1;
    local_b8[1] = 2;
    local_b8[2] = 3;
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar14 = *(int *)(param_1 + 0x1c) + 1;
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar14 = 0;
    }
    *(uint *)(param_1 + 0x1c) = uVar10 - 1;
    uVar11 = 0x7fffffff;
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
    if ((uint)uVar15 < 0x20) {
      uVar11 = local_b8[uVar15];
    }
    *(undefined4 *)(param_1 + 0x20) = uVar11;
    *(short *)(param_1 + 0x12) = (short)uVar15 * 2;
    *(longlong *)(param_1 + 0x28) = lVar12;
    if (uVar14 != 0) {
      uVar10 = 0;
      lVar12 = 0;
      do {
        piVar1 = (int *)(lVar3 + lVar12 * 0x18);
        if ((((*(byte *)(lVar3 + 4 + lVar12 * 0x18) & 1) != 0) &&
            (*(char *)(param_1 + 0x10) != '\0')) &&
           ((uVar2 = piVar1[1],
            (*(uint *)(param_1 + 0x18) >> 1) + *(int *)(param_1 + 0x18) < *(uint *)(param_1 + 0x1c)
            || (cVar9 = FUN_1403a3a10(param_1), cVar9 != '\0')))) {
          lVar4 = *(longlong *)(param_1 + 0x28);
          uVar16 = 0xffffffff;
          uVar15 = (ulonglong)(uVar2 >> 2) % (ulonglong)*(uint *)(param_1 + 0x20);
          if ((*(uint *)(lVar4 + 4 + uVar15 * 0x18) >> 1 & 1) == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = 0;
            do {
              if (*(int *)(lVar4 + uVar15 * 0x18) == *piVar1) break;
              if (((*(byte *)(lVar4 + 4 + uVar15 * 0x18) & 1) == 0) && (uVar16 == 0xffffffff)) {
                uVar16 = (uint)uVar15;
              }
              uVar18 = uVar18 + 1;
              uVar15 = (ulonglong)((uint)uVar15 + uVar18 & *(uint *)(param_1 + 0x1c));
            } while ((*(uint *)(lVar4 + 4 + uVar15 * 0x18) >> 1 & 1) != 0);
          }
          uVar17 = (ulonglong)uVar16;
          if (uVar16 == 0xffffffff) {
            uVar17 = uVar15;
          }
          if ((*(uint *)(lVar4 + 4 + uVar17 * 0x18) >> 1 & 1) != 0) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            *(int *)(param_1 + 0x14) =
                 *(int *)(param_1 + 0x14) - (*(byte *)(lVar4 + 4 + uVar17 * 0x18) & 1);
          }
          *(int *)(lVar4 + uVar17 * 0x18) = *piVar1;
          iVar5 = piVar1[2];
          iVar6 = piVar1[3];
          iVar7 = piVar1[4];
          iVar8 = piVar1[5];
          *(uint *)(lVar4 + 4 + uVar17 * 0x18) = uVar2 | 3;
          piVar1 = (int *)(lVar4 + 8 + uVar17 * 0x18);
          *piVar1 = iVar5;
          piVar1[1] = iVar6;
          piVar1[2] = iVar7;
          piVar1[3] = iVar8;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          if ((*(ushort *)(param_1 + 0x12) < uVar18) &&
             (*(uint *)(param_1 + 0x1c) < (uint)(*(int *)(param_1 + 0x18) * 8))) {
            FUN_1403a3a10(param_1);
          }
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 1;
      } while (uVar10 < uVar14);
    }
    thunk_FUN_1402d9040();
    uVar13 = 1;
  }
  return uVar13;
}

