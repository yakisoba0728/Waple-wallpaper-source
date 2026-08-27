// Function: FUN_140342cf0
// Addr: 140342cf0
// Size: 346 bytes


int FUN_140342cf0(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  longlong lVar5;
  ushort uVar6;
  int local_res8 [2];
  
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  lVar5 = 0;
  local_res8[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x67617370,param_2,0);
  if ((local_res8[0] == 0) && (local_res8[0] = FUN_1402f4fe0(param_2,4), local_res8[0] == 0)) {
    uVar3 = FUN_1402f52a0(param_2);
    *(undefined2 *)(param_1 + 0x300) = uVar3;
    uVar4 = FUN_1402f52a0(param_2);
    FUN_1402f5100(param_2);
    if (*(ushort *)(param_1 + 0x300) < 2) {
      lVar5 = FUN_1402f7ff0(uVar2,4,0,uVar4,0,local_res8);
      if ((local_res8[0] == 0) &&
         (local_res8[0] = FUN_1402f4fe0(param_2,(uint)uVar4 * 4), local_res8[0] == 0)) {
        uVar6 = 0;
        if (uVar4 != 0) {
          do {
            puVar1 = (undefined2 *)(lVar5 + (ulonglong)uVar6 * 4);
            uVar3 = FUN_1402f52a0(param_2);
            *puVar1 = uVar3;
            uVar3 = FUN_1402f52a0(param_2);
            uVar6 = uVar6 + 1;
            puVar1[1] = uVar3;
          } while (uVar6 < uVar4);
        }
        *(longlong *)(param_1 + 0x308) = lVar5;
        lVar5 = 0;
        *(ushort *)(param_1 + 0x302) = uVar4;
        FUN_1402f5100(param_2);
      }
    }
    else {
      local_res8[0] = 8;
      *(undefined2 *)(param_1 + 0x302) = 0;
    }
  }
  FUN_1402f7f90(uVar2,lVar5);
  return local_res8[0];
}

