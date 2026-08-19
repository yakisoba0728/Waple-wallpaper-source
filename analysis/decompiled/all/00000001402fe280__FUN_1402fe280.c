// Function: FUN_1402fe280
// Addr: 1402fe280
// Size: 1012 bytes


void FUN_1402fe280(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  uint uVar11;
  longlong *plVar12;
  char *pcVar13;
  int iVar14;
  ushort uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_248 [32];
  longlong *local_228;
  int local_220 [2];
  int *local_218;
  uint local_210 [2];
  undefined8 local_208;
  longlong local_200;
  longlong local_1f8;
  int local_1e8 [52];
  int local_118 [52];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_248;
  piVar10 = (int *)(&DAT_140438120 + (longlong)*(int *)(*param_1 + 0xc) * 8);
  local_228 = param_1;
  local_218 = piVar10;
  local_200 = param_2;
  uVar9 = FUN_1404145c0();
  iVar7 = *piVar10;
  local_208 = uVar9;
  plVar12 = local_228;
  piVar6 = local_218;
  do {
    local_228 = plVar12;
    local_218 = piVar6;
    if (iVar7 == 0x159b) {
      func_0x0001404146b0(uVar9);
      func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_248);
      return;
    }
    local_1f8 = 0x44;
    pcVar13 = &DAT_140436b70 + iVar7;
    bVar5 = true;
    if ((*(byte *)(piVar10 + 1) & 2) == 0) {
      local_1f8 = 0x208;
    }
    uVar21 = 0;
    uVar19 = 0;
    while( true ) {
      cVar2 = *pcVar13;
      uVar20 = (uint)uVar21;
      uVar18 = (uint)uVar19;
      if (cVar2 == '\0') break;
      while (cVar2 == ' ') {
        pcVar1 = pcVar13 + 1;
        pcVar13 = pcVar13 + 1;
        cVar2 = *pcVar1;
      }
      if (cVar2 == '|') {
        bVar5 = false;
        pcVar13 = pcVar13 + 1;
      }
      else {
        pcVar13 = (char *)FUN_140305a30(pcVar13,plVar12,uVar9,local_210);
        if (local_210[0] < 2) {
          piVar10 = (int *)func_0x000140414970(uVar9,local_220);
          func_0x000140414980(uVar9,local_220);
          plVar12 = local_228;
          if ((((local_220[0] != 0) && (*piVar10 != 0)) &&
              (iVar7 = FUN_1402f13a0(param_2,*piVar10,1), iVar7 == 0)) &&
             (lVar3 = *(longlong *)(param_2 + 0x78), 2 < *(ushort *)(lVar3 + 0x9a))) {
            iVar7 = 0;
            lVar4 = *(longlong *)(lVar3 + 0xa0);
            uVar16 = 0;
            iVar14 = -1;
            uVar17 = 0xffffffff;
            if (*(ushort *)(lVar3 + 0x98) != 0) {
              do {
                iVar8 = uVar17 + 1;
                uVar17 = (uint)*(ushort *)(*(longlong *)(lVar3 + 0xb0) + uVar16 * 2);
                if (iVar8 < (int)uVar17) {
                  uVar15 = *(ushort *)(piVar6 + 1) & 1;
                  if ((*(ushort *)(piVar6 + 1) & 2) == 0) {
                    if (uVar15 == 0) {
                      do {
                        if ((iVar14 < 0) || (*(int *)(lVar4 + 4 + (longlong)iVar8 * 8) < iVar7)) {
                          iVar7 = *(int *)((longlong)iVar8 * 8 + 4 + lVar4);
                          iVar14 = iVar8;
                        }
                        iVar8 = iVar8 + 1;
                      } while (iVar8 <= (int)uVar17);
                    }
                    else {
                      do {
                        if ((iVar14 < 0) || (iVar7 < *(int *)(lVar4 + 4 + (longlong)iVar8 * 8))) {
                          iVar7 = *(int *)((longlong)iVar8 * 8 + 4 + lVar4);
                          iVar14 = iVar8;
                        }
                        iVar8 = iVar8 + 1;
                      } while (iVar8 <= (int)uVar17);
                    }
                  }
                  else if (uVar15 == 0) {
                    do {
                      if ((iVar14 < 0) || (*(int *)(lVar4 + (longlong)iVar8 * 8) < iVar7)) {
                        iVar7 = *(int *)(lVar4 + (longlong)iVar8 * 8);
                        iVar14 = iVar8;
                      }
                      iVar8 = iVar8 + 1;
                    } while (iVar8 <= (int)uVar17);
                  }
                  else {
                    do {
                      if ((iVar14 < 0) || (iVar7 < *(int *)(lVar4 + (longlong)iVar8 * 8))) {
                        iVar7 = *(int *)(lVar4 + (longlong)iVar8 * 8);
                        iVar14 = iVar8;
                      }
                      iVar8 = iVar8 + 1;
                    } while (iVar8 <= (int)uVar17);
                  }
                }
                uVar11 = (int)uVar16 + 1;
                uVar16 = (ulonglong)uVar11;
              } while ((int)uVar11 < (int)(uint)*(ushort *)(lVar3 + 0x98));
            }
            plVar12 = local_228;
            param_2 = local_200;
            uVar9 = local_208;
            if (bVar5) {
              local_1e8[uVar21] = iVar7;
              uVar21 = (ulonglong)(uVar20 + 1);
            }
            else {
              local_118[uVar19] = iVar7;
              uVar19 = (ulonglong)(uVar18 + 1);
            }
          }
        }
      }
    }
    if ((uVar18 != 0) || (uVar20 != 0)) {
      uVar16 = 1;
      if (1 < uVar20) {
        do {
          uVar11 = (uint)uVar16;
          uVar17 = uVar11;
          while (uVar17 != 0) {
            iVar7 = local_1e8[uVar16];
            piVar10 = local_1e8 + uVar16;
            uVar17 = (int)uVar16 - 1;
            uVar16 = (ulonglong)uVar17;
            if (local_1e8[uVar16] <= iVar7) break;
            *piVar10 = local_1e8[uVar16];
            local_1e8[uVar16] = iVar7;
          }
          uVar11 = uVar11 + 1;
          uVar16 = (ulonglong)uVar11;
        } while (uVar11 < uVar20);
      }
      uVar16 = 1;
      if (1 < uVar18) {
        do {
          uVar11 = (uint)uVar16;
          uVar17 = uVar11;
          while (uVar17 != 0) {
            iVar7 = local_118[uVar16];
            piVar10 = local_118 + uVar16;
            uVar17 = (int)uVar16 - 1;
            uVar16 = (ulonglong)uVar17;
            if (local_118[uVar16] <= iVar7) break;
            *piVar10 = local_118[uVar16];
            local_118[uVar16] = iVar7;
          }
          uVar11 = uVar11 + 1;
          uVar16 = (ulonglong)uVar11;
        } while (uVar11 < uVar18);
      }
      uVar17 = *(uint *)((longlong)plVar12 + local_1f8 + 0xd8);
      *(uint *)((longlong)plVar12 + local_1f8 + 0xd8) = uVar17 + 1;
      piVar10 = (int *)((longlong)plVar12 + (ulonglong)uVar17 * 0x1c + 0xdc + local_1f8);
      if (uVar18 == 0) {
        iVar7 = local_1e8[uVar21 >> 1];
        piVar10[3] = iVar7;
        *piVar10 = iVar7;
      }
      else {
        iVar7 = local_118[uVar19 >> 1];
        if (uVar20 == 0) {
          piVar10[3] = iVar7;
          *piVar10 = iVar7;
        }
        else {
          *piVar10 = local_1e8[uVar21 >> 1];
          piVar10[3] = iVar7;
        }
      }
      iVar7 = *piVar10;
      iVar14 = piVar10[3];
      if ((iVar14 != iVar7) && ((ushort)(iVar14 < iVar7) != (*(ushort *)(local_218 + 1) & 1))) {
        iVar7 = (iVar14 + iVar7) / 2;
        piVar10[3] = iVar7;
        *piVar10 = iVar7;
      }
      piVar10[6] = 0;
      if ((*(byte *)(local_218 + 1) & 1) != 0) {
        piVar10[6] = 2;
      }
    }
    iVar7 = local_218[2];
    piVar10 = local_218 + 2;
    plVar12 = local_228;
    piVar6 = piVar10;
  } while( true );
}

