// Function: FUN_1403784a0
// Addr: 1403784a0
// Size: 355 bytes


undefined8 FUN_1403784a0(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 auStackX_20 [8];
  undefined4 local_c8;
  int iStack_c4;
  byte *pbStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  byte *pbStack_a0;
  undefined1 auStack_98 [16];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  switch(param_4) {
  case 1:
    iVar8 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar8 == 1) {
      func_0x0001403b3ff0(param_1,param_3);
    }
    else if (iVar8 == 2) {
      func_0x0001403b41b0(param_1,param_3);
    }
    break;
  case 2:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      FUN_1403b3a60(param_1,param_3);
    }
    break;
  case 3:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      FUN_1403b3a60(param_1,param_3);
    }
    break;
  case 4:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      pbVar7 = (byte *)&DAT_14045dde0;
      uVar6 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
      if (uVar6 == 0) {
        pbVar5 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar5 = param_1 + uVar6;
      }
      cVar4 = func_0x00014036fab0(pbVar5,*(undefined8 *)(param_3 + 0x18));
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
          func_0x0001403e3ba0(&pbStack_c0,pbVar7);
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
        puStack_38 = &UNK_14047061f;
        auStack_98._4_4_ = 0;
        auStack_98._0_4_ = (uint)bVar2 * 0x100 + (uint)bVar1;
        puStack_30 = &UNK_140470620;
        auStack_98._8_4_ = 0x4047061f;
        auStack_98._12_4_ = 1;
        uStack_28._0_4_ = SUB84(param_1,0);
        uStack_28._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
        local_b8 = CONCAT44((int)((ulonglong)local_b8 >> 0x20),(undefined4)local_b8);
        uStack_88 = 0x40470620;
        uStack_84 = 1;
        uStack_80 = (undefined4)uStack_28;
        uStack_7c = uStack_28._4_4_;
        uStack_a8 = local_c8;
        iStack_a4 = iStack_c4;
        pbStack_c0 = pbVar7;
        pbStack_a0 = param_1 + 6;
        uStack_28 = param_1;
        FUN_140362060(local_78,&local_c8);
      }
    }
    break;
  case 5:
    FUN_140377ef0(param_1,auStackX_20);
    break;
  case 6:
    func_0x000140377c40(param_1,auStackX_20);
    break;
  case 7:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      iVar8 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      uVar6 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar6 == 0) {
        FUN_1403784a0(&DAT_14045dde0,auStackX_20,param_3,iVar8);
      }
      else {
        FUN_1403784a0(param_1 + uVar6,auStackX_20,param_3,iVar8);
      }
    }
    break;
  case 8:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      func_0x0001403b4370(param_1,param_3);
    }
  }
  return param_2;
}

