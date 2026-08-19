// Function: FUN_140319040
// Addr: 140319040
// Size: 1349 bytes


void FUN_140319040(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  byte *pbVar13;
  longlong *plVar14;
  byte *pbVar15;
  uint uVar16;
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
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_a8;
  puVar4 = *(undefined8 **)(param_1 + 0x2a0);
  lVar10 = param_2[4];
  pbVar13 = (byte *)param_2[2];
  lVar9 = *param_2;
  local_80 = pbVar13;
  local_78 = param_1;
  local_70 = lVar10;
  local_58 = puVar4;
  uVar8 = (*(code *)param_2[9])(param_2);
  if (-1 < (int)uVar8) {
    uVar11 = (longlong)pbVar13 - lVar9 >> 3;
    if ((longlong)(int)uVar8 <= (longlong)uVar11) {
      uVar11 = uVar8;
    }
    local_60 = uVar11 & 0xffffffff;
    if (((int)uVar11 == 0) || ((int)param_2[3] != 0))
    goto UNWIND_INFO_1403195e4_UnwindCodes_40__OffsetInProlog;
    if ((int)param_2[0x23] == 0) {
      iVar12 = (int)uVar11 + 6;
      local_88 = (**(code **)*puVar4)(param_2 + 0x2f,iVar12,lVar10);
      iVar7 = local_88;
      if (((local_88 != 0) ||
          (local_88 = (**(code **)*puVar4)(param_2 + 0x24,iVar12,lVar10), iVar7 = local_88,
          local_88 != 0)) ||
         (local_88 = (**(code **)*puVar4)(param_2 + 0x3a,4,lVar10), iVar7 = local_88, local_88 != 0)
         ) goto UNWIND_INFO_1403195e4_UnwindCodes_38__UnwindOpCode;
    }
    iVar12 = 0;
    local_50 = 0;
    local_84 = '\0';
    (*(code *)param_2[7])(param_2);
    pbVar13 = (byte *)*param_2;
    pbVar15 = local_80;
    if (pbVar13 < local_80) {
LAB_14031914c:
      if (pbVar13 + 3 < pbVar15) {
        bVar3 = pbVar13[3];
        if (((bVar3 < 0x3d) && ((0x1000832100003601U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) ||
           (((byte)(bVar3 - 0x3e) < 0x40 &&
            ((0xa0000000a0000001U >> ((ulonglong)(byte)(bVar3 - 0x3e) & 0x3f) & 1) != 0)))) {
          if (*pbVar13 == 100) {
            if (((pbVar13[1] == 0x65) && (pbVar13[2] == 0x66)) && (iVar12 != 0)) goto LAB_1403193cd;
          }
          else if (((*pbVar13 == 0x65) && (pbVar13[1] == 0x6e)) && (pbVar13[2] == 100))
          goto LAB_1403193c4;
        }
      }
      (*(code *)param_2[8])(param_2);
      pbVar5 = (byte *)*param_2;
      if (pbVar15 <= pbVar5) goto UNWIND_INFO_1403195e4_UnwindCodes_36__OffsetInProlog;
      if ((int)param_2[3] != 0) goto UNWIND_INFO_1403195e4_UnwindCodes_40__OffsetInProlog;
      if (*pbVar13 != 0x2f) {
LAB_1403193b2:
        (*(code *)param_2[7])();
        pbVar13 = (byte *)*param_2;
        if (pbVar15 <= pbVar13) goto LAB_1403193c4;
        goto LAB_14031914c;
      }
      if (pbVar15 <= pbVar13 + 2) goto UNWIND_INFO_1403195e4_UnwindCodes_36__OffsetInProlog;
      pbVar15 = (byte *)param_2[2];
      pbVar13 = pbVar13 + 1;
      lVar10 = *(longlong *)(*(longlong *)(local_78 + 0xd0) + 0x50);
      (*(code *)param_2[7])(param_2);
      if (((byte *)*param_2 < pbVar15) && (*(byte *)*param_2 - 0x30 < 10)) {
        uVar6 = (*(code *)param_2[9])(param_2);
        (*(code *)param_2[8])(param_2);
        if (-1 < (int)uVar6) {
          local_68 = *param_2 + 1;
          if ((longlong)(int)uVar6 < (longlong)pbVar15 - local_68) {
            *param_2 = (longlong)(int)(uVar6 + 1) + *param_2;
            if ((int)param_2[3] != 0) goto UNWIND_INFO_1403195e4_UnwindCodes_40__OffsetInProlog;
            pbVar15 = local_80;
            if ((int)param_2[0x23] == 0) {
              uVar16 = (int)pbVar5 - (int)pbVar13;
              local_88 = (*(code *)param_2[0x2d])(param_2 + 0x24,iVar12,pbVar13,uVar16 + 1);
              lVar10 = local_78;
              iVar7 = local_88;
              if (local_88 != 0) goto UNWIND_INFO_1403195e4_UnwindCodes_38__UnwindOpCode;
              *(undefined1 *)
               ((ulonglong)uVar16 + *(longlong *)(param_2[0x28] + (longlong)iVar12 * 8)) = 0;
              if (*pbVar13 == 0x2e) {
                lVar9 = 0;
                do {
                  pcVar2 = ".notdef" + lVar9;
                  lVar9 = lVar9 + 1;
                  if (*pcVar2 !=
                      *(char *)(*(longlong *)(param_2[0x28] + (longlong)iVar12 * 8) + -1 + lVar9))
                  goto LAB_1403192f2;
                } while (lVar9 != 8);
                local_84 = '\x01';
                local_50 = iVar12;
              }
LAB_1403192f2:
              if (((int)*(uint *)(local_78 + 0x118) < 0) || ((int)local_60 + 5 <= iVar12)) {
                iVar7 = (*(code *)param_2[0x38])(param_2 + 0x2f,iVar12,local_68,uVar6);
                local_88 = iVar7;
                if (iVar7 == 0) {
                  iVar12 = iVar12 + 1;
                  pbVar15 = local_80;
                  goto LAB_1403193b2;
                }
                goto UNWIND_INFO_1403195e4_UnwindCodes_38__UnwindOpCode;
              }
              if (uVar6 <= *(uint *)(local_78 + 0x118))
              goto UNWIND_INFO_1403195e4_UnwindCodes_36__OffsetInProlog;
              lVar9 = func_0x0001402f7ff0(local_70,local_68,uVar6,&local_88);
              iVar7 = local_88;
              if (local_88 == 0) {
                (*(code *)local_58[4])(lVar9,uVar6,0x10ea);
                local_88 = (*(code *)param_2[0x38])
                                     (param_2 + 0x2f,iVar12,lVar9 + *(int *)(lVar10 + 0x118),
                                      uVar6 - *(int *)(lVar10 + 0x118));
                    /* WARNING: Subroutine does not return */
                FUN_1402f8060(local_70,lVar9);
              }
              goto UNWIND_INFO_1403195e4_UnwindCodes_38__UnwindOpCode;
            }
            goto LAB_1403193b2;
          }
        }
      }
      if (lVar10 == 0) {
        *(undefined4 *)(param_2 + 3) = 3;
      }
      goto UNWIND_INFO_1403195e4_UnwindCodes_40__OffsetInProlog;
    }
  }
UNWIND_INFO_1403195e4_UnwindCodes_36__OffsetInProlog:
  iVar7 = 3;
  goto UNWIND_INFO_1403195e4_UnwindCodes_38__UnwindOpCode;
LAB_1403193c4:
  if (iVar12 == 0) goto UNWIND_INFO_1403195e4_UnwindCodes_36__OffsetInProlog;
LAB_1403193cd:
  plVar14 = param_2 + 0x24;
  *(int *)(param_2 + 0x23) = iVar12;
  if (local_84 != '\0') {
    lVar10 = 0;
    do {
      pcVar2 = ".notdef" + lVar10;
      lVar10 = lVar10 + 1;
      if (*pcVar2 != *(char *)(*(longlong *)param_2[0x28] + -1 + lVar10)) {
        plVar1 = param_2 + 0x3a;
        iVar7 = (*(code *)param_2[0x43])
                          (plVar1,0,*(longlong *)param_2[0x28],*(undefined4 *)param_2[0x29]);
        local_88 = iVar7;
        if ((iVar7 != 0) ||
           (iVar7 = (*(code *)param_2[0x43])
                              (plVar1,1,*(undefined8 *)param_2[0x33],*(undefined4 *)param_2[0x34]),
           iVar12 = local_50, local_88 = iVar7, iVar7 != 0))
        goto UNWIND_INFO_1403195e4_UnwindCodes_38__UnwindOpCode;
        lVar10 = (longlong)local_50 * 4;
        lVar9 = (longlong)local_50 * 8;
        iVar7 = (*(code *)param_2[0x43])
                          (plVar1,2,*(undefined8 *)(param_2[0x28] + lVar9),
                           *(undefined4 *)(param_2[0x29] + lVar10));
        local_88 = iVar7;
        if (iVar7 != 0) goto UNWIND_INFO_1403195e4_UnwindCodes_38__UnwindOpCode;
        iVar7 = (*(code *)param_2[0x43])
                          (plVar1,3,*(undefined8 *)(lVar9 + param_2[0x33]),
                           *(undefined4 *)(param_2[0x34] + lVar10));
        local_88 = iVar7;
        if ((((iVar7 != 0) ||
             (iVar7 = (*(code *)param_2[0x2d])
                                (plVar14,iVar12,*(undefined8 *)param_2[0x3e],
                                 *(undefined4 *)param_2[0x3f]), local_88 = iVar7, iVar7 != 0)) ||
            (iVar7 = (*(code *)param_2[0x38])
                               (param_2 + 0x2f,iVar12,*(undefined8 *)(param_2[0x3e] + 8),
                                *(undefined4 *)(param_2[0x3f] + 4)), local_88 = iVar7, iVar7 != 0))
           || ((iVar7 = (*(code *)param_2[0x2d])
                                  (plVar14,0,*(undefined8 *)(param_2[0x3e] + 0x10),
                                   *(undefined4 *)(param_2[0x3f] + 8)), local_88 = iVar7, iVar7 != 0
               || (iVar7 = (*(code *)param_2[0x38])
                                     (param_2 + 0x2f,0,*(undefined8 *)(param_2[0x3e] + 0x18),
                                      *(undefined4 *)(param_2[0x3f] + 0xc)), iVar7 != 0))))
        goto UNWIND_INFO_1403195e4_UnwindCodes_38__UnwindOpCode;
        break;
      }
    } while (lVar10 != 8);
    goto UNWIND_INFO_1403195e4_UnwindCodes_40__OffsetInProlog;
  }
  local_50 = 0xde1f78b;
  local_4c = 0xe;
  iVar7 = (*(code *)param_2[0x43])
                    (param_2 + 0x3a,0,*(undefined8 *)param_2[0x28],*(undefined4 *)param_2[0x29]);
  local_88 = iVar7;
  if (((iVar7 == 0) &&
      (iVar7 = (*(code *)param_2[0x43])
                         (param_2 + 0x3a,1,*(undefined8 *)param_2[0x33],*(undefined4 *)param_2[0x34]
                         ), local_88 = iVar7, iVar7 == 0)) &&
     ((iVar7 = (*(code *)param_2[0x2d])(plVar14,0,".notdef",8), local_88 = iVar7, iVar7 == 0 &&
      (((iVar7 = (*(code *)param_2[0x38])(param_2 + 0x2f,0,&local_50,5), local_88 = iVar7,
        iVar7 == 0 &&
        (iVar7 = (*(code *)param_2[0x2d])
                           (plVar14,iVar12,*(undefined8 *)param_2[0x3e],*(undefined4 *)param_2[0x3f]
                           ), local_88 = iVar7, iVar7 == 0)) &&
       (iVar7 = (*(code *)param_2[0x38])
                          (param_2 + 0x2f,iVar12,*(undefined8 *)(param_2[0x3e] + 8),
                           *(undefined4 *)(param_2[0x3f] + 4)), iVar7 == 0)))))) {
    *(int *)(param_2 + 0x23) = (int)param_2[0x23] + 1;
    goto UNWIND_INFO_1403195e4_UnwindCodes_40__OffsetInProlog;
  }
UNWIND_INFO_1403195e4_UnwindCodes_38__UnwindOpCode:
  *(int *)(param_2 + 3) = iVar7;
UNWIND_INFO_1403195e4_UnwindCodes_40__OffsetInProlog:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_a8);
  return;
}

