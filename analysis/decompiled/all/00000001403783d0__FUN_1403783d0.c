// Function: FUN_1403783d0
// Addr: 1403783d0
// Size: 758 bytes


undefined8 FUN_1403783d0(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 local_res20 [8];
  undefined4 local_c8;
  int iStack_c4;
  byte *pbStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  byte *pbStack_a0;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined *puStack_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  switch(param_4) {
  case 1:
    iVar8 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar8 == 1) {
      FUN_1403b3f20(param_1,param_3);
    }
    else if (iVar8 == 2) {
      FUN_1403b40e0(param_1,param_3);
    }
    break;
  case 2:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      FUN_1403b3990(param_1,param_3);
    }
    break;
  case 3:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      FUN_1403b3990(param_1,param_3);
    }
    break;
  case 4:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      pbVar7 = (byte *)&DAT_14045dd10;
      uVar6 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
      if (uVar6 == 0) {
        pbVar5 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar5 = param_1 + uVar6;
      }
      cVar4 = FUN_14036f9e0(pbVar5,*(undefined8 *)(param_3 + 0x18));
      if (cVar4 != '\0') {
        uVar6 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
        if (uVar6 != 0) {
          pbVar7 = param_1 + uVar6;
        }
        bVar1 = param_1[5];
        bVar2 = param_1[4];
        iStack_c4 = (uint)pbVar7[1] + (uint)*pbVar7 * 0x100;
        pbStack_c0 = (byte *)0x0;
        local_c8 = 0;
        uVar3 = local_c8;
        local_c8 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_78[0] = param_3;
        if (iStack_c4 == 1) {
          local_b8._0_4_ = 0;
        }
        else if (iStack_c4 == 2) {
          FUN_1403e3ad0(&pbStack_c0,pbVar7);
          pbVar7 = pbStack_c0;
        }
        else {
          local_b8._0_4_ = 0;
          pbVar7 = (byte *)0x0;
          local_c8 = uVar3;
        }
        uStack_54 = uStack_b0._4_4_;
        uStack_50 = local_c8;
        iStack_4c = iStack_c4;
        puStack_38 = &DAT_14047054f;
        local_98._4_4_ = 0;
        local_98._0_4_ = (uint)bVar2 * 0x100 + (uint)bVar1;
        local_30 = &DAT_140470550;
        local_98._8_4_ = 0x4047054f;
        local_98._12_4_ = 1;
        uStack_28._0_4_ = SUB84(param_1,0);
        uStack_28._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
        local_b8 = CONCAT44((int)((ulonglong)local_b8 >> 0x20),(undefined4)local_b8);
        local_88 = 0x40470550;
        uStack_84 = 1;
        uStack_80 = (undefined4)uStack_28;
        uStack_7c = uStack_28._4_4_;
        local_a8 = local_c8;
        iStack_a4 = iStack_c4;
        pbStack_c0 = pbVar7;
        pbStack_a0 = param_1 + 6;
        uStack_28 = param_1;
        FUN_140361f90(local_78,&local_c8);
      }
    }
    break;
  case 5:
    FUN_140377e20(param_1,local_res20);
    break;
  case 6:
    FUN_140377b70(param_1,local_res20);
    break;
  case 7:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      iVar8 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      uVar6 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar6 == 0) {
        FUN_1403783d0(&DAT_14045dd10,local_res20,param_3,iVar8);
      }
      else {
        FUN_1403783d0(param_1 + uVar6,local_res20,param_3,iVar8);
      }
    }
    break;
  case 8:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      FUN_1403b42a0(param_1,param_3);
    }
  }
  return param_2;
}

