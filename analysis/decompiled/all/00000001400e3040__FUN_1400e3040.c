// Function: FUN_1400e3040
// Addr: 1400e3040
// Size: 4433 bytes


bool FUN_1400e3040(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  int *piVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  char *pcVar25;
  ulonglong uVar26;
  int *piVar27;
  uint uVar28;
  longlong *plVar29;
  longlong lVar30;
  uint uVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  bool bVar35;
  uint local_res10;
  
  uVar31 = 0;
  cVar12 = '\0';
  local_res10 = 0;
joined_r0x0001400e3065:
  if (param_2 == 0) {
UNWIND_INFO_1400e419c_FunctionUnwindInfoAddress_1:
    return cVar12 == '\0';
  }
  do {
    do {
      uVar26 = 4;
      if (*param_1 < 1) goto LAB_1400e41cc;
      *param_1 = *param_1 + -1;
      if (0x15 < *(uint *)(param_2 + 8)) {
LAB_1400e41af:
        return false;
      }
      lVar15 = *(longlong *)(param_2 + 0x10);
      switch(*(uint *)(param_2 + 8)) {
      case 0:
        goto LAB_1400e41af;
      case 2:
        uVar31 = *(uint *)((longlong)param_1 + 0xe4);
        if (((uVar31 >> 8 & 1) == 0) && (param_1[1] == param_1[0x1a])) {
LAB_1400e3116:
          local_res10 = uVar31 & 0xffffff01;
          uVar31 = uVar31 & 0xffffff01;
        }
        else {
          if (((*(uint *)(param_1 + 0x1c) & 0x1000) == 0) ||
             ((*(char *)(param_1[1] + -1) != '\n' && (*(char *)(param_1[1] + -1) != '\r'))))
          goto LAB_1400e3223;
LAB_1400e30fa:
          local_res10 = 0;
          uVar31 = 0;
        }
        break;
      case 3:
        if ((char *)param_1[1] == (char *)param_1[0x1b]) {
          uVar31 = *(uint *)((longlong)param_1 + 0xe4) >> 1;
          goto LAB_1400e3116;
        }
        if ((*(uint *)(param_1 + 0x1c) & 0x1000) != 0) {
          cVar12 = *(char *)param_1[1];
          if (cVar12 == '\n') goto LAB_1400e30fa;
          if (cVar12 == '\r') {
            local_res10 = 0;
            uVar31 = 0;
            break;
          }
        }
        goto LAB_1400e3223;
      case 4:
        uVar31 = *(uint *)((longlong)param_1 + 0xe4);
        if (((uVar31 >> 8 & 1) == 0) &&
           (pbVar4 = (byte *)param_1[1], pbVar4 == (byte *)param_1[0x1a])) {
          if ((pbVar4 != (byte *)param_1[0x1b]) && ((uVar31 & 4) == 0)) {
            bVar2 = *pbVar4;
LAB_1400e31a1:
            if ((&DAT_140486ec0)[bVar2] != '\0') {
              local_res10 = (uint)((*(uint *)(param_2 + 0xc) & 1) == 1);
              uVar31 = local_res10;
              break;
            }
          }
        }
        else {
          pbVar4 = (byte *)param_1[1];
          if (pbVar4 != (byte *)param_1[0x1b]) {
            local_res10 = (uint)((uint)((&DAT_140486ec0)[pbVar4[-1]] != (&DAT_140486ec0)[*pbVar4])
                                == (*(uint *)(param_2 + 0xc) & 1));
            uVar31 = local_res10;
            break;
          }
          if ((uVar31 & 8) == 0) {
            bVar2 = pbVar4[-1];
            goto LAB_1400e31a1;
          }
        }
        local_res10 = (uint)((*(uint *)(param_2 + 0xc) & 1) == 0);
        uVar31 = local_res10;
        break;
      case 5:
        pcVar25 = (char *)param_1[1];
        if (pcVar25 != (char *)param_1[0x1b]) {
          cVar12 = *pcVar25;
          if ((*(byte *)(param_1 + 0x1c) & 0x3e) == 0) {
            if ((cVar12 != '\n') && (cVar12 != '\r')) goto LAB_1400e3233;
          }
          else if (cVar12 != '\0') {
LAB_1400e3233:
            local_res10 = uVar31;
            if ((char)uVar31 == '\0') {
              param_1[1] = (longlong)(pcVar25 + 1);
            }
            break;
          }
        }
LAB_1400e3223:
        local_res10 = 1;
        uVar31 = 1;
        break;
      case 6:
        pcVar25 = *(char **)(param_2 + 0x28);
        lVar24 = 0;
        pcVar33 = (char *)param_1[1];
        pcVar34 = pcVar25 + *(uint *)(param_2 + 0x24);
        pcVar5 = (char *)param_1[0x1b];
        pcVar32 = pcVar33;
        if ((*(uint *)(param_1 + 0x1c) & 0x100) == 0) {
          for (; pcVar32 != pcVar5; pcVar32 = pcVar32 + 1) {
            bVar35 = true;
            if (pcVar25 == pcVar34) goto LAB_1400e32ed;
            lVar24 = lVar24 + 1;
            if (*pcVar32 != *pcVar25) goto LAB_1400e32f1;
            pcVar25 = pcVar25 + 1;
          }
          bVar35 = pcVar25 == pcVar34;
LAB_1400e32ed:
          if (bVar35) {
            pcVar33 = pcVar32;
          }
        }
        else {
          lVar30 = param_1[0x19];
          for (; (pcVar32 != pcVar5 && (pcVar25 != pcVar34)); pcVar25 = pcVar25 + 1) {
            lVar24 = lVar24 + 1;
            cVar12 = *pcVar25;
            cVar11 = (**(code **)(**(longlong **)(lVar30 + 8) + 0x20))
                               (*(longlong **)(lVar30 + 8),*pcVar32);
            if (cVar11 != cVar12) goto LAB_1400e32f1;
            pcVar32 = pcVar32 + 1;
          }
          if (pcVar25 == pcVar34) {
            pcVar33 = pcVar32;
          }
        }
LAB_1400e32f1:
        if (pcVar33 == (char *)param_1[1]) {
          local_res10 = 1;
        }
        else {
          param_1[1] = (longlong)pcVar33;
        }
        lVar24 = (longlong)(lVar24 + (ulonglong)((uint)(lVar24 >> 0x3f) & 0x3f)) >> 6;
        if (*param_1 < lVar24) goto LAB_1400e41cc;
        *param_1 = *param_1 - lVar24;
        uVar31 = local_res10;
        break;
      case 7:
        if ((param_1[1] == param_1[0x1b]) || (lVar24 = FUN_1400e2f20(param_1), lVar24 == param_1[1])
           ) goto LAB_1400e3223;
        param_1[1] = lVar24;
        break;
      case 10:
        FUN_1400e61d0(param_1,1,param_2);
        lVar15 = *(longlong *)(param_2 + 0x20);
        break;
      case 0xb:
        FUN_1400e61d0(param_1,2,param_2);
        lVar15 = *(longlong *)(param_2 + 0x20);
        break;
      case 0xc:
        param_1[0x16] = param_1[0x16] + -1;
        lVar16 = 0;
        lVar24 = param_1[0x16];
        lVar30 = param_1[0x12];
        piVar19 = (int *)(lVar24 * 0x20 + lVar30);
        iVar3 = *piVar19;
        if (iVar3 != 1) {
          uVar26 = 0xffffffff;
          uVar28 = 0;
          do {
            uVar21 = (uint)uVar26;
            if (iVar3 == 2) {
              uVar31 = 1;
              local_res10 = 1;
              if ((uVar21 <= uVar28) && (uVar28 = uVar28 + 1, uVar21 < uVar28)) {
                uVar20 = (ulonglong)(uVar28 >> 6) + (ulonglong)((uVar28 & 0x3f) != 0);
                puVar1 = (ulonglong *)(param_1[5] + (uVar26 >> 6) * 8);
                *puVar1 = *puVar1 & (1L << ((byte)uVar26 & 0x3f)) - 1U;
                uVar26 = (uVar26 >> 6) + 1;
                if (uVar26 < uVar20) {
                  lVar24 = param_1[5] + uVar26 * 8;
                  func_0x000140421870(lVar24,0,(uVar20 * 8 - lVar24) + param_1[5] &
                                               0xfffffffffffffff8);
                }
              }
              goto switchD_1400e30b7_caseD_1;
            }
            if (iVar3 == 0xd) {
              uVar18 = piVar19[1];
              uVar13 = uVar18;
              if (uVar21 <= uVar18) {
                uVar13 = uVar21;
              }
              uVar26 = (ulonglong)uVar13;
              if (uVar18 <= uVar28) {
                uVar18 = uVar28;
              }
              uVar28 = uVar18;
              if (lVar16 == 0) {
                lVar16 = lVar24;
              }
            }
            lVar24 = lVar24 + -1;
            param_1[0x16] = lVar24;
            piVar19 = (int *)(lVar24 * 0x20 + lVar30);
            iVar3 = *piVar19;
          } while (iVar3 != 1);
        }
        param_1[1] = *(longlong *)(piVar19 + 4);
        lVar15 = *(longlong *)(*(longlong *)(piVar19 + 2) + 0x10);
        if (lVar16 != 0) {
          piVar19 = (int *)(param_1[0x16] * 0x20 + lVar30);
          piVar27 = (int *)(lVar30 + 0x20 + lVar16 * 0x20);
          if (piVar19 != piVar27) {
            do {
              if (1 < *piVar19 - 0xcU) break;
              piVar19 = piVar19 + 8;
            } while (piVar19 != piVar27);
            piVar10 = piVar19;
            if (piVar19 != piVar27) {
              while (piVar9 = piVar10, piVar10 = piVar9 + 8, piVar10 != piVar27) {
                if (*piVar10 - 0xcU < 2) {
                  iVar3 = piVar9[9];
                  iVar7 = piVar9[10];
                  iVar8 = piVar9[0xb];
                  *piVar19 = *piVar10;
                  piVar19[1] = iVar3;
                  piVar19[2] = iVar7;
                  piVar19[3] = iVar8;
                  uVar22 = *(undefined8 *)(piVar9 + 0xe);
                  *(undefined8 *)(piVar19 + 4) = *(undefined8 *)(piVar9 + 0xc);
                  *(undefined8 *)(piVar19 + 6) = uVar22;
                  piVar19 = piVar19 + 8;
                }
              }
            }
          }
          param_1[0x16] = (longlong)piVar19 - param_1[0x12] >> 5;
        }
        break;
      case 0xd:
        lVar24 = param_1[2];
        uVar28 = *(int *)(param_2 + 0x20) - 1;
        lVar16 = FUN_1400e61d0(param_1,0xc,param_2);
        lVar30 = param_1[0x12];
        *(undefined8 *)(lVar30 + 0x10 + lVar16 * 0x20) =
             *(undefined8 *)(lVar24 + (ulonglong)uVar28 * 0x10);
        *(uint *)(lVar30 + 4 + lVar16 * 0x20) = uVar28;
        *(longlong *)(lVar24 + (ulonglong)uVar28 * 0x10) = param_1[1];
        break;
      case 0xe:
        iVar3 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x20);
        if (iVar3 != 0) {
          uVar28 = iVar3 - 1;
          lVar24 = param_1[2];
          uVar26 = (ulonglong)(uVar28 >> 6);
          lVar16 = FUN_1400e61d0(param_1,((*(ulonglong *)(param_1[5] + uVar26 * 8) >>
                                           (uVar28 & 0x3f) & 1) != 0) + '\r');
          lVar30 = param_1[0x12];
          *(undefined8 *)(lVar30 + 0x10 + lVar16 * 0x20) =
               *(undefined8 *)(lVar24 + 8 + (ulonglong)uVar28 * 0x10);
          *(uint *)(lVar30 + 4 + lVar16 * 0x20) = uVar28;
          *(longlong *)(lVar24 + 8 + (ulonglong)uVar28 * 0x10) = param_1[1];
          *(ulonglong *)(param_1[5] + uVar26 * 8) =
               *(ulonglong *)(param_1[5] + uVar26 * 8) | 1L << (uVar28 & 0x3f);
        }
        break;
      case 0xf:
        uVar28 = *(int *)(param_2 + 0x20) - 1;
        if ((*(ulonglong *)(param_1[5] + (ulonglong)(uVar28 >> 6) * 8) >>
             (ulonglong)((byte)uVar28 & 0x3f) & 1) == 0) {
          local_res10 = uVar31 & 0xff;
          uVar31 = uVar31 & 0xff;
          if ((*(byte *)(param_1 + 0x1c) & 0x12) != 0) {
            local_res10 = 1;
            uVar31 = 1;
          }
        }
        else {
          pcVar25 = (char *)param_1[1];
          lVar24 = 0;
          pcVar33 = *(char **)(param_1[2] + (ulonglong)uVar28 * 0x10);
          pcVar5 = *(char **)(param_1[2] + 8 + (ulonglong)uVar28 * 0x10);
          if (pcVar33 == pcVar5) {
LAB_1400e36f7:
            param_1[1] = (longlong)pcVar25;
          }
          else {
            pcVar32 = (char *)param_1[0x1b];
            pcVar34 = pcVar25;
            if ((*(uint *)(param_1 + 0x1c) & 0x100) == 0) {
              for (; pcVar34 != pcVar32; pcVar34 = pcVar34 + 1) {
                bVar35 = true;
                if (pcVar33 == pcVar5) goto LAB_1400e36e3;
                lVar24 = lVar24 + 1;
                if (*pcVar34 != *pcVar33) goto LAB_1400e36e7;
                pcVar33 = pcVar33 + 1;
              }
            }
            else {
              lVar30 = param_1[0x19];
              for (; (pcVar34 != pcVar32 && (pcVar33 != pcVar5)); pcVar33 = pcVar33 + 1) {
                plVar29 = *(longlong **)(lVar30 + 8);
                lVar24 = lVar24 + 1;
                cVar12 = *pcVar33;
                cVar11 = (**(code **)(*plVar29 + 0x20))(plVar29,*pcVar34);
                plVar29 = *(longlong **)(lVar30 + 8);
                cVar12 = (**(code **)(*plVar29 + 0x20))(plVar29,cVar12);
                if (cVar11 != cVar12) goto LAB_1400e36e7;
                pcVar34 = pcVar34 + 1;
              }
            }
            bVar35 = pcVar33 == pcVar5;
LAB_1400e36e3:
            if (bVar35) {
              pcVar25 = pcVar34;
            }
LAB_1400e36e7:
            uVar31 = local_res10;
            if (pcVar25 != (char *)param_1[1]) goto LAB_1400e36f7;
            uVar31 = 1;
          }
          lVar24 = (longlong)(lVar24 + (ulonglong)((uint)(lVar24 >> 0x3f) & 0x3f)) >> 6;
          if (*param_1 < lVar24) {
LAB_1400e41cc:
                    /* WARNING: Subroutine does not return */
            FUN_14028c410(0xb);
          }
          *param_1 = *param_1 - lVar24;
          local_res10 = uVar31;
        }
        break;
      case 0x10:
        if (*(longlong *)(param_2 + 0x28) != 0) {
          FUN_1400e61d0(param_1);
        }
        break;
      case 0x12:
        lVar24 = param_1[0xf] + (ulonglong)*(uint *)(param_2 + 0x30) * 0x18;
        if ((*(int *)(param_1[0xf] + 0xc + (ulonglong)*(uint *)(param_2 + 0x30) * 0x18) == 0) &&
           (((*(byte *)(param_1 + 0x1c) & 0x3e) != 0 ||
            (cVar12 = FUN_1400e7950(param_1,lVar15,lVar24), cVar12 == '\0')))) {
          *(int *)(lVar24 + 0xc) = (int)(param_1[3] - param_1[2] >> 4);
        }
        uVar20 = (ulonglong)*(uint *)(param_2 + 0x30);
        lVar24 = param_1[0xf];
        uVar28 = *(uint *)(param_2 + 0xc) >> 1;
        if (*(int *)(param_2 + 0x34) == 1) {
          lVar30 = FUN_1400e61d0(param_1,uVar26 & 0xffffffff,param_2);
          *(longlong *)(lVar24 + uVar20 * 0x18) = lVar30;
          if ((*(int *)(param_2 + 0x20) < 1) &&
             ((((uVar28 & 1) == 0 || (*(char *)((longlong)param_1 + 0xf3) != '\0')) ||
              (*(int *)(param_2 + 0x24) == 0)))) {
            *(undefined4 *)(lVar24 + 8 + uVar20 * 0x18) = 0;
            lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
            if (*(int *)(param_2 + 0x24) != 0) {
              FUN_1400e61d0(param_1,5,param_2);
            }
          }
          else {
            *(undefined4 *)(lVar24 + 8 + uVar20 * 0x18) = 1;
            if (*(int *)(param_2 + 0x20) == 0) {
              *(undefined4 *)(lVar30 * 0x20 + param_1[0x12]) = 6;
            }
          }
        }
        else if ((*(int *)(param_2 + 0x20) < 1) &&
                ((((uVar28 & 1) == 0 || (*(char *)((longlong)param_1 + 0xf3) != '\0')) ||
                 (*(int *)(param_2 + 0x24) == 0)))) {
          lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
          if (*(int *)(param_2 + 0x24) != 0) {
            lVar16 = FUN_1400e61d0(param_1,9,param_2);
            lVar30 = param_1[0x12];
            *(undefined4 *)(lVar30 + 4 + lVar16 * 0x20) =
                 *(undefined4 *)(lVar24 + 8 + uVar20 * 0x18);
            *(undefined8 *)(lVar30 + 0x18 + lVar16 * 0x20) = *(undefined8 *)(lVar24 + uVar20 * 0x18)
            ;
            *(undefined4 *)(lVar24 + 8 + uVar20 * 0x18) = 0;
            *(longlong *)(lVar24 + uVar20 * 0x18) = lVar16;
          }
        }
        else {
          lVar16 = FUN_1400e61d0(param_1,(*(int *)(param_2 + 0x20) != 0) + '\n',param_2);
          lVar30 = param_1[0x12];
          *(undefined4 *)(lVar30 + 4 + lVar16 * 0x20) = *(undefined4 *)(lVar24 + 8 + uVar20 * 0x18);
          *(undefined8 *)(lVar30 + 0x18 + lVar16 * 0x20) = *(undefined8 *)(lVar24 + uVar20 * 0x18);
          *(undefined4 *)(lVar24 + 8 + uVar20 * 0x18) = 1;
          *(longlong *)(lVar24 + uVar20 * 0x18) = lVar16;
        }
        break;
      case 0x13:
        lVar24 = *(longlong *)(param_2 + 0x20);
        lVar30 = param_1[0xf];
        uVar26 = (ulonglong)*(uint *)(lVar24 + 0x30);
        uVar28 = *(uint *)(lVar24 + 0xc) >> 1;
        if ((*(uint *)(lVar24 + 0xc) & 0x1000) == 0 && *(int *)(lVar24 + 0x34) == 0) {
          lVar16 = param_1[1];
          lVar17 = *(longlong *)
                    (param_1[0x12] + 0x10 + *(longlong *)(lVar30 + uVar26 * 0x18) * 0x20);
          iVar3 = *(int *)(lVar30 + 8 + uVar26 * 0x18);
          if (iVar3 < *(int *)(lVar24 + 0x20)) {
            lVar14 = FUN_1400e61d0(param_1,0xb,lVar24);
            lVar15 = param_1[0x12];
            *(undefined4 *)(lVar15 + 4 + lVar14 * 0x20) =
                 *(undefined4 *)(lVar30 + 8 + uVar26 * 0x18);
            *(undefined8 *)(lVar15 + 0x18 + lVar14 * 0x20) = *(undefined8 *)(lVar30 + uVar26 * 0x18)
            ;
            *(longlong *)(lVar30 + uVar26 * 0x18) = lVar14;
            if ((lVar17 == lVar16) && (*(int *)(lVar24 + 0x24) < 0)) {
              *(undefined4 *)(lVar30 + 8 + uVar26 * 0x18) = *(undefined4 *)(lVar24 + 0x20);
            }
            else {
              piVar19 = (int *)(lVar30 + 8 + uVar26 * 0x18);
              *piVar19 = *piVar19 + 1;
            }
            uVar20 = (ulonglong)*(uint *)(lVar30 + 0xc + uVar26 * 0x18);
            uVar26 = param_1[3] - param_1[2] >> 4;
            if (uVar20 < uVar26) {
              do {
                uVar28 = (uint)uVar20;
                uVar23 = *(ulonglong *)(param_1[5] + (uVar20 >> 6) * 8);
                if ((uVar23 >> (uVar28 & 0x3f) & 1) != 0) {
                  *(ulonglong *)(param_1[5] + (uVar20 >> 6) * 8) = uVar23 & ~(1L << (uVar28 & 0x3f))
                  ;
                  lVar15 = FUN_1400e61d0(param_1,0xf,0);
                  *(uint *)(param_1[0x12] + 4 + lVar15 * 0x20) = uVar28;
                }
                uVar20 = (ulonglong)(uVar28 + 1);
              } while (uVar20 < uVar26);
              lVar15 = *(longlong *)(lVar24 + 0x10);
            }
            else {
LAB_1400e3b19:
              lVar15 = *(longlong *)(lVar24 + 0x10);
            }
          }
          else if (lVar17 == lVar16) {
            if ((iVar3 != *(int *)(lVar24 + 0x20)) &&
               (((*(byte *)(param_1 + 0x1c) & 0x3e) == 0 || (iVar3 != 1)))) {
              uVar31 = 1;
              local_res10 = 1;
              goto LAB_1400e3eab;
            }
          }
          else if (((uVar28 & 1) == 0) || (*(char *)((longlong)param_1 + 0xf3) != '\0')) {
            if (iVar3 != *(int *)(lVar24 + 0x24)) {
              lVar16 = FUN_1400e61d0(param_1,9,lVar24);
              lVar24 = param_1[0x12];
              *(undefined4 *)(lVar24 + 4 + lVar16 * 0x20) =
                   *(undefined4 *)(lVar30 + 8 + uVar26 * 0x18);
              *(undefined8 *)(lVar24 + 0x18 + lVar16 * 0x20) =
                   *(undefined8 *)(lVar30 + uVar26 * 0x18);
              *(longlong *)(lVar30 + uVar26 * 0x18) = lVar16;
            }
          }
          else if (iVar3 != *(int *)(lVar24 + 0x24)) {
            lVar16 = FUN_1400e61d0(param_1,10,lVar24);
            lVar15 = param_1[0x12];
            *(undefined4 *)(lVar15 + 4 + lVar16 * 0x20) =
                 *(undefined4 *)(lVar30 + 8 + uVar26 * 0x18);
            *(undefined8 *)(lVar15 + 0x18 + lVar16 * 0x20) = *(undefined8 *)(lVar30 + uVar26 * 0x18)
            ;
            *(longlong *)(lVar30 + uVar26 * 0x18) = lVar16;
            iVar3 = *(int *)(lVar30 + 8 + uVar26 * 0x18);
            if (iVar3 < 0x7fffffff) {
              *(int *)(lVar30 + 8 + uVar26 * 0x18) = iVar3 + 1;
            }
            lVar15 = param_1[3];
            lVar16 = param_1[2];
            for (uVar28 = *(uint *)(lVar30 + 0xc + uVar26 * 0x18);
                (ulonglong)uVar28 < (ulonglong)(lVar15 - lVar16 >> 4); uVar28 = uVar28 + 1) {
              uVar26 = *(ulonglong *)(param_1[5] + (ulonglong)(uVar28 >> 6) * 8);
              if ((uVar26 >> (uVar28 & 0x3f) & 1) != 0) {
                *(ulonglong *)(param_1[5] + (ulonglong)(uVar28 >> 6) * 8) =
                     uVar26 & ~(1L << (uVar28 & 0x3f));
                lVar30 = FUN_1400e61d0(param_1,0xf,0);
                *(uint *)(param_1[0x12] + 4 + lVar30 * 0x20) = uVar28;
              }
            }
            goto LAB_1400e3b19;
          }
        }
        else {
          if (*(int *)(lVar30 + 8 + uVar26 * 0x18) == 1) {
            lVar16 = param_1[0x12];
            lVar14 = *(longlong *)(lVar30 + uVar26 * 0x18) * 0x20;
            lVar17 = param_1[1] - *(longlong *)(lVar14 + 0x10 + lVar16);
            *(longlong *)(lVar30 + 0x10 + uVar26 * 0x18) = lVar17;
            if (lVar17 == 0) {
              local_res10 = uVar31;
              if (((*(byte *)(param_1 + 0x1c) & 0x3e) == 0) &&
                 (local_res10 = uVar31 & 0xff, uVar31 = local_res10, *(int *)(lVar24 + 0x20) == 0))
              {
                local_res10 = 1;
                uVar31 = local_res10;
              }
              break;
            }
            uVar22 = 8;
            if ((*(int *)(lVar14 + lVar16) - 6U & 0xfffffffb) != 0) {
              uVar22 = 4;
            }
            lVar16 = FUN_1400e61d0(param_1,uVar22,lVar24);
            *(undefined8 *)(param_1[0x12] + 0x18 + lVar16 * 0x20) =
                 *(undefined8 *)(lVar30 + uVar26 * 0x18);
            *(longlong *)(lVar30 + uVar26 * 0x18) = lVar16;
          }
          else {
            param_1[0x16] = *(longlong *)(lVar30 + uVar26 * 0x18) + 1;
          }
          iVar3 = *(int *)(lVar30 + 8 + uVar26 * 0x18);
          if (iVar3 < *(int *)(lVar24 + 0x20)) {
            lVar15 = *(longlong *)(lVar24 + 0x10);
            *(int *)(lVar30 + 8 + uVar26 * 0x18) = iVar3 + 1;
          }
          else if (((uVar28 & 1) == 0) || (*(char *)((longlong)param_1 + 0xf3) != '\0')) {
            if (iVar3 == *(int *)(lVar24 + 0x24)) {
LAB_1400e3ced:
              param_1[0x16] = param_1[0x16] + -1;
            }
            else {
              lVar16 = param_1[0x12];
              lVar30 = *(longlong *)(lVar30 + uVar26 * 0x18) * 0x20;
              *(longlong *)(lVar16 + 0x10 + lVar30) = param_1[1];
              *(undefined4 *)(lVar16 + lVar30) = 5;
              *(longlong *)(lVar16 + 8 + lVar30) = lVar24;
            }
          }
          else {
            lVar16 = param_1[0x12];
            uVar20 = *(longlong *)(lVar30 + uVar26 * 0x18) * 0x20;
            if (*(int *)(lVar16 + uVar20) == 4) {
              *(undefined4 *)(lVar16 + uVar20) = 8;
              lVar17 = param_1[1];
              plVar29 = (longlong *)(lVar16 + 0x18 + uVar20);
              lVar14 = param_1[0x12];
              lVar6 = *plVar29;
              *(longlong *)(lVar14 + 0x10 + lVar6 * 0x20) = lVar17;
              *(longlong *)(lVar14 + 0x10 + lVar6 * 0x20) =
                   lVar17 - *(longlong *)(lVar30 + 0x10 + uVar26 * 0x18);
            }
            else {
              plVar29 = (longlong *)((uVar20 | 0x18) + lVar16);
            }
            lVar17 = param_1[1];
            *(longlong *)(lVar16 + 0x10 + uVar20) = lVar17;
            iVar3 = *(int *)(lVar30 + 8 + uVar26 * 0x18);
            if (iVar3 == *(int *)(lVar24 + 0x24)) {
              lVar17 = lVar17 - *(longlong *)(lVar30 + 0x10 + uVar26 * 0x18);
              lVar24 = *plVar29;
              *(longlong *)(lVar16 + 0x10 + uVar20) = lVar17;
              if (lVar17 == *(longlong *)(param_1[0x12] + 0x10 + lVar24 * 0x20)) goto LAB_1400e3ced;
              *(undefined4 *)(lVar16 + uVar20) = 7;
            }
            else {
              lVar15 = *(longlong *)(lVar24 + 0x10);
              if (iVar3 < 0x7fffffff) {
                *(int *)(lVar30 + 8 + uVar26 * 0x18) = iVar3 + 1;
              }
            }
          }
        }
        break;
      case 0x15:
        if ((((*(uint *)((longlong)param_1 + 0xe4) & 0x2020) == 0) || (param_1[0x1a] != param_1[1]))
           && ((*(char *)((longlong)param_1 + 0xf4) == '\0' || (param_1[1] == param_1[0x1b])))) {
          if (*(char *)((longlong)param_1 + 0xf3) == '\0') {
            return true;
          }
          if (*(char *)((longlong)param_1 + 0xf2) == '\0') {
LAB_1400e3e6d:
            param_1[8] = param_1[1];
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(param_1[9],param_1[2],param_1[3] - param_1[2]);
          }
          if (param_1[8] == param_1[1]) {
            if ((int)param_1[0x1d] != 1) {
              uVar26 = 0;
              do {
                uVar23 = 1L << ((byte)uVar26 & 0x3f);
                uVar20 = uVar23 & *(ulonglong *)(param_1[5] + (uVar26 >> 6) * 8);
                bVar35 = uVar20 != 0;
                if (((*(ulonglong *)(param_1[0xc] + (uVar26 >> 6) * 8) & uVar23) != 0) != bVar35)
                goto LAB_1400e3e68;
                if (uVar20 != 0) {
                  lVar15 = *(longlong *)(param_1[9] + uVar26 * 0x10);
                  lVar24 = *(longlong *)(param_1[2] + uVar26 * 0x10);
                  if (lVar15 != lVar24) {
                    bVar35 = lVar24 - param_1[0x1a] < lVar15 - param_1[0x1a];
                    goto LAB_1400e3e68;
                  }
                  lVar30 = *(longlong *)(param_1[9] + 8 + uVar26 * 0x10);
                  lVar16 = *(longlong *)(param_1[2] + 8 + uVar26 * 0x10);
                  if (lVar30 != lVar16) {
                    bVar35 = lVar30 - lVar15 < lVar16 - lVar24;
                    goto LAB_1400e3e68;
                  }
                }
                uVar28 = (int)uVar26 + 1;
                uVar26 = (ulonglong)uVar28;
              } while (uVar28 < (int)param_1[0x1d] - 1U);
            }
          }
          else {
            bVar35 = param_1[8] - param_1[0x1a] < param_1[1] - param_1[0x1a];
LAB_1400e3e68:
            if (bVar35) goto LAB_1400e3e6d;
          }
        }
        else {
          uVar31 = 1;
          local_res10 = 1;
        }
LAB_1400e3eab:
        param_2 = 0;
        goto LAB_1400e3ead;
      }
switchD_1400e30b7_caseD_1:
      param_2 = 0;
      if ((char)uVar31 == '\0') {
        param_2 = lVar15;
      }
    } while (param_2 != 0);
LAB_1400e3ead:
    cVar12 = (char)uVar31;
    lVar15 = param_1[0x16];
    if (lVar15 == 0) goto UNWIND_INFO_1400e419c_FunctionUnwindInfoAddress_1;
    while (param_2 == 0) {
      param_1[0x16] = lVar15 + -1;
      lVar24 = param_1[0x12];
      lVar30 = (lVar15 + -1) * 0x20;
      switch(*(undefined4 *)(lVar24 + lVar30)) {
      case 1:
      case 4:
        break;
      case 2:
        uVar31 = 0;
        param_1[1] = *(longlong *)(lVar24 + 0x10 + lVar30);
        local_res10 = 0;
        param_2 = *(longlong *)(*(longlong *)(lVar24 + 8 + lVar30) + 0x10);
        break;
      case 3:
        lVar15 = *(longlong *)(lVar24 + 8 + lVar30);
        uVar31 = 0;
        local_res10 = 0;
        param_2 = *(longlong *)(lVar15 + 0x10);
        param_1[1] = *(longlong *)(lVar24 + 0x10 + lVar30);
        lVar15 = *(longlong *)(lVar15 + 0x28);
        if (lVar15 != 0) {
          *(longlong *)(lVar24 + 8 + lVar30) = lVar15;
          param_1[0x16] = param_1[0x16] + 1;
        }
        break;
      case 5:
        lVar15 = *(longlong *)(lVar24 + 8 + lVar30);
        uVar31 = 0;
        local_res10 = 0;
        uVar26 = (ulonglong)*(uint *)(lVar15 + 0x30);
        param_2 = *(longlong *)(lVar15 + 0x10);
        param_1[1] = *(longlong *)(lVar24 + 0x10 + lVar30);
        iVar3 = *(int *)(param_1[0xf] + 8 + uVar26 * 0x18);
        if (iVar3 < 0x7fffffff) {
          *(int *)(param_1[0xf] + 8 + uVar26 * 0x18) = iVar3 + 1;
        }
        break;
      case 6:
        uVar31 = 0;
        local_res10 = 0;
        param_2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar24 + 8 + lVar30) + 0x28) + 0x10);
        param_1[1] = *(longlong *)(lVar24 + 0x10 + lVar30);
        break;
      case 7:
        lVar17 = param_1[0xf];
        uVar31 = *(uint *)(*(longlong *)(lVar24 + 8 + lVar30) + 0x30);
        lVar14 = *(longlong *)(lVar24 + 0x18 + lVar30);
        lVar16 = lVar14 + 1;
        if (lVar14 != lVar15 + -2) {
          do {
            plVar29 = (longlong *)
                      ((ulonglong)*(uint *)(param_1[0x12] + 4 + lVar16 * 0x20) * 0x10 + param_1[2]);
            if (*(int *)(param_1[0x12] + lVar16 * 0x20) != 0xc) {
              plVar29 = plVar29 + 1;
            }
            lVar16 = lVar16 + 1;
            *plVar29 = *plVar29 - *(longlong *)(lVar17 + 0x10 + (ulonglong)uVar31 * 0x18);
          } while (lVar16 != param_1[0x16]);
        }
      case 8:
        lVar15 = *(longlong *)(lVar24 + 8 + lVar30);
        uVar31 = 0;
        local_res10 = 0;
        param_2 = *(longlong *)(*(longlong *)(lVar15 + 0x28) + 0x10);
        param_1[1] = *(longlong *)(lVar24 + 0x10 + lVar30);
        plVar29 = (longlong *)(lVar24 + 0x10 + lVar30);
        *plVar29 = *plVar29 -
                   *(longlong *)(param_1[0xf] + 0x10 + (ulonglong)*(uint *)(lVar15 + 0x30) * 0x18);
        if (*(longlong *)(param_1[0x12] + 0x10 + *(longlong *)(lVar24 + 0x18 + lVar30) * 0x20) !=
            *(longlong *)(lVar24 + 0x10 + lVar30)) {
          *(undefined4 *)(lVar24 + lVar30) = 7;
          param_1[0x16] = param_1[0x16] + 1;
        }
        break;
      case 9:
        lVar15 = *(longlong *)(lVar24 + 8 + lVar30);
        uVar31 = 0;
        lVar16 = param_1[0xf];
        local_res10 = 0;
        uVar26 = (ulonglong)*(uint *)(lVar15 + 0x30);
        param_2 = *(longlong *)(lVar15 + 0x10);
        param_1[1] = *(longlong *)(lVar24 + 0x10 + lVar30);
        iVar3 = *(int *)(lVar16 + 8 + uVar26 * 0x18);
        if (iVar3 < 0x7fffffff) {
          *(int *)(lVar16 + 8 + uVar26 * 0x18) = iVar3 + 1;
        }
        *(undefined4 *)(lVar24 + lVar30) = 0xb;
        param_1[0x16] = param_1[0x16] + 1;
        func_0x0001400e63c0(param_1,*(undefined4 *)(lVar16 + 0xc + uVar26 * 0x18));
        break;
      case 10:
        uVar31 = 0;
        local_res10 = 0;
        param_2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar24 + 8 + lVar30) + 0x28) + 0x10);
        param_1[1] = *(longlong *)(lVar24 + 0x10 + lVar30);
      case 0xb:
        uVar26 = (ulonglong)*(uint *)(*(longlong *)(lVar24 + 8 + lVar30) + 0x30);
        uVar20 = uVar26 * 3;
        lVar15 = param_1[0xf];
        *(undefined4 *)(lVar15 + 8 + uVar26 * 0x18) = *(undefined4 *)(lVar24 + 4 + lVar30);
        uVar26 = *(ulonglong *)(lVar24 + 0x18 + lVar30);
