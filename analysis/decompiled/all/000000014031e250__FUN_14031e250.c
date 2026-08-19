// Function: FUN_14031e250
// Addr: 14031e250
// Size: 728 bytes


void FUN_14031e250(uint *param_1,uint param_2,longlong param_3,int param_4,uint param_5,char param_6
                  )

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  ulonglong uVar14;
  int local_res18 [4];
  
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar14 = (ulonglong)param_2;
  local_res18[0] = 0;
  if (param_5 < 3) {
    param_1[1] = param_5;
    if (param_5 == 0) {
      if (param_2 < 0xe6) {
        uVar10 = FUN_1402f80c0(uVar2,2,0,uVar14,0,local_res18);
        *(undefined8 *)(param_1 + 2) = uVar10;
        if (local_res18[0] == 0) {
          puVar12 = &DAT_14043ce50;
          goto LAB_14031e4ef;
        }
        goto LAB_14031e522;
      }
    }
    else if (param_5 == 1) {
      if (param_2 < 0xa7) {
        uVar10 = FUN_1402f80c0(uVar2,2,0,uVar14,0,local_res18);
        *(undefined8 *)(param_1 + 2) = uVar10;
        if (local_res18[0] == 0) {
          puVar12 = &UNK_14043d020;
          goto LAB_14031e4ef;
        }
        goto LAB_14031e522;
      }
    }
    else if ((param_5 == 2) && (param_2 < 0x58)) {
      uVar10 = FUN_1402f80c0(uVar2,2,0,uVar14,0,local_res18);
      *(undefined8 *)(param_1 + 2) = uVar10;
      if (local_res18[0] == 0) {
        puVar12 = &DAT_14043d170;
LAB_14031e4ef:
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(uVar10,puVar12,uVar14 * 2);
      }
      goto LAB_14031e522;
    }
LAB_14031e4b1:
    local_res18[0] = 3;
  }
  else {
    param_1[1] = param_4 + param_5;
    local_res18[0] = func_0x0001402f5d20(param_3);
    if (local_res18[0] != 0) goto LAB_14031e522;
    bVar5 = func_0x0001402f5670(param_3,local_res18);
    *param_1 = (uint)bVar5;
    if (local_res18[0] != 0) goto LAB_14031e522;
    puVar9 = (undefined2 *)FUN_1402f80c0(uVar2,2,0,param_2,0,local_res18);
    *(undefined2 **)(param_1 + 2) = puVar9;
    if (local_res18[0] != 0) goto LAB_14031e522;
    *puVar9 = 0;
    uVar13 = *param_1;
    if (uVar13 == 0) {
      if (param_2 != 0) {
        local_res18[0] = FUN_1402f50b0(param_3,param_2 * 2 + -2);
        if (local_res18[0] != 0) goto LAB_14031e522;
        uVar14 = 1;
        if (1 < param_2) {
          do {
            lVar3 = *(longlong *)(param_1 + 2);
            lVar1 = uVar14 * 2;
            uVar8 = FUN_1402f5370(param_3);
            uVar13 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar13;
            *(undefined2 *)(lVar3 + lVar1) = uVar8;
          } while (uVar13 < param_2);
        }
        func_0x0001402f51d0(param_3);
      }
    }
    else {
      if ((uVar13 != 1) && (uVar13 != 2)) goto LAB_14031e4b1;
      uVar14 = 1;
      if (1 < param_2) {
        while (uVar6 = FUN_1402f5b90(param_3,local_res18), local_res18[0] == 0) {
          if (*param_1 == 2) {
            uVar7 = FUN_1402f5b90();
            if (local_res18[0] != 0) break;
            uVar13 = (uint)uVar7;
          }
          else {
            bVar5 = func_0x0001402f5670(param_3,local_res18);
            if (local_res18[0] != 0) break;
            uVar13 = (uint)bVar5;
          }
          uVar11 = 0;
          uVar4 = 0xffff - uVar6;
          if ((uint)uVar6 < 0xffff - uVar13 || (uint)uVar6 == 0xffff - uVar13) {
            uVar4 = uVar13;
          }
          for (; uVar11 <= uVar4; uVar11 = uVar11 + 1) {
            uVar13 = (int)uVar14 + 1;
            *(ushort *)(*(longlong *)(param_1 + 2) + uVar14 * 2) = uVar6;
            if (param_2 <= uVar13) goto LAB_14031e4fd;
            uVar6 = uVar6 + 1;
            uVar14 = (ulonglong)uVar13;
          }
        }
        goto LAB_14031e522;
      }
    }
LAB_14031e4fd:
    if (param_6 != '\0') {
      local_res18[0] = FUN_14031e100(param_1,param_2,uVar2);
    }
    if (local_res18[0] == 0) {
      return;
    }
  }
LAB_14031e522:
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(uVar2,*(undefined8 *)(param_1 + 2));
}

