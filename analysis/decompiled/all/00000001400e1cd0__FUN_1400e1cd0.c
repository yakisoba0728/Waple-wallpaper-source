// Function: FUN_1400e1cd0
// Addr: 1400e1cd0
// Size: 4464 bytes


bool FUN_1400e1cd0(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int *piVar20;
  ulonglong uVar21;
  uint uVar22;
  char *pcVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  char *pcVar26;
  ulonglong uVar27;
  int *piVar28;
  uint uVar29;
  longlong *plVar30;
  longlong lVar31;
  uint uVar32;
  char *pcVar33;
  longlong lVar34;
  bool bVar35;
  uint local_res10;
  undefined1 local_40 [8];
  
  uVar32 = 0;
  cVar11 = '\0';
  local_res10 = 0;
joined_r0x0001400e1cf5:
  if (param_2 == 0) {
UNWIND_INFO_1400e2e4c_FunctionUnwindInfoAddress_1:
    return cVar11 == '\0';
  }
  do {
    do {
      uVar27 = 4;
      if (*param_1 < 1) goto LAB_1400e2e7c;
      *param_1 = *param_1 + -1;
      if (0x15 < *(uint *)(param_2 + 8)) {
LAB_1400e2e5f:
        return false;
      }
      lVar16 = *(longlong *)(param_2 + 0x10);
      switch(*(uint *)(param_2 + 8)) {
      case 0:
        goto LAB_1400e2e5f;
      case 2:
        uVar32 = *(uint *)((longlong)param_1 + 0xe4);
        if (((uVar32 >> 8 & 1) == 0) && (param_1[1] == param_1[0x1a])) {
LAB_1400e1da7:
          local_res10 = uVar32 & 0xffffff01;
          uVar32 = uVar32 & 0xffffff01;
        }
        else {
          if (((*(uint *)(param_1 + 0x1c) & 0x1000) == 0) ||
             ((*(char *)(param_1[1] + -1) != '\n' && (*(char *)(param_1[1] + -1) != '\r'))))
          goto LAB_1400e1eba;
LAB_1400e1d8b:
          local_res10 = 0;
          uVar32 = 0;
        }
        break;
      case 3:
        if ((char *)param_1[1] == (char *)param_1[0x1b]) {
          uVar32 = *(uint *)((longlong)param_1 + 0xe4) >> 1;
          goto LAB_1400e1da7;
        }
        if ((*(uint *)(param_1 + 0x1c) & 0x1000) != 0) {
          cVar11 = *(char *)param_1[1];
          if (cVar11 == '\n') goto LAB_1400e1d8b;
          if (cVar11 == '\r') {
            local_res10 = 0;
            uVar32 = 0;
            break;
          }
        }
        goto LAB_1400e1eba;
      case 4:
        uVar32 = *(uint *)((longlong)param_1 + 0xe4);
        if (((uVar32 >> 8 & 1) == 0) &&
           (pbVar4 = (byte *)param_1[1], pbVar4 == (byte *)param_1[0x1a])) {
          if ((pbVar4 != (byte *)param_1[0x1b]) && ((uVar32 & 4) == 0)) {
            bVar2 = *pbVar4;
LAB_1400e1e37:
            if ((&DAT_140486ec0)[bVar2] != '\0') {
              local_res10 = (uint)((*(uint *)(param_2 + 0xc) & 1) == 1);
              uVar32 = local_res10;
              break;
            }
          }
        }
        else {
          pbVar4 = (byte *)param_1[1];
          if (pbVar4 != (byte *)param_1[0x1b]) {
            local_res10 = (uint)((uint)((&DAT_140486ec0)[pbVar4[-1]] != (&DAT_140486ec0)[*pbVar4])
                                == (*(uint *)(param_2 + 0xc) & 1));
            uVar32 = local_res10;
            break;
          }
          if ((uVar32 & 8) == 0) {
            bVar2 = pbVar4[-1];
            goto LAB_1400e1e37;
          }
        }
        local_res10 = (uint)((*(uint *)(param_2 + 0xc) & 1) == 0);
        uVar32 = local_res10;
        break;
      case 5:
        pcVar13 = (char *)param_1[1];
        if (pcVar13 != (char *)param_1[0x1b]) {
          cVar11 = *pcVar13;
          if ((*(byte *)(param_1 + 0x1c) & 0x3e) == 0) {
            if ((cVar11 != '\n') && (cVar11 != '\r')) goto LAB_1400e1eca;
          }
          else if (cVar11 != '\0') {
LAB_1400e1eca:
            local_res10 = uVar32;
            if ((char)uVar32 == '\0') {
              param_1[1] = (longlong)(pcVar13 + 1);
            }
            break;
          }
        }
        goto LAB_1400e1eba;
      case 6:
        pcVar23 = (char *)param_1[1];
        lVar34 = 0;
        pcVar26 = *(char **)(param_2 + 0x28);
        pcVar14 = (char *)param_1[0x1b];
        pcVar33 = pcVar26 + *(uint *)(param_2 + 0x24);
        pcVar13 = pcVar23;
        if ((*(uint *)(param_1 + 0x1c) & 0x100) == 0) {
          for (; pcVar13 != pcVar14; pcVar13 = pcVar13 + 1) {
            bVar35 = true;
            if (pcVar26 == pcVar33) goto LAB_1400e1f91;
            lVar34 = lVar34 + 1;
            if (*pcVar13 != *pcVar26) goto LAB_1400e1f95;
            pcVar26 = pcVar26 + 1;
          }
        }
        else if (pcVar23 != pcVar14) {
          lVar31 = param_1[0x19];
          do {
            if (pcVar26 == pcVar33) break;
            lVar34 = lVar34 + 1;
            cVar11 = *pcVar26;
            cVar10 = (**(code **)(**(longlong **)(lVar31 + 8) + 0x20))
                               (*(longlong **)(lVar31 + 8),*pcVar13);
            if (cVar10 != cVar11) goto LAB_1400e1f95;
            pcVar13 = pcVar13 + 1;
            pcVar26 = pcVar26 + 1;
          } while (pcVar13 != pcVar14);
        }
        bVar35 = pcVar26 == pcVar33;
LAB_1400e1f91:
        if (bVar35) {
          pcVar23 = pcVar13;
        }
LAB_1400e1f95:
        if (pcVar23 == (char *)param_1[1]) {
          local_res10 = 1;
        }
        else {
          param_1[1] = (longlong)pcVar23;
        }
        lVar34 = (longlong)(lVar34 + (ulonglong)((uint)(lVar34 >> 0x3f) & 0x3f)) >> 6;
        if (*param_1 < lVar34) goto LAB_1400e2e7c;
        *param_1 = *param_1 - lVar34;
        uVar32 = local_res10;
        break;
      case 7:
        if (param_1[1] != param_1[0x1b]) {
          plVar30 = (longlong *)func_0x0001400e1ba0(param_1,local_40,param_2);
          if (*plVar30 != param_1[1]) {
            param_1[1] = *plVar30;
            break;
          }
        }
LAB_1400e1eba:
        local_res10 = 1;
        uVar32 = 1;
        break;
      case 10:
        FUN_1400e5f50(param_1,1,param_2);
        lVar16 = *(longlong *)(param_2 + 0x20);
        break;
      case 0xb:
        FUN_1400e5f50(param_1,2,param_2);
        lVar16 = *(longlong *)(param_2 + 0x20);
        break;
      case 0xc:
        param_1[0x16] = param_1[0x16] + -1;
        lVar17 = 0;
        lVar34 = param_1[0x16];
        lVar31 = param_1[0x12];
        piVar20 = (int *)(lVar34 * 0x20 + lVar31);
        iVar3 = *piVar20;
        if (iVar3 != 1) {
          uVar27 = 0xffffffff;
          uVar29 = 0;
          do {
            uVar22 = (uint)uVar27;
            if (iVar3 == 2) {
              uVar32 = 1;
              local_res10 = 1;
              if ((uVar22 <= uVar29) && (uVar29 = uVar29 + 1, uVar22 < uVar29)) {
                uVar21 = (ulonglong)(uVar29 >> 6) + (ulonglong)((uVar29 & 0x3f) != 0);
                puVar1 = (ulonglong *)(param_1[5] + (uVar27 >> 6) * 8);
                *puVar1 = *puVar1 & (1L << ((byte)uVar27 & 0x3f)) - 1U;
                uVar27 = (uVar27 >> 6) + 1;
                if (uVar27 < uVar21) {
                  lVar34 = param_1[5] + uVar27 * 8;
                  func_0x000140421870(lVar34,0,(uVar21 * 8 - lVar34) + param_1[5] &
                                               0xfffffffffffffff8);
                }
              }
              goto switchD_1400e1d47_caseD_1;
            }
            if (iVar3 == 0xd) {
              uVar19 = piVar20[1];
              uVar12 = uVar19;
              if (uVar22 <= uVar19) {
                uVar12 = uVar22;
              }
              uVar27 = (ulonglong)uVar12;
              if (uVar19 <= uVar29) {
                uVar19 = uVar29;
              }
              uVar29 = uVar19;
              if (lVar17 == 0) {
                lVar17 = lVar34;
              }
            }
            lVar34 = lVar34 + -1;
            param_1[0x16] = lVar34;
            piVar20 = (int *)(lVar34 * 0x20 + lVar31);
            iVar3 = *piVar20;
          } while (iVar3 != 1);
        }
        param_1[1] = *(longlong *)(piVar20 + 4);
        lVar16 = *(longlong *)(*(longlong *)(piVar20 + 2) + 0x10);
        if (lVar17 != 0) {
          piVar20 = (int *)(param_1[0x16] * 0x20 + lVar31);
          piVar28 = (int *)(lVar31 + 0x20 + lVar17 * 0x20);
          if (piVar20 != piVar28) {
            do {
              if (1 < *piVar20 - 0xcU) break;
              piVar20 = piVar20 + 8;
            } while (piVar20 != piVar28);
            piVar9 = piVar20;
            if (piVar20 != piVar28) {
              while (piVar8 = piVar9, piVar9 = piVar8 + 8, piVar9 != piVar28) {
                if (*piVar9 - 0xcU < 2) {
                  iVar3 = piVar8[9];
                  iVar6 = piVar8[10];
                  iVar7 = piVar8[0xb];
                  *piVar20 = *piVar9;
                  piVar20[1] = iVar3;
                  piVar20[2] = iVar6;
                  piVar20[3] = iVar7;
                  uVar24 = *(undefined8 *)(piVar8 + 0xe);
                  *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar8 + 0xc);
                  *(undefined8 *)(piVar20 + 6) = uVar24;
                  piVar20 = piVar20 + 8;
                }
              }
            }
          }
          param_1[0x16] = (longlong)piVar20 - param_1[0x12] >> 5;
        }
        break;
      case 0xd:
        lVar34 = param_1[2];
        uVar29 = *(int *)(param_2 + 0x20) - 1;
        lVar17 = FUN_1400e5f50(param_1,0xc,param_2);
        lVar31 = param_1[0x12];
        *(undefined8 *)(lVar31 + 0x10 + lVar17 * 0x20) =
             *(undefined8 *)(lVar34 + (ulonglong)uVar29 * 0x10);
        *(uint *)(lVar31 + 4 + lVar17 * 0x20) = uVar29;
        *(longlong *)(lVar34 + (ulonglong)uVar29 * 0x10) = param_1[1];
        break;
      case 0xe:
        iVar3 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x20);
        if (iVar3 != 0) {
          uVar29 = iVar3 - 1;
          lVar34 = param_1[2];
          uVar27 = (ulonglong)(uVar29 >> 6);
          lVar17 = FUN_1400e5f50(param_1,((*(ulonglong *)(param_1[5] + uVar27 * 8) >>
                                           (uVar29 & 0x3f) & 1) != 0) + '\r');
          lVar31 = param_1[0x12];
          *(undefined8 *)(lVar31 + 0x10 + lVar17 * 0x20) =
               *(undefined8 *)(lVar34 + 8 + (ulonglong)uVar29 * 0x10);
          *(uint *)(lVar31 + 4 + lVar17 * 0x20) = uVar29;
          *(longlong *)(lVar34 + 8 + (ulonglong)uVar29 * 0x10) = param_1[1];
          *(ulonglong *)(param_1[5] + uVar27 * 8) =
               *(ulonglong *)(param_1[5] + uVar27 * 8) | 1L << (uVar29 & 0x3f);
        }
        break;
      case 0xf:
        uVar29 = *(int *)(param_2 + 0x20) - 1;
        if ((*(ulonglong *)(param_1[5] + (ulonglong)(uVar29 >> 6) * 8) >>
             (ulonglong)((byte)uVar29 & 0x3f) & 1) == 0) {
          local_res10 = uVar32 & 0xff;
          uVar32 = uVar32 & 0xff;
          if ((*(byte *)(param_1 + 0x1c) & 0x12) != 0) {
            local_res10 = 1;
            uVar32 = 1;
          }
        }
        else {
          pcVar13 = (char *)param_1[1];
          lVar34 = 0;
          pcVar23 = *(char **)(param_1[2] + 8 + (ulonglong)uVar29 * 0x10);
          pcVar26 = *(char **)(param_1[2] + (ulonglong)uVar29 * 0x10);
          if (pcVar26 == pcVar23) {
LAB_1400e23b2:
            param_1[1] = (longlong)pcVar13;
          }
          else {
            pcVar33 = (char *)param_1[0x1b];
            pcVar14 = pcVar13;
            if ((*(uint *)(param_1 + 0x1c) & 0x100) == 0) {
              for (; pcVar14 != pcVar33; pcVar14 = pcVar14 + 1) {
                bVar35 = true;
                if (pcVar26 == pcVar23) goto LAB_1400e23a1;
                lVar34 = lVar34 + 1;
                if (*pcVar14 != *pcVar26) goto LAB_1400e23a5;
                pcVar26 = pcVar26 + 1;
              }
            }
            else if (pcVar13 != pcVar33) {
              lVar31 = param_1[0x19];
              do {
                bVar35 = true;
                if (pcVar26 == pcVar23) goto LAB_1400e23a1;
                plVar30 = *(longlong **)(lVar31 + 8);
                lVar34 = lVar34 + 1;
                cVar11 = *pcVar26;
                cVar10 = (**(code **)(*plVar30 + 0x20))(plVar30,*pcVar14);
                plVar30 = *(longlong **)(lVar31 + 8);
                cVar11 = (**(code **)(*plVar30 + 0x20))(plVar30,cVar11);
                if (cVar10 != cVar11) goto LAB_1400e23a5;
                pcVar14 = pcVar14 + 1;
                pcVar26 = pcVar26 + 1;
              } while (pcVar14 != pcVar33);
            }
            bVar35 = pcVar26 == pcVar23;
LAB_1400e23a1:
            if (bVar35) {
              pcVar13 = pcVar14;
            }
LAB_1400e23a5:
            if (pcVar13 != (char *)param_1[1]) goto LAB_1400e23b2;
            local_res10 = 1;
          }
          lVar34 = (longlong)(lVar34 + (ulonglong)((uint)(lVar34 >> 0x3f) & 0x3f)) >> 6;
          if (*param_1 < lVar34) {
LAB_1400e2e7c:
                    /* WARNING: Subroutine does not return */
            FUN_14028c410(0xb);
          }
          *param_1 = *param_1 - lVar34;
          uVar32 = local_res10;
        }
        break;
      case 0x10:
        if (*(longlong *)(param_2 + 0x28) != 0) {
          FUN_1400e5f50(param_1,3);
        }
        break;
      case 0x12:
        lVar34 = param_1[0xf] + (ulonglong)*(uint *)(param_2 + 0x30) * 0x18;
        if ((*(int *)(param_1[0xf] + 0xc + (ulonglong)*(uint *)(param_2 + 0x30) * 0x18) == 0) &&
           (((*(byte *)(param_1 + 0x1c) & 0x3e) != 0 ||
            (cVar11 = FUN_1400e7950(param_1,lVar16,lVar34), cVar11 == '\0')))) {
          *(int *)(lVar34 + 0xc) = (int)(param_1[3] - param_1[2] >> 4);
        }
        uVar21 = (ulonglong)*(uint *)(param_2 + 0x30);
        lVar34 = param_1[0xf];
        uVar29 = *(uint *)(param_2 + 0xc) >> 1;
        if (*(int *)(param_2 + 0x34) == 1) {
          lVar31 = FUN_1400e5f50(param_1,uVar27 & 0xffffffff,param_2);
          *(longlong *)(lVar34 + uVar21 * 0x18) = lVar31;
          if ((*(int *)(param_2 + 0x20) < 1) &&
             ((((uVar29 & 1) == 0 || (*(char *)((longlong)param_1 + 0xf3) != '\0')) ||
              (*(int *)(param_2 + 0x24) == 0)))) {
            *(undefined4 *)(lVar34 + 8 + uVar21 * 0x18) = 0;
            lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
            if (*(int *)(param_2 + 0x24) != 0) {
              FUN_1400e5f50(param_1,5,param_2);
            }
          }
          else {
            *(undefined4 *)(lVar34 + 8 + uVar21 * 0x18) = 1;
            if (*(int *)(param_2 + 0x20) == 0) {
              *(undefined4 *)(lVar31 * 0x20 + param_1[0x12]) = 6;
            }
          }
        }
        else if ((*(int *)(param_2 + 0x20) < 1) &&
                ((((uVar29 & 1) == 0 || (*(char *)((longlong)param_1 + 0xf3) != '\0')) ||
                 (*(int *)(param_2 + 0x24) == 0)))) {
          lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
          if (*(int *)(param_2 + 0x24) != 0) {
            lVar17 = FUN_1400e5f50(param_1,9,param_2);
            lVar31 = param_1[0x12];
            *(undefined4 *)(lVar31 + 4 + lVar17 * 0x20) =
                 *(undefined4 *)(lVar34 + 8 + uVar21 * 0x18);
            *(undefined8 *)(lVar31 + 0x18 + lVar17 * 0x20) = *(undefined8 *)(lVar34 + uVar21 * 0x18)
            ;
            *(undefined4 *)(lVar34 + 8 + uVar21 * 0x18) = 0;
            *(longlong *)(lVar34 + uVar21 * 0x18) = lVar17;
          }
        }
        else {
          lVar17 = FUN_1400e5f50(param_1,(*(int *)(param_2 + 0x20) != 0) + '\n',param_2);
          lVar31 = param_1[0x12];
          *(undefined4 *)(lVar31 + 4 + lVar17 * 0x20) = *(undefined4 *)(lVar34 + 8 + uVar21 * 0x18);
          *(undefined8 *)(lVar31 + 0x18 + lVar17 * 0x20) = *(undefined8 *)(lVar34 + uVar21 * 0x18);
          *(undefined4 *)(lVar34 + 8 + uVar21 * 0x18) = 1;
          *(longlong *)(lVar34 + uVar21 * 0x18) = lVar17;
        }
        break;
      case 0x13:
        lVar34 = *(longlong *)(param_2 + 0x20);
        lVar31 = param_1[0xf];
        uVar27 = (ulonglong)*(uint *)(lVar34 + 0x30);
        uVar29 = *(uint *)(lVar34 + 0xc) >> 1;
        if ((*(uint *)(lVar34 + 0xc) & 0x1000) == 0 && *(int *)(lVar34 + 0x34) == 0) {
          lVar17 = param_1[1];
          lVar18 = *(longlong *)
                    (param_1[0x12] + 0x10 + *(longlong *)(lVar31 + uVar27 * 0x18) * 0x20);
          iVar3 = *(int *)(lVar31 + 8 + uVar27 * 0x18);
          if (iVar3 < *(int *)(lVar34 + 0x20)) {
            lVar15 = FUN_1400e5f50(param_1,0xb,lVar34);
            lVar16 = param_1[0x12];
            *(undefined4 *)(lVar16 + 4 + lVar15 * 0x20) =
                 *(undefined4 *)(lVar31 + 8 + uVar27 * 0x18);
            *(undefined8 *)(lVar16 + 0x18 + lVar15 * 0x20) = *(undefined8 *)(lVar31 + uVar27 * 0x18)
            ;
            *(longlong *)(lVar31 + uVar27 * 0x18) = lVar15;
            if ((lVar18 == lVar17) && (*(int *)(lVar34 + 0x24) < 0)) {
              *(undefined4 *)(lVar31 + 8 + uVar27 * 0x18) = *(undefined4 *)(lVar34 + 0x20);
            }
            else {
              piVar20 = (int *)(lVar31 + 8 + uVar27 * 0x18);
              *piVar20 = *piVar20 + 1;
            }
            uVar27 = (ulonglong)*(uint *)(lVar31 + 0xc + uVar27 * 0x18);
            uVar21 = param_1[3] - param_1[2] >> 4;
            if (uVar27 < uVar21) {
              do {
                uVar29 = (uint)uVar27;
                uVar25 = *(ulonglong *)(param_1[5] + (uVar27 >> 6) * 8);
                if ((uVar25 >> (uVar29 & 0x3f) & 1) != 0) {
                  *(ulonglong *)(param_1[5] + (uVar27 >> 6) * 8) = uVar25 & ~(1L << (uVar29 & 0x3f))
                  ;
                  lVar16 = FUN_1400e5f50(param_1,0xf,0);
                  *(uint *)(param_1[0x12] + 4 + lVar16 * 0x20) = uVar29;
                }
                uVar27 = (ulonglong)(uVar29 + 1);
              } while (uVar27 < uVar21);
              lVar16 = *(longlong *)(lVar34 + 0x10);
            }
            else {
LAB_1400e27c9:
              lVar16 = *(longlong *)(lVar34 + 0x10);
            }
          }
          else if (lVar18 == lVar17) {
            if ((iVar3 != *(int *)(lVar34 + 0x20)) &&
               (((*(byte *)(param_1 + 0x1c) & 0x3e) == 0 || (iVar3 != 1)))) {
              uVar32 = 1;
              local_res10 = 1;
              goto LAB_1400e2b5b;
            }
          }
          else if (((uVar29 & 1) == 0) || (*(char *)((longlong)param_1 + 0xf3) != '\0')) {
            if (iVar3 != *(int *)(lVar34 + 0x24)) {
              lVar17 = FUN_1400e5f50(param_1,9,lVar34);
              lVar34 = param_1[0x12];
              *(undefined4 *)(lVar34 + 4 + lVar17 * 0x20) =
                   *(undefined4 *)(lVar31 + 8 + uVar27 * 0x18);
              *(undefined8 *)(lVar34 + 0x18 + lVar17 * 0x20) =
                   *(undefined8 *)(lVar31 + uVar27 * 0x18);
              *(longlong *)(lVar31 + uVar27 * 0x18) = lVar17;
            }
          }
          else if (iVar3 != *(int *)(lVar34 + 0x24)) {
            lVar17 = FUN_1400e5f50(param_1,10,lVar34);
            lVar16 = param_1[0x12];
            *(undefined4 *)(lVar16 + 4 + lVar17 * 0x20) =
                 *(undefined4 *)(lVar31 + 8 + uVar27 * 0x18);
            *(undefined8 *)(lVar16 + 0x18 + lVar17 * 0x20) = *(undefined8 *)(lVar31 + uVar27 * 0x18)
            ;
            *(longlong *)(lVar31 + uVar27 * 0x18) = lVar17;
            iVar3 = *(int *)(lVar31 + 8 + uVar27 * 0x18);
            if (iVar3 < 0x7fffffff) {
              *(int *)(lVar31 + 8 + uVar27 * 0x18) = iVar3 + 1;
            }
            lVar16 = param_1[3];
            lVar17 = param_1[2];
            for (uVar29 = *(uint *)(lVar31 + 0xc + uVar27 * 0x18);
                (ulonglong)uVar29 < (ulonglong)(lVar16 - lVar17 >> 4); uVar29 = uVar29 + 1) {
              uVar27 = *(ulonglong *)(param_1[5] + (ulonglong)(uVar29 >> 6) * 8);
              if ((uVar27 >> (uVar29 & 0x3f) & 1) != 0) {
                *(ulonglong *)(param_1[5] + (ulonglong)(uVar29 >> 6) * 8) =
                     uVar27 & ~(1L << (uVar29 & 0x3f));
                lVar31 = FUN_1400e5f50(param_1,0xf,0);
                *(uint *)(param_1[0x12] + 4 + lVar31 * 0x20) = uVar29;
              }
            }
            goto LAB_1400e27c9;
          }
        }
        else {
          if (*(int *)(lVar31 + 8 + uVar27 * 0x18) == 1) {
            lVar17 = param_1[0x12];
            lVar15 = *(longlong *)(lVar31 + uVar27 * 0x18) * 0x20;
            lVar18 = param_1[1] - *(longlong *)(lVar17 + 0x10 + lVar15);
            *(longlong *)(lVar31 + 0x10 + uVar27 * 0x18) = lVar18;
            if (lVar18 == 0) {
              local_res10 = uVar32;
              if (((*(byte *)(param_1 + 0x1c) & 0x3e) == 0) &&
                 (local_res10 = uVar32 & 0xff, uVar32 = local_res10, *(int *)(lVar34 + 0x20) == 0))
              {
                local_res10 = 1;
                uVar32 = local_res10;
              }
              break;
            }
            uVar24 = 8;
            if ((*(int *)(lVar17 + lVar15) - 6U & 0xfffffffb) != 0) {
              uVar24 = 4;
            }
            lVar17 = FUN_1400e5f50(param_1,uVar24,lVar34);
            *(undefined8 *)(param_1[0x12] + 0x18 + lVar17 * 0x20) =
                 *(undefined8 *)(lVar31 + uVar27 * 0x18);
            *(longlong *)(lVar31 + uVar27 * 0x18) = lVar17;
          }
          else {
            param_1[0x16] = *(longlong *)(lVar31 + uVar27 * 0x18) + 1;
          }
          iVar3 = *(int *)(lVar31 + 8 + uVar27 * 0x18);
          if (iVar3 < *(int *)(lVar34 + 0x20)) {
            lVar16 = *(longlong *)(lVar34 + 0x10);
            *(int *)(lVar31 + 8 + uVar27 * 0x18) = iVar3 + 1;
          }
          else if (((uVar29 & 1) == 0) || (*(char *)((longlong)param_1 + 0xf3) != '\0')) {
            if (iVar3 == *(int *)(lVar34 + 0x24)) {
LAB_1400e2999:
              param_1[0x16] = param_1[0x16] + -1;
            }
            else {
              lVar17 = param_1[0x12];
              lVar31 = *(longlong *)(lVar31 + uVar27 * 0x18) * 0x20;
              *(longlong *)(lVar17 + 0x10 + lVar31) = param_1[1];
              *(undefined4 *)(lVar17 + lVar31) = 5;
              *(longlong *)(lVar17 + 8 + lVar31) = lVar34;
            }
          }
          else {
            lVar17 = param_1[0x12];
            uVar21 = *(longlong *)(lVar31 + uVar27 * 0x18) * 0x20;
            if (*(int *)(lVar17 + uVar21) == 4) {
              *(undefined4 *)(lVar17 + uVar21) = 8;
              lVar18 = param_1[1];
              plVar30 = (longlong *)(lVar17 + 0x18 + uVar21);
              lVar15 = param_1[0x12];
              lVar5 = *plVar30;
              *(longlong *)(lVar15 + 0x10 + lVar5 * 0x20) = lVar18;
              *(longlong *)(lVar15 + 0x10 + lVar5 * 0x20) =
                   lVar18 - *(longlong *)(lVar31 + 0x10 + uVar27 * 0x18);
            }
            else {
              plVar30 = (longlong *)((uVar21 | 0x18) + lVar17);
            }
            lVar18 = param_1[1];
            *(longlong *)(lVar17 + 0x10 + uVar21) = lVar18;
            iVar3 = *(int *)(lVar31 + 8 + uVar27 * 0x18);
            if (iVar3 == *(int *)(lVar34 + 0x24)) {
              lVar18 = lVar18 - *(longlong *)(lVar31 + 0x10 + uVar27 * 0x18);
              lVar34 = *plVar30;
              *(longlong *)(lVar17 + 0x10 + uVar21) = lVar18;
              if (lVar18 == *(longlong *)(param_1[0x12] + 0x10 + lVar34 * 0x20)) goto LAB_1400e2999;
              *(undefined4 *)(lVar17 + uVar21) = 7;
            }
            else {
              lVar16 = *(longlong *)(lVar34 + 0x10);
              if (iVar3 < 0x7fffffff) {
                *(int *)(lVar31 + 8 + uVar27 * 0x18) = iVar3 + 1;
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
LAB_1400e2b1c:
            param_1[8] = param_1[1];
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(param_1[9],param_1[2],param_1[3] - param_1[2]);
          }
          if (param_1[8] == param_1[1]) {
            if ((int)param_1[0x1d] != 1) {
              uVar27 = 0;
              do {
                uVar25 = 1L << ((byte)uVar27 & 0x3f);
                uVar21 = uVar25 & *(ulonglong *)(param_1[5] + (uVar27 >> 6) * 8);
                bVar35 = uVar21 != 0;
                if (((*(ulonglong *)(param_1[0xc] + (uVar27 >> 6) * 8) & uVar25) != 0) != bVar35)
                goto LAB_1400e2b17;
                if (uVar21 != 0) {
                  lVar16 = *(longlong *)(param_1[9] + uVar27 * 0x10);
                  lVar34 = *(longlong *)(param_1[2] + uVar27 * 0x10);
                  if (lVar16 != lVar34) {
                    bVar35 = lVar34 - param_1[0x1a] < lVar16 - param_1[0x1a];
                    goto LAB_1400e2b17;
                  }
                  lVar31 = *(longlong *)(param_1[9] + 8 + uVar27 * 0x10);
                  lVar17 = *(longlong *)(param_1[2] + 8 + uVar27 * 0x10);
                  if (lVar31 != lVar17) {
                    bVar35 = lVar31 - lVar16 < lVar17 - lVar34;
                    goto LAB_1400e2b17;
                  }
                }
                uVar29 = (int)uVar27 + 1;
                uVar27 = (ulonglong)uVar29;
              } while (uVar29 < (int)param_1[0x1d] - 1U);
            }
          }
          else {
            bVar35 = param_1[8] - param_1[0x1a] < param_1[1] - param_1[0x1a];
LAB_1400e2b17:
            if (bVar35) goto LAB_1400e2b1c;
          }
        }
        else {
          uVar32 = 1;
          local_res10 = 1;
        }
LAB_1400e2b5b:
        param_2 = 0;
        goto LAB_1400e2b5d;
      }
switchD_1400e1d47_caseD_1:
      param_2 = 0;
      if ((char)uVar32 == '\0') {
        param_2 = lVar16;
      }
    } while (param_2 != 0);
LAB_1400e2b5d:
    cVar11 = (char)uVar32;
    lVar16 = param_1[0x16];
    if (lVar16 == 0) goto UNWIND_INFO_1400e2e4c_FunctionUnwindInfoAddress_1;
    while (param_2 == 0) {
      param_1[0x16] = lVar16 + -1;
      lVar34 = param_1[0x12];
      lVar31 = (lVar16 + -1) * 0x20;
      switch(*(undefined4 *)(lVar34 + lVar31)) {
      case 1:
      case 4:
        break;
      case 2:
        uVar32 = 0;
        param_1[1] = *(longlong *)(lVar34 + 0x10 + lVar31);
        local_res10 = 0;
        param_2 = *(longlong *)(*(longlong *)(lVar34 + 8 + lVar31) + 0x10);
        break;
      case 3:
        lVar16 = *(longlong *)(lVar34 + 8 + lVar31);
        uVar32 = 0;
        local_res10 = 0;
        param_2 = *(longlong *)(lVar16 + 0x10);
        param_1[1] = *(longlong *)(lVar34 + 0x10 + lVar31);
        lVar16 = *(longlong *)(lVar16 + 0x28);
        if (lVar16 != 0) {
          *(longlong *)(lVar34 + 8 + lVar31) = lVar16;
          param_1[0x16] = param_1[0x16] + 1;
        }
        break;
      case 5:
        lVar16 = *(longlong *)(lVar34 + 8 + lVar31);
        uVar32 = 0;
        local_res10 = 0;
        uVar27 = (ulonglong)*(uint *)(lVar16 + 0x30);
        param_2 = *(longlong *)(lVar16 + 0x10);
        param_1[1] = *(longlong *)(lVar34 + 0x10 + lVar31);
        iVar3 = *(int *)(param_1[0xf] + 8 + uVar27 * 0x18);
        if (iVar3 < 0x7fffffff) {
          *(int *)(param_1[0xf] + 8 + uVar27 * 0x18) = iVar3 + 1;
        }
        break;
      case 6:
        uVar32 = 0;
        local_res10 = 0;
        param_2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar34 + 8 + lVar31) + 0x28) + 0x10);
        param_1[1] = *(longlong *)(lVar34 + 0x10 + lVar31);
        break;
      case 7:
        lVar18 = param_1[0xf];
        uVar32 = *(uint *)(*(longlong *)(lVar34 + 8 + lVar31) + 0x30);
        lVar15 = *(longlong *)(lVar34 + 0x18 + lVar31);
        lVar17 = lVar15 + 1;
        if (lVar15 != lVar16 + -2) {
          do {
            plVar30 = (longlong *)
                      ((ulonglong)*(uint *)(param_1[0x12] + 4 + lVar17 * 0x20) * 0x10 + param_1[2]);
            if (*(int *)(param_1[0x12] + lVar17 * 0x20) != 0xc) {
              plVar30 = plVar30 + 1;
            }
            lVar17 = lVar17 + 1;
            *plVar30 = *plVar30 - *(longlong *)(lVar18 + 0x10 + (ulonglong)uVar32 * 0x18);
          } while (lVar17 != param_1[0x16]);
        }
      case 8:
        lVar16 = *(longlong *)(lVar34 + 8 + lVar31);
        uVar32 = 0;
        local_res10 = 0;
        param_2 = *(longlong *)(*(longlong *)(lVar16 + 0x28) + 0x10);
        param_1[1] = *(longlong *)(lVar34 + 0x10 + lVar31);
        plVar30 = (longlong *)(lVar34 + 0x10 + lVar31);
        *plVar30 = *plVar30 -
                   *(longlong *)(param_1[0xf] + 0x10 + (ulonglong)*(uint *)(lVar16 + 0x30) * 0x18);
        if (*(longlong *)(param_1[0x12] + 0x10 + *(longlong *)(lVar34 + 0x18 + lVar31) * 0x20) !=
            *(longlong *)(lVar34 + 0x10 + lVar31)) {
          *(undefined4 *)(lVar34 + lVar31) = 7;
          param_1[0x16] = param_1[0x16] + 1;
        }
        break;
      case 9:
        lVar16 = *(longlong *)(lVar34 + 8 + lVar31);
        uVar32 = 0;
        lVar17 = param_1[0xf];
        local_res10 = 0;
        uVar27 = (ulonglong)*(uint *)(lVar16 + 0x30);
        param_2 = *(longlong *)(lVar16 + 0x10);
        param_1[1] = *(longlong *)(lVar34 + 0x10 + lVar31);
        iVar3 = *(int *)(lVar17 + 8 + uVar27 * 0x18);
        if (iVar3 < 0x7fffffff) {
          *(int *)(lVar17 + 8 + uVar27 * 0x18) = iVar3 + 1;
        }
        *(undefined4 *)(lVar34 + lVar31) = 0xb;
        param_1[0x16] = param_1[0x16] + 1;
        FUN_1400e6140(param_1,*(undefined4 *)(lVar17 + 0xc + uVar27 * 0x18));
        break;
      case 10:
        uVar32 = 0;
        local_res10 = 0;
        param_2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar34 + 8 + lVar31) + 0x28) + 0x10);
        param_1[1] = *(longlong *)(lVar34 + 0x10 + lVar31);
      case 0xb:
        uVar27 = (ulonglong)*(uint *)(*(longlong *)(lVar34 + 8 + lVar31) + 0x30);
        uVar21 = uVar27 * 3;
        lVar16 = param_1[0xf];
        *(undefined4 *)(lVar16 + 8 + uVar27 * 0x18) = *(undefined4 *)(lVar34 + 4 + lVar31);
        uVar27 = *(ulonglong *)(lVar34 + 0x18 + lVar31);
