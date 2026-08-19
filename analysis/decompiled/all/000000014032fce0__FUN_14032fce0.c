// Function: FUN_14032fce0
// Addr: 14032fce0
// Size: 181 bytes


void FUN_14032fce0(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  byte *local_res8;
  
  uVar6 = 0;
  uVar7 = 0;
  pbVar4 = (byte *)param_1[2];
  pbVar3 = (byte *)*param_1;
  for (local_res8 = pbVar3; uVar5 = 0, local_res8 < pbVar4; local_res8 = local_res8 + 1) {
    bVar2 = *local_res8;
    if ((0x20 < bVar2) || ((0x100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
      if (bVar2 != 0x25) {
        if ((bVar2 + 0xa5 & 0xfd) == 0) {
          local_res8 = local_res8 + 1;
          uVar6 = uVar7;
          goto UNWIND_INFO_14032fe21_UnwindCodes_10__OffsetInProlog;
        }
        if (bVar2 == 0x7b) {
          uVar6 = FUN_14033c520(&local_res8,pbVar4);
          goto UNWIND_INFO_14032fe21_UnwindCodes_10__OffsetInProlog;
        }
        if (bVar2 == 0x28) {
          uVar6 = FUN_14033c3e0(&local_res8,pbVar4);
          goto UNWIND_INFO_14032fe21_UnwindCodes_10__OffsetInProlog;
        }
        if (bVar2 == 0x3c) {
          if ((local_res8 + 1 < pbVar4) && (local_res8[1] == 0x3c)) {
            local_res8 = local_res8 + 2;
            uVar6 = 0;
          }
          else {
            uVar6 = func_0x00014033c6a0(&local_res8,pbVar4);
          }
          goto UNWIND_INFO_14032fe21_UnwindCodes_10__OffsetInProlog;
        }
        if (bVar2 == 0x3e) {
          pbVar1 = local_res8 + 1;
          if ((pbVar1 < pbVar4) && (*pbVar1 == 0x3e)) {
            local_res8 = local_res8 + 2;
            uVar6 = uVar7;
          }
          else {
            local_res8 = pbVar1;
            uVar6 = 3;
          }
          goto UNWIND_INFO_14032fe21_UnwindCodes_10__OffsetInProlog;
        }
        if (bVar2 == 0x2f) {
          local_res8 = local_res8 + 1;
        }
        bVar9 = local_res8 == pbVar4;
        bVar8 = false;
        if (pbVar4 <= local_res8) goto code_r0x00014032fe4c;
        goto code_r0x00014032fe10;
      }
      do {
        if ((*local_res8 == 0xd) || (*local_res8 == 10)) break;
        local_res8 = local_res8 + 1;
      } while (local_res8 < pbVar4);
    }
  }
  goto UNWIND_INFO_14032fe21_UnwindCodes_18__OffsetInProlog;
UNWIND_INFO_14032fe21_UnwindCodes_10__OffsetInProlog:
  bVar8 = local_res8 < pbVar4;
  bVar9 = local_res8 == pbVar4;
  if (!bVar8) goto code_r0x00014032fe4c;
  uVar5 = uVar6;
  if (local_res8 == pbVar3) {
    uVar5 = 3;
  }
  goto UNWIND_INFO_14032fe21_UnwindCodes_18__OffsetInProlog;
  while (local_res8 = local_res8 + 1, local_res8 < pbVar4) {
code_r0x00014032fe10:
    bVar2 = *local_res8;
    if (((bVar2 < 0x3d) &&
        (uVar6 = uVar7, (0x1000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
       (((byte)(bVar2 - 0x3e) < 0x40 &&
        (uVar6 = uVar7, (0xa0000000a0000001U >> ((ulonglong)(byte)(bVar2 - 0x3e) & 0x3f) & 1) != 0))
       )) goto UNWIND_INFO_14032fe21_UnwindCodes_10__OffsetInProlog;
  }
UNWIND_INFO_14032fe21_UnwindCodes_18__OffsetInProlog:
  uVar6 = uVar5;
  bVar8 = local_res8 < pbVar4;
  bVar9 = local_res8 == pbVar4;
code_r0x00014032fe4c:
  if (!bVar8 && !bVar9) {
    local_res8 = pbVar4;
  }
  *(undefined4 *)(param_1 + 3) = uVar6;
  *param_1 = local_res8;
  return;
}

