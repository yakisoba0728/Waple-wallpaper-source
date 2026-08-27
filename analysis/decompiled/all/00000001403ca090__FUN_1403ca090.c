// Function: FUN_1403ca090
// Addr: 1403ca090
// Size: 1174 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1403ca090(longlong param_1,char *param_2,uint param_3,int *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  int *piVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint *puVar17;
  longlong lVar18;
  char *pcVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 local_res8 [8];
  char *local_res10;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  uint local_48 [2];
  undefined2 local_40;
  undefined4 local_3e;
  undefined2 local_3a;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xdc) != -1) {
    return 0;
  }
  local_res10 = param_2;
  if ((int)param_3 < 0) {
    sVar8 = strlen(param_2);
    param_3 = (uint)sVar8;
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar12 = 0;
  uVar7 = 0;
  piVar9 = *(int **)(param_1 + 0x130);
  while (piVar9 == (int *)0x0) {
    piVar9 = (int *)_calloc_base(1,0x10);
    if (piVar9 != (int *)0x0) {
      piVar9[0] = 0;
      piVar9[1] = 0;
      piVar9[2] = 0;
      piVar9[3] = 0;
      uVar4 = *(uint *)(param_1 + 0x128);
      local_60 = 0;
      local_5c = 0xffffffff;
      uVar11 = uVar12;
      if (uVar4 != 0) {
        do {
          uVar5 = (uint)uVar11;
          if (*(undefined8 **)(param_1 + 0x50) == &DAT_14045dd10) {
            iVar14 = *(int *)(param_1 + 0xf4);
            if (iVar14 == 0) {
              uVar15 = 0;
              if (uVar5 < 0xe5) {
                uVar15 = uVar11;
              }
            }
            else if (iVar14 == 1) {
              uVar15 = 0;
              if (uVar5 < 0xa6) {
                uVar15 = (ulonglong)*(ushort *)(&DAT_14045ca50 + uVar11 * 2);
              }
            }
            else {
              uVar15 = uVar12;
              if ((iVar14 == 2) && (uVar15 = 0, uVar5 < 0x57)) {
                uVar15 = (ulonglong)*(ushort *)(&DAT_14045cba0 + uVar11 * 2);
              }
            }
          }
          else {
            uVar4 = FUN_1403ce4e0(*(undefined8 **)(param_1 + 0x50),uVar11,uVar4,&local_60);
            uVar15 = (ulonglong)uVar4;
          }
          uVar4 = (uint)uVar15;
          if (uVar4 < 0x187) {
            pcVar19 = ".notdef" + *(uint *)(&DAT_140453bf0 + uVar15 * 4);
            uVar4 = (*(int *)(&DAT_140453bf0 + (ulonglong)(uVar4 + 1) * 4) -
                    *(uint *)(&DAT_140453bf0 + uVar15 * 4)) - 1;
          }
          else {
            FUN_140397910(*(undefined8 *)(param_1 + 0x68),&local_58,uVar4 - 0x187);
            pcVar19 = local_50;
            uVar4 = local_48[0];
          }
          uVar2 = local_58;
          if (pcVar19 == (char *)0x0) {
            pcVar19 = "";
            uVar4 = uVar7;
          }
          if ((piVar9[1] < *piVar9) ||
             (cVar3 = FUN_1403a5000(piVar9,piVar9[1] + 1,0), cVar3 != '\0')) {
            puVar16 = (undefined8 *)((ulonglong)(uint)piVar9[1] * 0x20 + *(longlong *)(piVar9 + 2));
            piVar9[1] = piVar9[1] + 1;
            *(undefined4 *)((longlong)puVar16 + 0x1a) = local_3e;
            *(undefined2 *)((longlong)puVar16 + 0x1e) = local_3a;
            *puVar16 = uVar2;
            puVar16[1] = pcVar19;
            *(uint *)(puVar16 + 2) = uVar4;
            *(undefined4 *)((longlong)puVar16 + 0x14) = 0;
            *(short *)(puVar16 + 3) = (short)uVar15;
          }
          else {
            DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
            DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
            DAT_1404e4f28 = (undefined4)DAT_14045dd18;
            _DAT_1404e4f2c = DAT_14045dd18._4_4_;
            _DAT_1404e4f30 = DAT_14045dd20;
            _DAT_1404e4f38 = _DAT_14045dd28;
          }
          uVar4 = *(uint *)(param_1 + 0x128);
          uVar11 = (ulonglong)(uVar5 + 1);
        } while (uVar5 + 1 < uVar4);
      }
      uVar4 = piVar9[1];
      local_res8[0] = 0;
      if (uVar4 != 0) {
        FUN_140369bf0(*(longlong *)(piVar9 + 2),(ulonglong)uVar4 * 0x20 + *(longlong *)(piVar9 + 2),
                      uVar4,local_res8);
      }
    }
    LOCK();
    bVar21 = *(longlong *)(param_1 + 0x130) == 0;
    if (bVar21) {
      *(longlong *)(param_1 + 0x130) = (longlong)piVar9;
    }
    UNLOCK();
    if (bVar21) {
      local_50 = local_res10;
      local_48[0] = param_3;
      local_48[1] = 0;
      local_40 = 0;
      if (piVar9 == (int *)0x0) {
        return 0;
      }
      goto LAB_1403ca368;
    }
    if (piVar9 != (int *)0x0) {
      if (1 < *piVar9 + 1U) {
        piVar9[1] = 0;
        thunk_FUN_1402d9040(*(undefined8 *)(piVar9 + 2));
      }
      piVar9[0] = 0;
      piVar9[1] = 0;
      piVar9[2] = 0;
      piVar9[3] = 0;
      thunk_FUN_1402d9040(piVar9);
    }
    piVar9 = *(int **)(param_1 + 0x130);
  }
  local_40 = 0;
  local_48[1] = 0;
  local_48[0] = param_3;
  local_50 = local_res10;
LAB_1403ca368:
  local_40 = 0;
  local_48[1] = 0;
  iVar14 = piVar9[1] + -1;
  uVar11 = uVar12;
  local_res10 = local_50;
  local_48[0] = param_3;
  if (-1 < iVar14) {
    lVar18 = *(longlong *)(piVar9 + 2);
    do {
      uVar5 = iVar14 + uVar7 >> 1;
      lVar20 = (ulonglong)uVar5 * 0x20;
      puVar10 = (uint *)(lVar20 + 0x10 + lVar18);
      uVar4 = *puVar10;
      puVar17 = local_48;
      if (uVar4 < param_3) {
        puVar17 = puVar10;
      }
      iVar6 = strncmp(local_res10,*(char **)(lVar20 + 8 + lVar18),(ulonglong)*puVar17);
      iVar13 = param_3 - uVar4;
      if (iVar6 != 0) {
        iVar13 = iVar6;
      }
      if (iVar13 < 0) {
        iVar14 = uVar5 - 1;
      }
      else {
        if (iVar13 < 1) {
          uVar11 = lVar20 + lVar18;
          break;
        }
        uVar7 = uVar5 + 1;
      }
    } while ((int)uVar7 <= iVar14);
  }
  if (uVar11 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(uVar11 + 0x18);
  if (*(undefined8 **)(param_1 + 0x50) == &DAT_14045dd10) {
    iVar14 = *(int *)(param_1 + 0xf4);
    if (iVar14 == 0) {
      uVar11 = 0;
      if (uVar1 < 0xe5) {
        uVar11 = (ulonglong)(uint)uVar1;
      }
    }
    else if (iVar14 == 1) {
      iVar14 = 0xa4;
      do {
        uVar7 = (uint)(iVar14 + (int)uVar12) >> 1;
        lVar18 = (ulonglong)uVar7 * 4 + 0x45cc50;
        if (uVar1 == *(ushort *)(&UNK_14045cc50 + (ulonglong)uVar7 * 4)) goto LAB_1403ca4f7;
        if (uVar1 < *(ushort *)(&UNK_14045cc50 + (ulonglong)uVar7 * 4)) {
          iVar14 = uVar7 - 1;
        }
        else {
          uVar12 = (ulonglong)(uVar7 + 1);
        }
        uVar11 = 0;
      } while ((int)uVar12 <= iVar14);
    }
    else {
      uVar11 = uVar12;
      if (iVar14 == 2) {
        iVar14 = 0x55;
        do {
          uVar7 = (uint)(iVar14 + (int)uVar12) >> 1;
          lVar18 = (ulonglong)uVar7 * 4 + 0x45cef0;
          if (uVar1 == *(ushort *)(&UNK_14045cef0 + (ulonglong)uVar7 * 4)) goto LAB_1403ca4f7;
          if (uVar1 < *(ushort *)(&UNK_14045cef0 + (ulonglong)uVar7 * 4)) {
            iVar14 = uVar7 - 1;
          }
          else {
            uVar12 = (ulonglong)(uVar7 + 1);
          }
        } while ((int)uVar12 <= iVar14);
      }
    }
  }
  else {
    uVar12 = FUN_1403c9290(*(undefined8 **)(param_1 + 0x50),uVar1,*(undefined4 *)(param_1 + 0x128));
    uVar11 = uVar12 & 0xffffffff;
  }
LAB_1403ca508:
  if (((int)uVar11 == 0) && (uVar1 != 0)) {
    return 0;
  }
  *param_4 = (int)uVar11;
  return 1;
LAB_1403ca4f7:
  uVar11 = (ulonglong)(byte)IMAGE_DOS_HEADER_140000000.e_magic[lVar18 + 2];
  goto LAB_1403ca508;
}