LAB_1400e2e35:
        *(ulonglong *)(lVar16 + uVar21 * 8) = uVar27;
        break;
      case 0xc:
        *(undefined8 *)(param_1[2] + (ulonglong)*(uint *)(lVar34 + 4 + lVar31) * 0x10) =
             *(undefined8 *)(lVar34 + 0x10 + lVar31);
        break;
      case 0xd:
        uVar29 = *(uint *)(lVar34 + 4 + lVar31);
        uVar27 = (ulonglong)(uVar29 >> 6);
        *(ulonglong *)(param_1[5] + uVar27 * 8) =
             *(ulonglong *)(param_1[5] + uVar27 * 8) & ~(1L << (uVar29 & 0x3f));
      case 0xe:
        *(undefined8 *)(param_1[2] + 8 + (ulonglong)*(uint *)(lVar34 + 4 + lVar31) * 0x10) =
             *(undefined8 *)(lVar34 + 0x10 + lVar31);
        break;
      case 0xf:
        uVar29 = *(uint *)(lVar34 + 4 + lVar31);
        lVar16 = param_1[5];
        uVar21 = (ulonglong)(uVar29 >> 6);
        uVar27 = *(ulonglong *)(lVar16 + uVar21 * 8) | 1L << (uVar29 & 0x3f);
        goto LAB_1400e2e35;
      default:
        goto LAB_1400e2e5f;
      }
      cVar11 = (char)uVar32;
      lVar16 = param_1[0x16];
      if (lVar16 == 0) goto joined_r0x0001400e1cf5;
    }
  } while( true );
}

