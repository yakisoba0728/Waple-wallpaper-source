// Function: FUN_1403a3d90
// Addr: 1403a3d90
// Size: 1132 bytes


undefined8 FUN_1403a3d90(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *_Buf1;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  uint uVar21;
  uint local_res8;
  uint local_res18;
  longlong local_d8;
  undefined4 local_b8 [32];
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return 0;
  }
  puVar1 = (uint *)(param_1 + 0x1c);
  if ((param_2 != 0) && ((param_2 >> 1) + param_2 < *puVar1)) {
    return 1;
  }
  if (param_2 <= *(uint *)(param_1 + 0x14)) {
    param_2 = *(uint *)(param_1 + 0x14);
  }
  uVar8 = 4;
  if (3 < param_2 * 2) {
    uVar8 = param_2 * 2;
  }
  if (uVar8 == 0) {
    uVar16 = 0;
  }
  else {
    iVar11 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    uVar16 = (ulonglong)(iVar11 + 1);
  }
  uVar8 = 1 << ((byte)uVar16 & 0x1f);
  lVar12 = _malloc_base((ulonglong)uVar8 << 4);
  if (lVar12 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    uVar13 = 0;
  }
  else {
    if (uVar8 << 4 != 0) {
      FUN_1404217a0(lVar12,0,uVar8 << 4);
    }
    *(undefined8 *)(param_1 + 0x14) = 0;
    local_b8[0] = 1;
    local_b8[1] = 2;
    uVar19 = *puVar1 + 1;
    local_b8[2] = 3;
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (*puVar1 == 0) {
      uVar19 = 0;
    }
    *puVar1 = uVar8 - 1;
    uVar9 = 0x7fffffff;
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
    if ((uint)uVar16 < 0x20) {
      uVar9 = local_b8[uVar16];
    }
    *(undefined4 *)(param_1 + 0x20) = uVar9;
    *(short *)(param_1 + 0x12) = (short)uVar16 * 2;
    *(longlong *)(param_1 + 0x28) = lVar12;
    if (uVar19 != 0) {
      local_d8 = 0;
      local_res18 = 0;
      do {
        plVar20 = (longlong *)(local_d8 * 0x10 + lVar4);
        if ((((*(byte *)(plVar20 + 1) & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) &&
           ((uVar8 = *(uint *)(plVar20 + 1),
            (*(uint *)(param_1 + 0x18) >> 1) + *(int *)(param_1 + 0x18) < *puVar1 ||
            (cVar7 = FUN_1403a3d90(param_1), cVar7 != '\0')))) {
          lVar12 = *(longlong *)(param_1 + 0x28);
          uVar17 = 0xffffffff;
          uVar21 = uVar8 >> 2;
          uVar16 = (ulonglong)uVar21 % (ulonglong)*(uint *)(param_1 + 0x20);
          uVar15 = (uint)uVar16;
          if ((*(uint *)(lVar12 + 8 + uVar16 * 0x10) >> 1 & 1) == 0) {
            local_res8 = 0;
          }
          else {
            local_res8 = 0;
            do {
              uVar15 = (uint)uVar16;
              uVar2 = *(uint *)(lVar12 + 8 + uVar16 * 0x10);
              if (uVar2 >> 2 == uVar21) {
                puVar5 = *(undefined8 **)(lVar12 + uVar16 * 0x10);
                puVar6 = (undefined8 *)*plVar20;
                _Buf1 = (void *)*puVar5;
                if (puVar5[1] - (longlong)_Buf1 == puVar6[1] - (longlong)*puVar6) {
                  iVar11 = *(int *)((longlong)puVar6 + 0x14);
                  iVar3 = *(int *)((longlong)puVar5 + 0x14);
                  if ((iVar3 == iVar11) &&
                     ((uVar18 = (int)puVar5[1] - (int)_Buf1, uVar18 == 0 ||
                      (iVar10 = memcmp(_Buf1,(void *)*puVar6,(ulonglong)uVar18), iVar10 == 0)))) {
                    if ((iVar11 * 0xc == iVar3 * 0xc) &&
                       (((iVar3 * 3 & 0x3fffffffU) == 0 ||
                        (iVar11 = memcmp((void *)puVar5[3],(void *)puVar6[3],
                                         (ulonglong)(uint)(iVar3 * 0xc)), iVar11 == 0)))) {
                      lVar12 = *(longlong *)(param_1 + 0x28);
                      break;
                    }
                  }
                }
                lVar12 = *(longlong *)(param_1 + 0x28);
              }
              if (((uVar2 & 1) == 0) && (uVar17 == 0xffffffff)) {
                uVar17 = uVar15;
              }
              local_res8 = local_res8 + 1;
              uVar15 = uVar15 + local_res8 & *puVar1;
              uVar16 = (ulonglong)uVar15;
            } while ((*(uint *)(lVar12 + 8 + uVar16 * 0x10) >> 1 & 1) != 0);
          }
          if (uVar17 == 0xffffffff) {
            uVar17 = uVar15;
          }
          plVar14 = (longlong *)((ulonglong)uVar17 * 0x10 + lVar12);
          if ((*(uint *)(plVar14 + 1) >> 1 & 1) != 0) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (*(byte *)(plVar14 + 1) & 1);
          }
          *plVar14 = *plVar20;
          *(undefined4 *)((longlong)plVar14 + 0xc) = *(undefined4 *)((longlong)plVar20 + 0xc);
          *(uint *)(plVar14 + 1) = uVar8 | 3;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          if ((*(ushort *)(param_1 + 0x12) < local_res8) &&
             (*puVar1 < (uint)(*(int *)(param_1 + 0x18) * 8))) {
            FUN_1403a3d90(param_1);
          }
        }
        local_res18 = local_res18 + 1;
        local_d8 = local_d8 + 1;
      } while (local_res18 < uVar19);
    }
    thunk_FUN_1402d9040();
    uVar13 = 1;
  }
  return uVar13;
}

