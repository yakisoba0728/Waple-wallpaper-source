// Function: FUN_14040d850
// Addr: 14040d850
// Size: 1804 bytes


void FUN_14040d850(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  short sVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  byte *local_res8;
  longlong local_res10;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  longlong local_60;
  int local_58 [8];
  
  if ((((char)param_1[4] == '\0') ||
      (iVar17 = (uint)*(byte *)(param_4 + 5) + (uint)*(byte *)(param_4 + 4) * 0x100,
      iVar17 == 0xffff)) ||
     (uVar11 = (ulonglong)*(uint *)(param_2 + 0x5c),
     *(uint *)(param_2 + 0x60) <= *(uint *)(param_2 + 0x5c)))
  goto UNWIND_INFO_14040dfab_UnwindCodes_7__OffsetInProlog;
  lVar18 = *(longlong *)(param_2 + 0x80);
  iVar9 = (int)param_1[2];
  local_res10 = param_2;
  local_60 = lVar18;
  if (iVar9 == 0) {
    pbVar12 = (byte *)(param_1[3] + (ulonglong)(uint)(iVar17 * 2) * 2);
    cVar8 = FUN_14036f190(*param_1 + 0x28,pbVar12,2);
    if (cVar8 == '\0') {
      return;
    }
    bVar1 = pbVar12[2];
    local_70 = 0;
    local_68 = 0;
    local_6c = 0;
    local_64 = 0;
    lVar6 = *(longlong *)(*param_1 + 0x10);
    local_res8 = (byte *)CONCAT71(local_res8._1_7_,pbVar12[3]);
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x90) + 0x10);
    uVar5 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(*param_1 + 0x20) + 0x70) +
             (ulonglong)*(uint *)((longlong)param_1 + 0x24) * 0x14);
    if (lVar7 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(lVar7 + 0x80);
    }
    iVar17 = (**(code **)(*(longlong *)(lVar6 + 0x90) + 0xa0))
                       (lVar6,*(undefined8 *)(lVar6 + 0x98),uVar5,
                        (uint)*pbVar12 * 0x100 + (uint)pbVar12[1],&local_70,&local_68,uVar14);
    if (iVar17 == 0) {
      return;
    }
    if (*(float *)(lVar6 + 0x4c) != 0.0) {
      fVar19 = (float)FUN_14041a690((float)local_68 * *(float *)(lVar6 + 0x4c) + DAT_140492790);
      local_70 = (int)(fVar19 + (float)local_70);
    }
    if (*(char *)(lVar6 + 0x3c) == '\0') {
      iVar17 = -*(int *)(lVar6 + 0x40);
      if (-1 < *(int *)(lVar6 + 0x28)) {
        iVar17 = *(int *)(lVar6 + 0x40);
      }
      local_70 = local_70 + iVar17;
    }
    local_74 = 0;
    local_78 = 0;
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x90) + 0x10);
    if (lVar7 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(lVar7 + 0x48);
    }
    iVar17 = (**(code **)(*(longlong *)(lVar6 + 0x90) + 0x68))
                       (lVar6,*(undefined8 *)(lVar6 + 0x98),uVar5,&local_78,&local_74,uVar14);
    if (iVar17 == 0) {
      local_74 = 0;
      local_78 = 0;
      lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x90) + 0x10);
      if (lVar7 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(lVar7 + 0x50);
      }
      iVar10 = (**(code **)(*(longlong *)(lVar6 + 0x90) + 0x70))
                         (lVar6,*(undefined8 *)(lVar6 + 0x98),uVar5,&local_78,&local_74,uVar14);
      iVar17 = local_78;
      iVar9 = local_74;
      if (iVar10 != 0) {
        if (*(char *)(lVar6 + 0x3c) == '\0') {
          iVar17 = -*(int *)(lVar6 + 0x40);
          if (-1 < *(int *)(lVar6 + 0x28)) {
            iVar17 = *(int *)(lVar6 + 0x40);
          }
          local_78 = local_78 + iVar17;
          iVar17 = -*(int *)(lVar6 + 0x44);
          if (-1 < *(int *)(lVar6 + 0x2c)) {
            iVar17 = *(int *)(lVar6 + 0x44);
          }
          local_74 = local_74 + iVar17;
        }
        FUN_1403d06a0(lVar6,uVar5,&local_60,local_58);
        iVar17 = local_78 - (int)local_60;
        iVar9 = local_74 - local_58[0];
      }
    }
    else {
      iVar17 = local_78;
      iVar9 = local_74;
      if (*(char *)(lVar6 + 0x3c) == '\0') {
        iVar17 = -*(int *)(lVar6 + 0x40);
        if (-1 < *(int *)(lVar6 + 0x28)) {
          iVar17 = *(int *)(lVar6 + 0x40);
        }
        iVar9 = -*(int *)(lVar6 + 0x44);
        if (-1 < *(int *)(lVar6 + 0x2c)) {
          iVar9 = *(int *)(lVar6 + 0x44);
        }
        iVar17 = local_78 + iVar17;
        iVar9 = local_74 + iVar9;
      }
    }
    local_68 = local_68 - iVar9;
    local_70 = local_70 - iVar17;
    uVar14 = 0;
    lVar6 = *(longlong *)(*param_1 + 0x20);
    lVar7 = *(longlong *)(*param_1 + 0x10);
    uVar5 = *(undefined4 *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14)
    ;
    local_64 = 0;
    local_6c = 0;
    lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x90) + 0x10);
    if (lVar6 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(lVar6 + 0x80);
    }
    iVar17 = (**(code **)(*(longlong *)(lVar7 + 0x90) + 0xa0))
                       (lVar7,*(undefined8 *)(lVar7 + 0x98),uVar5,
                        (uint)bVar1 * 0x100 + (uint)(byte)local_res8,&local_6c,&local_64,uVar15);
    if (iVar17 == 0) {
      return;
    }
    if (*(float *)(lVar7 + 0x4c) != 0.0) {
      fVar19 = (float)FUN_14041a690((float)local_64 * *(float *)(lVar7 + 0x4c) + DAT_140492790);
      local_6c = (int)(fVar19 + (float)local_6c);
    }
    if (*(char *)(lVar7 + 0x3c) == '\0') {
      iVar17 = -*(int *)(lVar7 + 0x40);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        iVar17 = *(int *)(lVar7 + 0x40);
      }
      local_6c = local_6c + iVar17;
    }
    local_res8 = (byte *)((ulonglong)local_res8 & 0xffffffff00000000);
    local_78 = 0;
    lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x90) + 0x10);
    uVar15 = uVar14;
    if (lVar6 != 0) {
      uVar15 = *(undefined8 *)(lVar6 + 0x48);
    }
    iVar17 = (**(code **)(*(longlong *)(lVar7 + 0x90) + 0x68))
                       (lVar7,*(undefined8 *)(lVar7 + 0x98),uVar5,&local_78,&local_res8,uVar15);
    if (iVar17 == 0) {
      local_res8 = (byte *)((ulonglong)local_res8 & 0xffffffff00000000);
      local_78 = 0;
      lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x90) + 0x10);
      if (lVar6 != 0) {
        uVar14 = *(undefined8 *)(lVar6 + 0x50);
      }
      iVar17 = (**(code **)(*(longlong *)(lVar7 + 0x90) + 0x70))
                         (lVar7,*(undefined8 *)(lVar7 + 0x98),uVar5,&local_78,&local_res8,uVar14);
      if (iVar17 == 0) goto LAB_14040df61;
      if (*(char *)(lVar7 + 0x3c) == '\0') {
        iVar17 = -*(int *)(lVar7 + 0x40);
        if (-1 < *(int *)(lVar7 + 0x28)) {
          iVar17 = *(int *)(lVar7 + 0x40);
        }
        local_78 = local_78 + iVar17;
        iVar17 = -*(int *)(lVar7 + 0x44);
        if (-1 < *(int *)(lVar7 + 0x2c)) {
          iVar17 = *(int *)(lVar7 + 0x44);
        }
        local_res8 = (byte *)CONCAT44(local_res8._4_4_,(int)local_res8 + iVar17);
      }
      FUN_1403d06a0(lVar7,uVar5,local_58,&local_60);
      local_78 = local_78 - local_58[0];
      local_res8._0_4_ = (int)local_res8 - (int)local_60;
    }
    else if (*(char *)(lVar7 + 0x3c) == '\0') {
      iVar17 = -*(int *)(lVar7 + 0x40);
      if (-1 < *(int *)(lVar7 + 0x28)) {
        iVar17 = *(int *)(lVar7 + 0x40);
      }
      local_78 = local_78 + iVar17;
      iVar17 = -*(int *)(lVar7 + 0x44);
      if (-1 < *(int *)(lVar7 + 0x2c)) {
        iVar17 = *(int *)(lVar7 + 0x44);
      }
      local_res8._0_4_ = (int)local_res8 + iVar17;
    }
    else {
LAB_14040df61:
    }
    *(int *)(lVar18 + 8 + uVar11 * 0x14) = local_70 - (local_6c - local_78);
    local_68 = local_68 - (local_64 - (int)local_res8);
    local_res10 = param_2;
