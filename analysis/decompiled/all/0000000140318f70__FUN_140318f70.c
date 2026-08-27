// Function: FUN_140318f70
// Addr: 140318f70
// Size: 1564 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140318f70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  byte *pbVar12;
  longlong *plVar13;
  byte *pbVar14;
  uint uVar15;
  undefined1 auStack_a8 [32];
  int local_88;
  char local_84;
  byte *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  puVar4 = *(undefined8 **)(param_1 + 0x2a0);
  lVar9 = param_2[4];
  pbVar12 = (byte *)param_2[2];
  lVar8 = *param_2;
  local_80 = pbVar12;
  local_78 = param_1;
  local_70 = lVar9;
  local_58 = puVar4;
  uVar7 = (*(code *)param_2[9])(param_2);
  if (-1 < (int)uVar7) {
    uVar10 = (longlong)pbVar12 - lVar8 >> 3;
    if ((longlong)(int)uVar7 <= (longlong)uVar10) {
      uVar10 = uVar7;
    }
    local_60 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      return;
    }
    if ((int)param_2[3] != 0) {
      return;
    }
    if ((int)param_2[0x23] == 0) {
      iVar11 = (int)uVar10 + 6;
      local_88 = (**(code **)*puVar4)(param_2 + 0x2f,iVar11,lVar9);
      if (((local_88 != 0) ||
          (local_88 = (**(code **)*puVar4)(param_2 + 0x24,iVar11,lVar9), local_88 != 0)) ||
         (local_88 = (**(code **)*puVar4)(param_2 + 0x3a,4,lVar9), local_88 != 0))
      goto LAB_140319565;
    }
    iVar11 = 0;
    local_50 = 0;
    local_84 = '\0';
    (*(code *)param_2[7])(param_2);
    pbVar12 = (byte *)*param_2;
    pbVar14 = local_80;
    if (pbVar12 < local_80) {
      do {
        if (pbVar12 + 3 < pbVar14) {
          bVar3 = pbVar12[3];
          if (((bVar3 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) ||
             (((byte)(bVar3 - 0x3e) < 0x40 &&
              ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar3 - 0x3e) & 0x3f) & 1) != 0)))) {
            if (*pbVar12 == 100) {
              if (((pbVar12[1] == 0x65) && (pbVar12[2] == 0x66)) && (iVar11 != 0))
              goto LAB_1403192fd;
            }
            else if (((*pbVar12 == 0x65) && (pbVar12[1] == 0x6e)) && (pbVar12[2] == 100)) break;
          }
        }
        (*(code *)param_2[8])(param_2);
        pbVar5 = (byte *)*param_2;
        if (pbVar14 <= pbVar5) goto LAB_140319560;
        if ((int)param_2[3] != 0) {
          return;
        }
        if (*pbVar12 == 0x2f) {
          if (pbVar14 <= pbVar12 + 2) goto LAB_140319560;
          pbVar14 = (byte *)param_2[2];
          pbVar12 = pbVar12 + 1;
          lVar9 = *(longlong *)(*(longlong *)(local_78 + 0xd0) + 0x50);
          (*(code *)param_2[7])(param_2);
          if ((pbVar14 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_14031933a:
            if (lVar9 != 0) {
              return;
            }
            *(undefined4 *)(param_2 + 3) = 3;
            return;
          }
          uVar6 = (*(code *)param_2[9])(param_2);
          (*(code *)param_2[8])(param_2);
          if ((int)uVar6 < 0) goto LAB_14031933a;
          local_68 = *param_2 + 1;
          if ((longlong)pbVar14 - local_68 <= (longlong)(int)uVar6) goto LAB_14031933a;
          *param_2 = (longlong)(int)(uVar6 + 1) + *param_2;
          if ((int)param_2[3] != 0) {
            return;
          }
          pbVar14 = local_80;
          if ((int)param_2[0x23] == 0) {
            uVar15 = (int)pbVar5 - (int)pbVar12;
            local_88 = (*(code *)param_2[0x2d])(param_2 + 0x24,iVar11,pbVar12,uVar15 + 1);
            lVar9 = local_78;
            if (local_88 != 0) goto LAB_140319565;
            *(undefined1 *)((ulonglong)uVar15 + *(longlong *)(param_2[0x28] + (longlong)iVar11 * 8))
                 = 0;
            if (*pbVar12 == 0x2e) {
              lVar8 = 0;
              do {
                pcVar2 = ".notdef" + lVar8;
                lVar8 = lVar8 + 1;
                if (*pcVar2 !=
                    *(char *)(*(longlong *)(param_2[0x28] + (longlong)iVar11 * 8) + -1 + lVar8))
                goto LAB_140319222;
              } while (lVar8 != 8);
              local_84 = '\x01';
              local_50 = iVar11;
            }
LAB_140319222:
            if (((int)*(uint *)(local_78 + 0x118) < 0) || ((int)local_60 + 5 <= iVar11)) {
              local_88 = (*(code *)param_2[0x38])(param_2 + 0x2f,iVar11,local_68,uVar6);
            }
            else {
              if (uVar6 <= *(uint *)(local_78 + 0x118)) goto LAB_140319560;
              lVar8 = FUN_1402f7f20(local_70,local_68,uVar6,&local_88);
              if (local_88 != 0) goto LAB_140319565;
              (*(code *)local_58[4])(lVar8,uVar6,0x10ea);
              local_88 = (*(code *)param_2[0x38])
                                   (param_2 + 0x2f,iVar11,lVar8 + *(int *)(lVar9 + 0x118),
                                    uVar6 - *(int *)(lVar9 + 0x118));
              FUN_1402f7f90(local_70,lVar8);
            }
            if (local_88 != 0) goto LAB_140319565;
            iVar11 = iVar11 + 1;
            pbVar14 = local_80;
          }
        }
        (*(code *)param_2[7])();
        pbVar12 = (byte *)*param_2;
      } while (pbVar12 < pbVar14);
      if (iVar11 != 0) {
LAB_1403192fd:
        plVar13 = param_2 + 0x24;
        *(int *)(param_2 + 0x23) = iVar11;
        if (local_84 == '\0') {
          local_50 = 0xde1f78b;
          local_4c = 0xe;
          local_88 = (*(code *)param_2[0x43])
                               (param_2 + 0x3a,0,*(undefined8 *)param_2[0x28],
                                *(undefined4 *)param_2[0x29]);
          if (((local_88 == 0) &&
              (local_88 = (*(code *)param_2[0x43])
                                    (param_2 + 0x3a,1,*(undefined8 *)param_2[0x33],
                                     *(undefined4 *)param_2[0x34]), local_88 == 0)) &&
             ((local_88 = (*(code *)param_2[0x2d])(plVar13,0,".notdef",8), local_88 == 0 &&
              (((local_88 = (*(code *)param_2[0x38])(param_2 + 0x2f,0,&local_50,5), local_88 == 0 &&
                (local_88 = (*(code *)param_2[0x2d])
                                      (plVar13,iVar11,*(undefined8 *)param_2[0x3e],
                                       *(undefined4 *)param_2[0x3f]), local_88 == 0)) &&
               (local_88 = (*(code *)param_2[0x38])
                                     (param_2 + 0x2f,iVar11,*(undefined8 *)(param_2[0x3e] + 8),
                                      *(undefined4 *)(param_2[0x3f] + 4)), local_88 == 0)))))) {
            *(int *)(param_2 + 0x23) = (int)param_2[0x23] + 1;
            return;
          }
        }
        else {
          lVar9 = 0;
          while (pcVar2 = ".notdef" + lVar9, lVar9 = lVar9 + 1,
                *pcVar2 == *(char *)(*(longlong *)param_2[0x28] + -1 + lVar9)) {
            if (lVar9 == 8) {
              return;
            }
          }
          plVar1 = param_2 + 0x3a;
          local_88 = (*(code *)param_2[0x43])
                               (plVar1,0,*(longlong *)param_2[0x28],*(undefined4 *)param_2[0x29]);
          if ((local_88 == 0) &&
             (local_88 = (*(code *)param_2[0x43])
                                   (plVar1,1,*(undefined8 *)param_2[0x33],
                                    *(undefined4 *)param_2[0x34]), iVar11 = local_50, local_88 == 0)
             ) {
            lVar9 = (longlong)local_50 * 4;
            lVar8 = (longlong)local_50 * 8;
            local_88 = (*(code *)param_2[0x43])
                                 (plVar1,2,*(undefined8 *)(param_2[0x28] + lVar8),
                                  *(undefined4 *)(param_2[0x29] + lVar9));
            if (local_88 == 0) {
              local_88 = (*(code *)param_2[0x43])
                                   (plVar1,3,*(undefined8 *)(lVar8 + param_2[0x33]),
                                    *(undefined4 *)(param_2[0x34] + lVar9));
              if ((((local_88 == 0) &&
                   (local_88 = (*(code *)param_2[0x2d])
                                         (plVar13,iVar11,*(undefined8 *)param_2[0x3e],
                                          *(undefined4 *)param_2[0x3f]), local_88 == 0)) &&
                  (local_88 = (*(code *)param_2[0x38])
                                        (param_2 + 0x2f,iVar11,*(undefined8 *)(param_2[0x3e] + 8),
                                         *(undefined4 *)(param_2[0x3f] + 4)), local_88 == 0)) &&
                 ((local_88 = (*(code *)param_2[0x2d])
                                        (plVar13,0,*(undefined8 *)(param_2[0x3e] + 0x10),
                                         *(undefined4 *)(param_2[0x3f] + 8)), local_88 == 0 &&
                  (local_88 = (*(code *)param_2[0x38])
                                        (param_2 + 0x2f,0,*(undefined8 *)(param_2[0x3e] + 0x18),
                                         *(undefined4 *)(param_2[0x3f] + 0xc)), local_88 == 0)))) {
                return;
              }
            }
          }
        }
        goto LAB_140319565;
      }
    }
  }
LAB_140319560:
  local_88 = 3;
LAB_140319565:
  *(int *)(param_2 + 3) = local_88;
  return;
}

