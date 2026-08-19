// Function: FUN_1403140a0
// Addr: 1403140a0
// Size: 1275 bytes


/* WARNING: Removing unreachable block (ram,0x000140314373) */
/* WARNING: Type propagation algorithm not settling */

int FUN_1403140a0(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int *piVar16;
  int *piVar17;
  uint *puVar18;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c [4];
  uint local_8c;
  longlong local_88;
  uint *local_78;
  longlong local_68;
  int *local_50;
  undefined8 local_40;
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  local_a8 = 0;
  if (*(longlong *)(param_1 + 0x408) == 0) {
    *(undefined1 *)(param_1 + 0x401) = 0;
    uVar14 = 0;
    if (param_2 != 0) {
      do {
        if (*(int *)(param_3 + uVar14 * 4) != 0) {
          *(undefined1 *)(param_1 + 0x401) = 1;
          break;
        }
        uVar12 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
      } while (uVar12 < param_2);
    }
    if (*(char *)(param_1 + 0x401) == '\0') {
      return 0;
    }
    local_a8 = FUN_1403074a0(param_1);
    if (local_a8 != 0) {
      return local_a8;
    }
  }
  puVar3 = *(uint **)(param_1 + 0x408);
  puVar4 = *(uint **)(puVar3 + 6);
  if (*puVar4 < param_2) {
    param_2 = *puVar4;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    do {
      if (0x20000 < *(int *)(param_3 + uVar14 * 4) + 0x10000U) {
        return 6;
      }
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while (uVar12 < param_2);
  }
  local_78 = puVar3;
  if ((*(char *)(param_1 + 0x400) == '\0') && (*(longlong *)(puVar3 + 0x22) == 0)) {
    iVar10 = func_0x000140310be0(param_1);
    if ((iVar10 != 0x8e) && (iVar10 != 0)) {
      return iVar10;
    }
    local_a8 = 0;
  }
  puVar18 = local_78;
  if (*(longlong *)(puVar3 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402f8180(uVar2,4,0,*puVar4,0,&local_a8);
  }
  lVar11 = *(longlong *)(puVar3 + 4);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402f8180(uVar2,4,0,*puVar4,0,&local_a8);
  }
  uVar14 = 0;
  if (param_2 != 0) {
    do {
      if (*(int *)(uVar14 * 4 + lVar11) != *(int *)(param_3 + uVar14 * 4)) {
        iVar10 = 2;
        goto LAB_140314312;
      }
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while (uVar12 < param_2);
  }
  piVar16 = (int *)(lVar11 + uVar14 * 4);
  uVar12 = *puVar4;
  bVar6 = false;
  if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
    uVar15 = uVar14;
    if (uVar12 <= (uint)uVar14) {
      return -1;
    }
    do {
      iVar10 = *piVar16;
      piVar16 = piVar16 + 1;
      if (iVar10 != 0) {
        bVar6 = true;
      }
      uVar13 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
    } while (uVar13 < uVar12);
  }
  else {
    piVar17 = (int *)(*(longlong *)(local_78 + 10) +
                     (((*(uint *)(param_1 + 4) >> 0x10) - 1) * uVar12 + uVar14) * 4);
    uVar15 = uVar14;
    if (uVar12 <= (uint)uVar14) {
      return -1;
    }
    do {
      iVar10 = *piVar17;
      piVar17 = piVar17 + 1;
      iVar1 = *piVar16;
      piVar16 = piVar16 + 1;
      if (iVar1 != iVar10) {
        bVar6 = true;
      }
      uVar13 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
    } while (uVar13 < uVar12);
  }
  iVar10 = 0;
  if (!bVar6) {
    return -1;
  }
LAB_140314312:
  uVar12 = (uint)uVar14;
  while (uVar12 < *puVar4) {
    if (*(int *)(lVar11 + uVar14 * 4) != 0) {
      iVar10 = 2;
      break;
    }
    uVar12 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar12;
  }
  *local_78 = *puVar4;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(*(undefined8 *)(local_78 + 4),param_3,(ulonglong)param_2 << 2);
  }
  if (param_4 != '\0') {
    FUN_140311730(param_1,param_2,*(undefined8 *)(local_78 + 4),*(undefined8 *)(local_78 + 2));
  }
  *(undefined1 *)(param_1 + 0x401) = 0;
  if (*puVar18 != 0) {
    uVar14 = 0;
    do {
      if (*(int *)(*(longlong *)(puVar18 + 4) + uVar14 * 4) != 0) {
        *(undefined1 *)(param_1 + 0x401) = 1;
        break;
      }
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while (uVar12 < *puVar18);
  }
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    if (iVar10 == 1) {
      piVar16 = *(int **)(param_1 + 0x408);
      local_9c[1] = 0;
      if (piVar16 == (int *)0x0) {
        local_a8 = 0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0xa0);
        local_88 = plVar5[6];
        local_50 = piVar16;
        local_a4 = (**(code **)(param_1 + 0x2a0))(param_1,0x63766172,plVar5,local_9c);
        if (local_a4 == 0) {
          local_a4 = FUN_1402f50b0(plVar5);
          if (local_a4 == 0) {
            lVar11 = plVar5[7];
            lVar7 = *plVar5;
            iVar10 = FUN_1402f52d0(plVar5);
            if (iVar10 == 0x10000) {
              uVar8 = FUN_1402f5370(plVar5);
              uVar9 = FUN_1402f5370(plVar5);
              local_8c = uVar8 & 0xfff;
              if ((uint)uVar9 + local_8c * 4 <= local_9c[0]) {
                local_a0 = ((uint)uVar9 - (int)lVar7) + (int)lVar11;
                if ((short)uVar8 < 0) {
                  uVar12 = (int)plVar5[7] - (int)*plVar5;
                  if (local_a0 < (uint)((int)plVar5[8] - (int)*plVar5)) {
                    lVar11 = (ulonglong)local_a0 + *plVar5;
                  }
                  else {
                    lVar11 = plVar5[8];
                  }
                  plVar5[7] = lVar11;
                  local_68 = FUN_1403115b0(plVar5,local_9c + 1);
                  local_a0 = (int)plVar5[7] - (int)*plVar5;
                  if (uVar12 < (uint)((int)plVar5[8] - (int)*plVar5)) {
                    plVar5[7] = (ulonglong)uVar12 + *plVar5;
                  }
                  else {
                    plVar5[7] = plVar5[8];
                  }
                }
                else {
                  local_68 = 0;
                }
                lVar11 = local_88;
                local_40 = FUN_1402f80c0(local_88,4,0,*piVar16 * 3,0,&local_a4);
                if (local_a4 != 0) {
                  if (local_68 == -1) {
                    /* WARNING: Subroutine does not return */
                    FUN_1402f8060(lVar11,0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_1402f8060(lVar11,local_68);
                }
                    /* WARNING: Subroutine does not return */
                FUN_1402f8180(lVar11,4,0,*(undefined4 *)(param_1 + 0x3d0),0,&local_a4);
              }
              local_a4 = 8;
            }
            else {
              local_a4 = 0;
            }
            func_0x0001402f51d0(plVar5);
            local_a8 = local_a4;
            puVar18 = local_78;
          }
          else {
            local_a8 = 0;
          }
        }
        else {
          local_a8 = 0;
        }
      }
    }
    else if (iVar10 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1402f8060(uVar2);
    }
  }
  uVar14 = 0;
  if (puVar18[0x1a] != 0) {
    do {
      *(undefined4 *)(*(longlong *)(puVar18 + 0x1e) + uVar14 * 4) = 0xfffe0000;
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while (uVar12 < puVar18[0x1a]);
    return local_a8;
  }
  return local_a8;
}