UNWIND_INFO_14040df7b_ExceptionHandler_3:
    *(int *)(lVar18 + 0xc + uVar11 * 0x14) = local_68;
    param_2 = local_res10;
  }
  else {
    if (iVar9 == 1) {
      pbVar12 = (byte *)(param_1[3] + (ulonglong)(uint)(iVar17 * 2) * 2);
      local_res8 = pbVar12;
      cVar8 = FUN_14036f190(*param_1 + 0x28,pbVar12,2);
      if (cVar8 == '\0') {
        return;
      }
      lVar18 = *param_1;
      lVar6 = *(longlong *)(lVar18 + 0x20);
      lVar7 = *(longlong *)(lVar6 + 0x70);
      pbVar12 = (byte *)func_0x0001403c65c0(*(undefined8 *)(lVar18 + 0x68),
                                            *(undefined4 *)
                                             (lVar7 + (ulonglong)*(uint *)((longlong)param_1 + 0x24)
                                                      * 0x14),
                                            (uint)*pbVar12 * 0x100 + (uint)pbVar12[1],
                                            *(undefined4 *)(lVar18 + 0x60));
      pbVar13 = (byte *)func_0x0001403c65c0(*(undefined8 *)(lVar18 + 0x68),
                                            *(undefined4 *)
                                             (lVar7 + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14),
                                            (uint)local_res8[3] + (uint)local_res8[2] * 0x100,
                                            *(undefined4 *)(lVar18 + 0x60));
      lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x58);
      *(int *)(local_60 + 8 + uVar11 * 0x14) =
           (int)((ulonglong)
                 ((short)((ushort)pbVar12[1] + (ushort)*pbVar12 * 0x100) * lVar18 + 0x8000) >> 0x10)
           - (int)((ulonglong)
                   ((short)((ushort)*pbVar13 * 0x100 + (ushort)pbVar13[1]) * lVar18 + 0x8000) >>
                  0x10);
      lVar18 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x60);
      local_68 = (int)((ulonglong)
                       ((short)((ushort)pbVar12[3] + (ushort)pbVar12[2] * 0x100) * lVar18 + 0x8000)
                      >> 0x10) -
                 (int)((ulonglong)
                       ((short)((ushort)pbVar13[3] + (ushort)pbVar13[2] * 0x100) * lVar18 + 0x8000)
                      >> 0x10);
      lVar18 = local_60;
      goto UNWIND_INFO_14040df7b_ExceptionHandler_3;
    }
    if (iVar9 == 2) {
      pbVar12 = (byte *)(param_1[3] + (ulonglong)(uint)(iVar17 * 4) * 2);
      cVar8 = FUN_14036f190(*param_1 + 0x28,pbVar12,4,2);
      if (cVar8 == '\0') {
        return;
      }
      bVar1 = pbVar12[2];
      bVar2 = pbVar12[6];
      bVar3 = pbVar12[3];
      bVar4 = pbVar12[7];
      lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x58);
      *(int *)(lVar18 + 8 + uVar11 * 0x14) =
           (int)((ulonglong)
                 ((short)((ushort)pbVar12[1] + (ushort)*pbVar12 * 0x100) * lVar6 + 0x8000) >> 0x10)
           - (int)((ulonglong)
                   ((short)((ushort)pbVar12[5] + (ushort)pbVar12[4] * 0x100) * lVar6 + 0x8000) >>
                  0x10);
      lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x60);
      *(int *)(lVar18 + 0xc + uVar11 * 0x14) =
           (int)((ulonglong)((short)((ushort)bVar1 * 0x100 + (ushort)bVar3) * lVar6 + 0x8000) >>
                0x10) -
           (int)((ulonglong)((short)((ushort)bVar2 * 0x100 + (ushort)bVar4) * lVar6 + 0x8000) >>
                0x10);
    }
  }
  *(undefined1 *)(lVar18 + 0x12 + uVar11 * 0x14) = 1;
  sVar16 = *(short *)((longlong)param_1 + 0x24) - *(short *)(param_2 + 0x5c);
  *(short *)(lVar18 + 0x10 + uVar11 * 0x14) = sVar16;
  if (*(char *)(*param_1 + 0x8c) != '\0') {
    *(short *)(lVar18 + 0x10 + uVar11 * 0x14) = -sVar16;
  }
  *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 8;
UNWIND_INFO_14040dfab_UnwindCodes_7__OffsetInProlog:
  if ((*(byte *)(param_4 + 2) & 0x80) != 0) {
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x5c);
  }
  return;
}

