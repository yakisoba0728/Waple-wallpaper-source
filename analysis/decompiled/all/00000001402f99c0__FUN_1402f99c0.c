// Function: FUN_1402f99c0
// Addr: 1402f99c0
// Size: 433 bytes


uint FUN_1402f99c0(longlong *param_1,longlong param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  bool bVar9;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  
  lVar3 = *param_1;
  uVar2 = *(uint *)(param_2 + 0xc);
  uVar4 = param_3 & 0xffff;
  if ((int)param_3 < 1) {
    uVar4 = param_3;
  }
  local_res20[0] = param_4;
  uVar5 = FUN_1402f7b10(param_2,uVar4,local_res18,local_res10,local_res20);
  if (uVar5 == 0) {
    uVar5 = *(uint *)(param_2 + 8);
    if ((uVar5 < local_res18[0]) || (uVar5 - local_res18[0] < local_res10[0])) {
      return 8;
    }
    uVar1 = uVar2 + local_res18[0];
    if (*(code **)(param_2 + 0x20) == (code *)0x0) {
      bVar9 = uVar5 < uVar1;
    }
    else {
      iVar6 = (**(code **)(param_2 + 0x20))(param_2,uVar1,0,0);
      bVar9 = iVar6 != 0;
    }
    uVar5 = -(uint)bVar9 & 0x55;
    if (uVar5 == 0) {
      *(uint *)(param_2 + 0xc) = uVar1;
      if ((int)local_res10[0] < 1) {
        lVar7 = 0;
        if ((int)local_res10[0] < 0) {
          uVar5 = 6;
          goto LAB_1402f9b30;
        }
      }
      else {
        lVar7 = (**(code **)(lVar3 + 8))(lVar3,local_res10[0]);
        uVar5 = 0x40;
        if (lVar7 == 0) goto LAB_1402f9b30;
      }
      uVar5 = FUN_1402f54b0(param_2,lVar7,local_res10[0]);
      if (uVar5 == 0) {
        pcVar8 = "type1";
        if ((char)local_res20[0] != '\0') {
          pcVar8 = "t1cid";
        }
        uVar5 = 0;
        if ((int)uVar4 < 0) {
          uVar5 = uVar4;
        }
        uVar5 = FUN_1402f9b80(param_1,lVar7,local_res10[0],uVar5,pcVar8,param_6);
      }
      else if (lVar7 != 0) {
        (**(code **)(lVar3 + 0x10))(lVar3,lVar7);
      }
    }
  }
LAB_1402f9b30:
  uVar4 = uVar5;
  if ((char)uVar5 == '\x02') {
    if (*(code **)(param_2 + 0x20) == (code *)0x0) {
      bVar9 = *(uint *)(param_2 + 8) < uVar2;
    }
    else {
      iVar6 = (**(code **)(param_2 + 0x20))(param_2,uVar2,0,0);
      bVar9 = iVar6 != 0;
    }
    uVar4 = -(uint)bVar9 & 0x55;
    if ((-(uint)bVar9 & 0x55) == 0) {
      *(uint *)(param_2 + 0xc) = uVar2;
      uVar4 = uVar5;
    }
  }
  return uVar4;
}

