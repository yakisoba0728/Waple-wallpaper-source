// Function: FUN_1403467c0
// Addr: 1403467c0
// Size: 372 bytes


int FUN_1403467c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  ushort uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int local_res8 [2];
  uint local_res18 [2];
  undefined1 *local_res20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  local_res20 = (undefined1 *)0x0;
  puVar2 = (undefined2 *)0x0;
  local_res8[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x53564720,param_2,local_res18);
  if (local_res8[0] != 0) goto LAB_140346900;
  if (0x17 < local_res18[0]) {
    local_res8[0] = FUN_1402f5150(param_2,local_res18[0],&local_res20);
    if (local_res8[0] != 0) goto LAB_140346900;
    puVar2 = (undefined2 *)FUN_1402f7e90(uVar1,0x20,local_res8);
    if (local_res8[0] != 0) goto LAB_140346900;
    *puVar2 = CONCAT11(*local_res20,local_res20[1]);
    uVar5 = CONCAT31(CONCAT21(CONCAT11(local_res20[2],local_res20[3]),local_res20[4]),local_res20[5]
                    );
    if ((9 < uVar5) && (uVar5 <= local_res18[0] - 0xe)) {
      puVar4 = local_res20 + uVar5;
      *(undefined1 **)(puVar2 + 4) = puVar4;
      uVar3 = CONCAT11(*puVar4,puVar4[1]);
      puVar2[1] = uVar3;
      if (((uint)uVar3 + (uint)uVar3 * 2) * 4 + 2 + uVar5 <= local_res18[0]) {
        *(undefined1 **)(puVar2 + 8) = local_res20;
        *(uint *)(puVar2 + 0xc) = local_res18[0];
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x10000;
        *(undefined2 **)(param_1 + 0x4e8) = puVar2;
        return 0;
      }
    }
  }
  local_res8[0] = 8;
LAB_140346900:
  FUN_1402f5c00(param_2,&local_res20);
  FUN_1402f7f90(uVar1,puVar2);
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  return local_res8[0];
}

