// Function: FUN_14032f340
// Addr: 14032f340
// Size: 1374 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14032f340(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  uint local_90;
  undefined4 local_88 [2];
  uint local_80;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_c8;
  puVar12 = (undefined1 *)param_1[2];
  if (puVar12 == (undefined1 *)0x0) {
    iVar5 = 6;
  }
  else {
    local_a0 = *param_1;
    plVar13 = (longlong *)param_1[1];
    local_a8 = puVar12;
    do {
      if ((int)plVar13[3] < 2) {
        FUN_140333980(plVar13);
      }
      *(undefined4 *)(plVar13 + 3) = 0;
      pcVar8 = (char *)FUN_140333900(plVar13);
      if (pcVar8 != (char *)0x0) break;
      if (2 < (int)plVar13[3]) goto LAB_14032f894;
    } while (1 < (int)plVar13[3]);
    if ((pcVar8 != (char *)0x0) && (~(ulonglong)pcVar8 + *plVar13 == 0x10)) {
      iVar7 = 0xa0;
      iVar5 = strncmp(pcVar8,"StartFontMetrics",0x10);
      if (iVar5 == 0) {
switchD_14032f4a0_caseD_1:
        do {
          plVar13 = (longlong *)param_1[1];
          do {
            if ((int)plVar13[3] < 2) {
              FUN_140333980(plVar13);
            }
            *(undefined4 *)(plVar13 + 3) = 0;
            uVar9 = FUN_140333900(plVar13);
            if (uVar9 != 0) {
              lVar11 = ~uVar9 + *plVar13;
              goto LAB_14032f478;
            }
          } while (((int)plVar13[3] < 3) && (1 < (int)plVar13[3]));
          lVar11 = 0;
LAB_14032f478:
          if (uVar9 == 0) goto LAB_14032f4d2;
          uVar6 = FUN_140333a60(uVar9,lVar11);
          switch(uVar6) {
          case 0:
            local_78[0] = 2;
            iVar5 = FUN_1403335f0(param_1,local_78,1);
            if (iVar5 != 1) goto LAB_14032f4d2;
            *(undefined4 *)(puVar12 + 0x14) = local_70;
            break;
          case 0xe:
            local_78[0] = 2;
            iVar5 = FUN_1403335f0(param_1,local_78,1);
            if (iVar5 != 1) goto LAB_14032f4d2;
            *(undefined4 *)(puVar12 + 0x18) = local_70;
            break;
          case 0x14:
switchD_14032f4a0_caseD_14:
            return 0;
          case 0x1a:
            local_78[0] = 2;
            local_68 = 2;
            local_58 = 2;
            local_48 = 2;
            iVar5 = FUN_1403335f0(param_1,local_78,4);
            if (iVar5 != 4) goto LAB_14032f4d2;
            *(undefined4 *)(puVar12 + 4) = local_70;
            *(undefined4 *)(puVar12 + 8) = local_60;
            *(undefined4 *)(puVar12 + 0xc) = local_50;
            *(undefined4 *)(puVar12 + 0x10) = local_40;
            break;
          case 0x1e:
            local_78[0] = 4;
            iVar5 = FUN_1403335f0(param_1,local_78,1);
            if (iVar5 != 1) goto LAB_14032f4d2;
            *puVar12 = (undefined1)local_70;
            break;
          case 0x28:
            local_98[0] = 3;
            iVar5 = FUN_1403335f0(param_1,local_98,1);
            if (iVar5 != 1) goto LAB_14032f4d2;
            if ((local_90 & 0xfffffffd) != 0) {
              iVar7 = 7;
              goto LAB_14032f4d2;
            }
            break;
          case 0x2d:
            local_88[0] = 3;
            iVar5 = FUN_1403335f0(param_1,local_88,1);
            uVar4 = local_80;
            if (iVar5 == 1) {
              while (0 < (int)uVar4) {
                uVar9 = (ulonglong)uVar4;
                lVar11 = param_1[1];
                if (*(int *)(lVar11 + 0x18) < 2) {
                  FUN_140333980(lVar11);
                }
                while( true ) {
                  *(undefined4 *)(lVar11 + 0x18) = 0;
                  lVar10 = FUN_140333900(lVar11);
                  if (lVar10 != 0) break;
                  if (*(int *)(lVar11 + 0x18) != 2) {
                    return 0xa0;
                  }
                }
                uVar4 = (int)uVar9 - 1;
              }
LAB_14032f6a0:
              do {
                plVar13 = (longlong *)param_1[1];
                do {
                  if ((int)plVar13[3] < 2) {
                    FUN_140333980(plVar13);
                  }
                  *(undefined4 *)(plVar13 + 3) = 0;
                  pcVar8 = (char *)FUN_140333900(plVar13);
                  if (pcVar8 != (char *)0x0) break;
                  if (2 < (int)plVar13[3]) {
                    return 0xa0;
                  }
                } while (1 < (int)plVar13[3]);
                if (pcVar8 == (char *)0x0) {
                  return 0xa0;
                }
                cVar1 = *pcVar8;
                iVar5 = 0;
                lVar11 = *plVar13;
                do {
                  if (*(&PTR_s_Ascender_140440fc0)[iVar5] == cVar1) {
                    for (; iVar5 < 0x4a; iVar5 = iVar5 + 1) {
                      if (*(&PTR_s_Ascender_140440fc0)[iVar5] != cVar1) goto LAB_14032f6a0;
                      iVar7 = strncmp((&PTR_s_Ascender_140440fc0)[iVar5],pcVar8,
                                      ~(ulonglong)pcVar8 + lVar11 & 0xffffffff);
                      if (iVar7 == 0) {
                        if ((iVar5 != 0x11) && (iVar5 != 0x14)) goto LAB_14032f6a0;
                        iVar7 = 0;
                        puVar12 = local_a8;
                        goto switchD_14032f4a0_caseD_1;
                      }
                    }
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < 0x4a);
              } while( true );
            }
            goto LAB_14032f4d2;
          case 0x31:
            bVar2 = false;
            bVar3 = false;
            goto switchD_14032f841_caseD_4b;
          }
        } while( true );
      }
    }
LAB_14032f894:
    iVar5 = 2;
  }
  return iVar5;
switchD_14032f841_caseD_4b:
  plVar13 = (longlong *)param_1[1];
  do {
    if ((int)plVar13[3] < 2) {
      FUN_140333980(plVar13);
    }
    *(undefined4 *)(plVar13 + 3) = 0;
    pcVar8 = (char *)FUN_140333900(plVar13);
    if (pcVar8 != (char *)0x0) break;
    if (2 < (int)plVar13[3]) goto switchD_14032f841_caseD_16;
  } while (1 < (int)plVar13[3]);
  if (pcVar8 == (char *)0x0) {
switchD_14032f841_caseD_16:
    iVar7 = 0xa0;
    puVar12 = local_a8;
LAB_14032f4d2:
    FUN_1402f7f90(local_a0,*(undefined8 *)(puVar12 + 0x20));
    *(undefined8 *)(puVar12 + 0x20) = 0;
    *(undefined4 *)(puVar12 + 0x28) = 0;
    FUN_1402f7f90(local_a0,*(undefined8 *)(puVar12 + 0x30));
    *(undefined8 *)(puVar12 + 0x30) = 0;
    *(undefined4 *)(puVar12 + 0x38) = 0;
    *puVar12 = 0;
    return iVar7;
  }
  cVar1 = *pcVar8;
  iVar5 = 0;
  lVar11 = *plVar13;
  do {
    if (*(&PTR_s_Ascender_140440fc0)[iVar5] == cVar1) {
      for (; iVar5 < 0x4a; iVar5 = iVar5 + 1) {
        if (*(&PTR_s_Ascender_140440fc0)[iVar5] != cVar1) goto switchD_14032f841_caseD_4b;
        iVar7 = strncmp((&PTR_s_Ascender_140440fc0)[iVar5],pcVar8,
                        ~(ulonglong)pcVar8 + lVar11 & 0xffffffff);
        if (iVar7 == 0) {
          switch(iVar5) {
          case 0x14:
          case 0x15:
            goto switchD_14032f4a0_caseD_14;
          default:
            goto switchD_14032f841_caseD_16;
          case 0x32:
          case 0x33:
            if (bVar3) goto switchD_14032f841_caseD_16;
            iVar7 = FUN_140333170(param_1);
            puVar12 = local_a8;
            if (iVar7 != 0) goto LAB_14032f4d2;
            bVar3 = true;
            break;
          case 0x35:
            if (bVar2) goto switchD_14032f841_caseD_16;
            iVar7 = FUN_1403333f0(param_1);
            puVar12 = local_a8;
            if (iVar7 != 0) goto LAB_14032f4d2;
            bVar2 = true;
            break;
          case 0x4b:
            break;
          }
          goto switchD_14032f841_caseD_4b;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x4a);
  goto switchD_14032f841_caseD_4b;
}

