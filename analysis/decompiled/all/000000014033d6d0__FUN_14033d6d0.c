// Function: FUN_14033d6d0
// Addr: 14033d6d0
// Size: 104 bytes


ulonglong FUN_14033d6d0(longlong param_1,longlong param_2,ulonglong param_3,int param_4,
                       undefined4 param_5,undefined8 param_6)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int *local_res8;
  
  puVar1 = (uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) != 0) {
    *(undefined4 *)
     (*(longlong *)(param_1 + 0x18) + -8 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18) = param_5;
  }
  uVar4 = FUN_14033e400(puVar1,param_6,&local_res8);
  if ((int)uVar4 == 0) {
    if (*puVar1 == 0) {
      uVar3 = FUN_14033e400(puVar1,param_6,&local_res8);
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
    }
    else {
      local_res8 = (int *)(*(longlong *)(param_1 + 0x18) + -0x18 + (ulonglong)*puVar1 * 0x18);
    }
    uVar3 = FUN_14033e380(local_res8,param_4,param_6);
    uVar4 = (ulonglong)uVar3;
    if (uVar3 == 0) {
      *local_res8 = param_4;
      pbVar5 = *(byte **)(local_res8 + 2);
      iVar9 = 0x80;
      iVar7 = 0x80 >> ((byte)param_3 & 7);
      pbVar8 = (byte *)(((param_3 & 0xffffffff) >> 3) + param_2);
      for (; param_4 != 0; param_4 = param_4 + -1) {
        bVar6 = *pbVar5 & ~(byte)iVar9;
        bVar2 = bVar6 | (byte)iVar9;
        if ((*pbVar8 & (byte)iVar7) == 0) {
          bVar2 = bVar6;
        }
        iVar7 = iVar7 >> 1;
        *pbVar5 = bVar2;
        if (iVar7 == 0) {
          iVar7 = 0x80;
          pbVar8 = pbVar8 + 1;
        }
        iVar9 = iVar9 >> 1;
        if (iVar9 == 0) {
          iVar9 = 0x80;
          pbVar5 = pbVar5 + 1;
        }
      }
    }
  }
  return uVar4;
}

