// Function: FUN_14033d200
// Addr: 14033d200
// Size: 435 bytes


undefined8 FUN_14033d200(longlong param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  byte *pbVar4;
  int iVar5;
  uint *local_res8 [4];
  
  iVar5 = *(int *)(param_1 + 0x20);
  local_res8[0] = *(uint **)(param_1 + 0x28);
  if (iVar5 != 0) {
    do {
      uVar1 = *local_res8[0];
      if ((((param_2 < uVar1) &&
           (((byte)(0x80 >> ((byte)param_2 & 7)) &
            *(byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(local_res8[0] + 2))) != 0)) ||
          ((param_3 < uVar1 &&
           (((byte)(0x80 >> ((byte)param_3 & 7)) &
            *(byte *)((ulonglong)(param_3 >> 3) + *(longlong *)(local_res8[0] + 2))) != 0)))) ||
         ((param_4 < uVar1 &&
          (((byte)(0x80 >> ((byte)param_4 & 7)) &
           *(byte *)((ulonglong)(param_4 >> 3) + *(longlong *)(local_res8[0] + 2))) != 0))))
      goto LAB_14033d301;
      local_res8[0] = local_res8[0] + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar3 = FUN_14033e330(param_1 + 0x20,param_5,local_res8);
  if ((int)uVar3 == 0) {
LAB_14033d301:
    puVar2 = local_res8[0];
    if (*local_res8[0] <= param_2) {
      uVar3 = FUN_14033e2b0(local_res8[0],param_2 + 1,param_5);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *puVar2 = param_2 + 1;
    }
    pbVar4 = (byte *)((ulonglong)(param_2 >> 3) + *(longlong *)(puVar2 + 2));
    *pbVar4 = *pbVar4 | (byte)(0x80 >> ((byte)param_2 & 7));
    if (*puVar2 <= param_3) {
      uVar3 = FUN_14033e2b0(puVar2,param_3 + 1,param_5);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *puVar2 = param_3 + 1;
    }
    pbVar4 = (byte *)((ulonglong)(param_3 >> 3) + *(longlong *)(puVar2 + 2));
    *pbVar4 = *pbVar4 | (byte)(0x80 >> ((byte)param_3 & 7));
    uVar3 = 0;
    if (*puVar2 <= param_4) {
      uVar3 = FUN_14033e2b0(puVar2,param_4 + 1,param_5);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      *puVar2 = param_4 + 1;
    }
    pbVar4 = (byte *)((ulonglong)(param_4 >> 3) + *(longlong *)(puVar2 + 2));
    *pbVar4 = *pbVar4 | (byte)(0x80 >> ((byte)param_4 & 7));
  }
  return uVar3;
}

