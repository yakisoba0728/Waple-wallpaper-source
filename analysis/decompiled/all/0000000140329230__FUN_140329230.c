// Function: FUN_140329230
// Addr: 140329230
// Size: 436 bytes


uint FUN_140329230(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = (longlong)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  local_res8[0] = FUN_1402f5c50(param_2,0);
  if ((local_res8[0] == 0) && (local_res8[0] = FUN_1402f4fe0(param_2,0x11), local_res8[0] == 0)) {
    plVar2 = (longlong *)param_2[7];
    if ((*plVar2 != 0x7572542d53502125) ||
       ((plVar2[1] != 0x6e6f466570795465 || ((char)plVar2[2] != 't')))) {
      local_res8[0] = 2;
    }
    FUN_1402f5100(param_2);
    if (local_res8[0] != 0) goto LAB_1403293aa;
    local_res8[0] = FUN_1402f5c50(param_2);
    if (local_res8[0] == 0) {
      uVar1 = (undefined4)param_2[1];
      if (param_2[4] == 0) {
        param_1[0x13] = (ulonglong)*(uint *)((longlong)param_2 + 0xc) + *param_2;
        *(undefined4 *)(param_1 + 0x14) = uVar1;
        *(undefined1 *)((longlong)param_1 + 0xa4) = 1;
        local_res8[0] = FUN_1402f5c90(param_2);
        if (local_res8[0] == 0) {
LAB_140329384:
          lVar3 = param_1[0x13];
          param_1[1] = lVar3;
          param_1[2] = (int)param_1[0x14] + lVar3;
          *param_1 = lVar3;
        }
      }
      else {
        lVar3 = FUN_1402f7fa0(param_3,uVar1,local_res8);
        param_1[0x13] = lVar3;
        if (local_res8[0] != 0) goto LAB_1403293aa;
        local_res8[0] = FUN_1402f54b0(param_2,lVar3,uVar1);
        if (local_res8[0] == 0) {
          *(undefined4 *)(param_1 + 0x14) = uVar1;
          goto LAB_140329384;
        }
      }
    }
  }
  if (local_res8[0] == 0) {
    return 0;
  }
LAB_1403293aa:
  if (*(char *)((longlong)param_1 + 0xa4) == '\0') {
    FUN_1402f7f90(param_3,param_1[0x13]);
    param_1[0x13] = 0;
  }
  return local_res8[0];
}

