// Function: FUN_140329d00
// Addr: 140329d00
// Size: 1748 bytes


void FUN_140329d00(uint *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  undefined1 auStack_108 [32];
  int local_e8;
  uint local_e4;
  short local_e0;
  ushort local_de;
  uint local_dc;
  short local_d8;
  ushort local_d6;
  ushort local_d4;
  undefined1 local_d0 [4];
  uint local_cc;
  int local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined1 local_b8 [4];
  int local_b4;
  int local_b0;
  short local_ac;
  ushort local_aa;
  short local_a8;
  short local_a6;
  int local_a4;
  undefined1 local_98 [8];
  int local_90;
  int local_88;
  undefined1 local_80 [12];
  ushort local_74;
  ushort local_72;
  undefined1 local_70 [12];
  ushort local_64;
  ushort local_62;
  ushort local_54;
  ushort local_52;
  int local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_108;
  local_c0 = *(undefined8 *)(param_1 + 0x26);
  lVar2 = *(longlong *)(param_1 + 0x28);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  uVar9 = -param_2;
  if ((int)-param_2 < 0) {
    uVar9 = param_2;
  }
  local_e8 = func_0x0001402f5d20(lVar2,0);
  if ((local_e8 != 0) || (iVar5 = FUN_1402f56e0(lVar2,&DAT_14043fad8,&local_e0), iVar5 != 0)) {
    iVar5 = 2;
    goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
  }
  local_e8 = 2;
  if (local_e0 != 0x5a4d) goto LAB_14032a3de;
  local_e8 = func_0x0001402f5d20(lVar2,local_de);
  iVar5 = local_e8;
  if ((local_e8 != 0) || (iVar5 = FUN_1402f56e0(lVar2,&DAT_14043faf0,&local_d8), iVar5 != 0))
  goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
  uVar11 = uVar9 & 0xffff;
  uVar9 = uVar9 & 0xffff;
  local_e8 = 2;
  local_dc = uVar9;
  if (local_d8 == 0x454e) {
    local_e8 = func_0x0001402f5d20(lVar2,(uint)local_d6 + (uint)local_de);
    iVar5 = local_e8;
    if ((local_e8 == 0) &&
       (local_e8 = FUN_1402f50b0(lVar2,(uint)local_d4 - (uint)local_d6), iVar5 = local_e8,
       local_e8 == 0)) {
      uVar3 = FUN_1402f53a0(lVar2,0);
      local_e4 = CONCAT22(local_e4._2_2_,uVar3);
      if (uVar3 < 0x11) {
        sVar4 = FUN_1402f53a0(lVar2);
        while (sVar4 != 0) {
          uVar3 = FUN_1402f53a0(lVar2);
          if (sVar4 == -0x7ff8) {
            iVar6 = func_0x0001402f5570(lVar2);
            iVar5 = *(int *)(lVar2 + 0x38);
            iVar1 = *(int *)(lVar2 + 0x40);
            func_0x0001402f51d0(lVar2);
            uVar11 = local_dc;
            if (((uVar3 == 0) || (iVar6 = (iVar5 - iVar1) + 4 + iVar6, iVar6 == 0)) ||
               (uVar9 = (uint)uVar3, *(uint *)(lVar2 + 8) < uVar9 * 0x76))
            goto UNWIND_INFO_14032a3c0_UnwindCodes_1__UnwindOpCode;
            *param_1 = uVar9;
            iVar5 = local_e8;
            if ((int)param_2 < 0) goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
            if (uVar9 <= local_dc) goto LAB_14032a3d3;
            uVar7 = func_0x0001402f7f60(local_c0,0xb8,&local_e8);
            *(undefined8 *)(param_1 + 0x36) = uVar7;
            iVar5 = local_e8;
            if (local_e8 != 0) goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
            local_e8 = func_0x0001402f5d20(lVar2,iVar6 + uVar11 * 0xc);
            if ((local_e8 != 0) ||
               (local_e8 = FUN_1402f50b0(lVar2,0xc), uVar9 = local_e4, local_e8 != 0))
            goto LAB_14032a3da;
            piVar8 = *(int **)(param_1 + 0x36);
            uVar3 = FUN_1402f53a0(lVar2);
            *piVar8 = (uint)uVar3 << ((byte)uVar9 & 0x1f);
            uVar3 = FUN_1402f53a0(lVar2);
            *(uint *)(*(longlong *)(param_1 + 0x36) + 0xa8) = (uint)uVar3 << ((byte)uVar9 & 0x1f);
            *(longlong *)(lVar2 + 0x38) = *(longlong *)(lVar2 + 0x38) + 8;
            func_0x0001402f51d0(lVar2);
            local_e8 = FUN_14032a4f0(*(undefined8 *)(param_1 + 0x36),lVar2);
            goto UNWIND_INFO_14032a3c0;
          }
          *(ulonglong *)(lVar2 + 0x38) = *(longlong *)(lVar2 + 0x38) + (ulonglong)uVar3 * 0xc + 4;
          sVar4 = FUN_1402f53a0(lVar2);
        }
        func_0x0001402f51d0(lVar2);
        iVar5 = 3;
      }
      else {
        local_e8 = 3;
        func_0x0001402f51d0();
        iVar5 = local_e8;
      }
    }
    goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
  }
  if (local_d8 != 0x4550) goto UNWIND_INFO_14032a3c0;
  local_e8 = func_0x0001402f5d20(lVar2,local_de);
  iVar5 = local_e8;
  if ((local_e8 != 0) ||
     (local_e8 = FUN_1402f56e0(lVar2,&DAT_14043fb08,&local_b0), iVar5 = local_e8, local_e8 != 0))
  goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
  if ((local_b0 == 0x4550) && (((local_ac == 0x14c && (local_a8 == 0xe0)) && (local_a6 == 0x10b))))
  {
    uVar3 = 0;
    *param_1 = 0;
    if (local_aa != 0) {
      do {
        local_e8 = 0;
        local_e8 = FUN_1402f56e0(lVar2,&DAT_14043fb40,local_98);
        iVar5 = local_e8;
        if (local_e8 != 0) goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
        if (local_a4 == local_90) {
          local_e8 = func_0x0001402f5d20(lVar2,local_88);
          iVar5 = local_e8;
          if ((local_e8 != 0) ||
             (local_e8 = FUN_1402f56e0(lVar2,&DAT_14043fb60), iVar1 = local_88, iVar5 = local_e8,
             local_e8 != 0)) goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
          local_e4 = 0;
          if ((uint)local_52 + (uint)local_54 == 0) goto UNWIND_INFO_14032a3c0;
          local_e8 = 0;
          goto code_r0x00014032a110;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_aa);
      iVar5 = 3;
      goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
    }
  }
  goto UNWIND_INFO_14032a3c0_UnwindCodes_1__UnwindOpCode;
  while( true ) {
    if (-1 < (int)local_c4) goto UNWIND_INFO_14032a3c0_UnwindCodes_1__UnwindOpCode;
    local_c4 = local_c4 & 0x7fffffff;
    iVar6 = local_88 + local_c4;
    local_e8 = func_0x0001402f5d20(lVar2,iVar6);
    iVar5 = local_e8;
    if ((local_e8 != 0) ||
       (local_e8 = FUN_1402f56e0(lVar2,&DAT_14043fb60,local_70), iVar5 = local_e8, local_e8 != 0))
    goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
    uVar3 = 0;
    if ((uint)local_62 + (uint)local_64 != 0) {
      local_dc = iVar6 + 0x10;
      local_e8 = 0;
      do {
        local_e8 = func_0x0001402f5d20(lVar2,local_dc + (uint)uVar3 * 8);
        iVar5 = local_e8;
        if ((local_e8 != 0) ||
           (local_e8 = FUN_1402f56e0(lVar2,&DAT_14043fb80,local_d0), iVar5 = local_e8, local_e8 != 0
           )) goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
        if (-1 < (int)local_cc) goto UNWIND_INFO_14032a3c0_UnwindCodes_1__UnwindOpCode;
        local_cc = local_cc & 0x7fffffff;
        iVar6 = local_88 + local_cc;
        local_e8 = func_0x0001402f5d20(lVar2,iVar6);
        iVar5 = local_e8;
        if ((local_e8 != 0) ||
           (local_e8 = FUN_1402f56e0(lVar2,&DAT_14043fb60,local_80), iVar5 = local_e8, local_e8 != 0
           )) goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
        uVar10 = 0;
        if ((uint)local_72 + (uint)local_74 != 0) {
          local_e8 = 0;
          do {
            local_e8 = func_0x0001402f5d20(lVar2,iVar6 + 0x10 + (uint)uVar10 * 8);
            iVar5 = local_e8;
            if ((local_e8 != 0) ||
               (local_e8 = FUN_1402f56e0(lVar2,&DAT_14043fb80,local_b8), iVar5 = local_e8,
               local_e8 != 0)) goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
            if ((local_cc & 0x80000000) != 0)
            goto UNWIND_INFO_14032a3c0_UnwindCodes_1__UnwindOpCode;
            if (local_c8 == 8) {
              local_e8 = func_0x0001402f5d20(lVar2,local_b4 + iVar1);
              iVar5 = local_e8;
              if ((local_e8 != 0) ||
                 (local_e8 = FUN_1402f56e0(lVar2,&DAT_14043fb90,&local_50), iVar5 = local_e8,
                 local_e8 != 0)) goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
              if (uVar9 == *param_1) {
                piVar8 = (int *)func_0x0001402f7f60(local_c0,0xb8,&local_e8);
                *(int **)(param_1 + 0x36) = piVar8;
                iVar5 = local_e8;
                if (local_e8 != 0) goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
                *piVar8 = (local_50 - local_90) + local_88;
                *(undefined4 *)(*(longlong *)(param_1 + 0x36) + 0xa8) = local_4c;
                local_e8 = FUN_14032a4f0(*(undefined8 *)(param_1 + 0x36),lVar2);
                if (local_e8 != 0) goto LAB_14032a3da;
              }
              *param_1 = *param_1 + 1;
            }
            uVar10 = uVar10 + 1;
          } while ((uint)uVar10 < (uint)local_72 + (uint)local_74);
        }
        uVar3 = uVar3 + 1;
      } while ((uint)uVar3 < (uint)local_62 + (uint)local_64);
    }
    uVar3 = (short)local_e4 + 1;
    local_e4 = CONCAT22((short)(local_e4 >> 0x10),uVar3);
    if ((uint)local_52 + (uint)local_54 <= (uint)uVar3) break;
code_r0x00014032a110:
    local_e8 = func_0x0001402f5d20(lVar2,iVar1 + 0x10 + (local_e4 & 0xffff) * 8);
    iVar5 = local_e8;
    if ((local_e8 != 0) ||
       (local_e8 = FUN_1402f56e0(lVar2,&DAT_14043fb80,&local_c8), iVar5 = local_e8, local_e8 != 0))
    goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
  }
UNWIND_INFO_14032a3c0:
  if (*param_1 != 0) {
    if ((int)*param_1 <= (int)uVar11) {
LAB_14032a3d3:
      iVar5 = 6;
      goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
    }
LAB_14032a3da:
    iVar5 = local_e8;
    if (local_e8 == 0) goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
LAB_14032a3de:
    lVar2 = *(longlong *)(param_1 + 0x36);
    iVar5 = local_e8;
    if (lVar2 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x26);
      if (*(longlong *)(lVar2 + 0xa0) != 0) {
        FUN_1402f5cd0(*(undefined8 *)(param_1 + 0x28));
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402f8060(uVar7,*(undefined8 *)(lVar2 + 0xb0));
    }
    goto UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog;
  }
UNWIND_INFO_14032a3c0_UnwindCodes_1__UnwindOpCode:
  iVar5 = 3;
UNWIND_INFO_14032a413_UnwindCodes_23__OffsetInProlog:
  func_0x0001402ed2f0(local_40 ^ (ulonglong)auStack_108,iVar5);
  return;
}

