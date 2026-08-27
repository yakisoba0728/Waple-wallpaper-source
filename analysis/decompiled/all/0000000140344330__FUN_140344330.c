// Function: FUN_140344330
// Addr: 140344330
// Size: 890 bytes


int FUN_140344330(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint local_res8 [2];
  undefined4 local_res18 [4];
  
  plVar1 = (longlong *)(param_1 + 0x468);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x43424c43,param_2,local_res8);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x474) = 2;
  }
  else {
    iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x45424c43,param_2,local_res8);
    if ((iVar5 == 0) ||
       (iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x626c6f63,param_2,local_res8), iVar5 == 0))
    {
      *(undefined4 *)(param_1 + 0x474) = 1;
    }
    else {
      iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x73626978,param_2,local_res8);
      if (iVar5 != 0) goto LAB_14034467c;
      *(undefined4 *)(param_1 + 0x474) = 3;
    }
  }
  if (7 < local_res8[0]) {
    uVar6 = FUN_1402f54a0(param_2);
    iVar5 = *(int *)(param_1 + 0x474);
    if ((iVar5 == 1) || (iVar5 == 2)) {
      iVar5 = FUN_1402f5150(param_2,local_res8[0],plVar1);
      if (iVar5 != 0) goto LAB_14034467c;
      puVar2 = (undefined1 *)*plVar1;
      *(uint *)(param_1 + 0x470) = local_res8[0];
      sVar3 = CONCAT11(*puVar2,puVar2[1]);
      if ((((sVar3 != 2) &&
           (uVar7 = (CONCAT21(sVar3,puVar2[2]) & 0xff) << 8 | (uint)(byte)puVar2[3], uVar7 != 0x200)
           ) && (sVar3 != 3)) && (uVar7 != 0x300)) {
        iVar5 = 2;
        goto LAB_14034467c;
      }
      uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar2[4],puVar2[5]),puVar2[6]),puVar2[7]);
      if (uVar7 < 0x10000) {
        if (local_res8[0] < uVar7 * 0x30 + 8) {
          uVar7 = (local_res8[0] - 8) / 0x30;
        }
        *(uint *)(param_1 + 0x478) = uVar7;
        goto LAB_1403445d7;
      }
    }
    else {
      if (iVar5 != 3) {
LAB_1403445d7:
        *(undefined8 *)(param_1 + 0x4d0) = 0;
        if (*(int *)(param_1 + 0x474) == 3) {
          *(undefined4 *)(param_1 + 0x4d0) = uVar6;
          *(uint *)(param_1 + 0x4d4) = local_res8[0];
        }
        else if ((*(int *)(param_1 + 0x474) != 0) &&
                (((iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x43424454,param_2,local_res18),
                  iVar5 == 0 ||
                  (iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x45424454,param_2,local_res18),
                  iVar5 == 0)) ||
                 (iVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x62646174,param_2,local_res18),
                 iVar5 == 0)))) {
          uVar6 = FUN_1402f54a0(param_2);
          *(undefined4 *)(param_1 + 0x4d0) = uVar6;
          *(undefined4 *)(param_1 + 0x4d4) = local_res18[0];
        }
        if (*(int *)(param_1 + 0x4d4) == 0) {
          *(undefined4 *)(param_1 + 0x478) = 0;
        }
        return 0;
      }
      iVar5 = FUN_1402f4fe0(param_2,8);
      if (iVar5 != 0) goto LAB_14034467c;
      sVar3 = FUN_1402f52a0(param_2);
      sVar4 = FUN_1402f52a0(param_2);
      uVar7 = FUN_1402f5200(param_2);
      FUN_1402f5100(param_2);
      if (sVar3 == 0) {
        iVar5 = 2;
        goto LAB_14034467c;
      }
      if (((sVar4 - 1U & 0xfffd) == 0) && (uVar7 < 0x10000)) {
        if (sVar4 == 3) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40000;
        }
        if (local_res8[0] < uVar7 * 4 + 8) {
          uVar7 = local_res8[0] - 8 >> 2;
        }
        iVar5 = FUN_1402f54a0(param_2);
        iVar5 = FUN_1402f5c50(param_2,iVar5 + -8);
        if (iVar5 == 0) {
          iVar5 = uVar7 * 4 + 8;
          *(int *)(param_1 + 0x470) = iVar5;
          iVar5 = FUN_1402f5150(param_2,iVar5,plVar1);
          if (iVar5 == 0) {
            *(uint *)(param_1 + 0x478) = uVar7;
            goto LAB_1403445d7;
          }
        }
        goto LAB_14034467c;
      }
    }
  }
  iVar5 = 3;
LAB_14034467c:
  if (*plVar1 != 0) {
    FUN_1402f5c00(param_2,plVar1);
  }
  *(undefined8 *)(param_1 + 0x470) = 0;
  return iVar5;
}