LAB_1400e4185:
        *(ulonglong *)(lVar15 + uVar20 * 8) = uVar26;
        break;
      case 0xc:
        *(undefined8 *)(param_1[2] + (ulonglong)*(uint *)(lVar24 + 4 + lVar30) * 0x10) =
             *(undefined8 *)(lVar24 + 0x10 + lVar30);
        break;
      case 0xd:
        uVar28 = *(uint *)(lVar24 + 4 + lVar30);
        uVar26 = (ulonglong)(uVar28 >> 6);
        *(ulonglong *)(param_1[5] + uVar26 * 8) =
             *(ulonglong *)(param_1[5] + uVar26 * 8) & ~(1L << (uVar28 & 0x3f));
      case 0xe:
        *(undefined8 *)(param_1[2] + 8 + (ulonglong)*(uint *)(lVar24 + 4 + lVar30) * 0x10) =
             *(undefined8 *)(lVar24 + 0x10 + lVar30);
        break;
      case 0xf:
        uVar28 = *(uint *)(lVar24 + 4 + lVar30);
        lVar15 = param_1[5];
        uVar20 = (ulonglong)(uVar28 >> 6);
        uVar26 = *(ulonglong *)(lVar15 + uVar20 * 8) | 1L << (uVar28 & 0x3f);
        goto LAB_1400e4185;
      default:
        goto LAB_1400e41af;
      }
      cVar12 = (char)uVar31;
      lVar15 = param_1[0x16];
      if (lVar15 == 0) goto joined_r0x0001400e3065;
    }
  } while( true );
}

