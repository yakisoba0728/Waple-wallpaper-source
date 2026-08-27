// Function: FUN_14032ae80
// Addr: 14032ae80
// Size: 447 bytes


ulonglong FUN_14032ae80(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_res10 [6];
  
  uVar3 = 0;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      if (*(int *)(*(longlong *)(param_2 + 0x140) + uVar3 * 0x10) == param_3) {
        uVar6 = *(uint *)(*(longlong *)(param_2 + 0x140) + 0xc + uVar3 * 0x10);
        if ((uVar6 < *(uint *)(param_1 + 0xc)) ||
           (local_res10[0] = FUN_1402f5c90(param_1,uVar6 - *(uint *)(param_1 + 0xc)),
           local_res10[0] != 0)) {
          return 0x53;
        }
        uVar6 = FUN_1402f5970(param_1,local_res10);
        if (local_res10[0] != 0) {
          return (ulonglong)local_res10[0];
        }
        if ((uVar6 & 0xfffffe00) != 0) {
          return 0;
        }
        puVar4 = &DAT_14043fec0;
        if ((uVar6 & 4) == 0) {
          puVar4 = &DAT_14043fe88;
        }
        uVar3 = FUN_1402f5610(param_1,puVar4,param_2 + 0x148);
        local_res10[0] = (uint)uVar3;
        if (local_res10[0] != 0) {
          return uVar3;
        }
        iVar1 = *(int *)(param_2 + 0x150);
        iVar2 = -iVar1;
        if (-iVar1 < 0) {
          iVar2 = iVar1;
        }
        if (0x7fff < iVar2) {
          *(uint *)(param_2 + 0x150) = (iVar1 >> 0x1f & 0xffff0002U) + 0x7fff;
        }
        iVar1 = *(int *)(param_2 + 0x154);
        iVar2 = -iVar1;
        if (-iVar1 < 0) {
          iVar2 = iVar1;
        }
        if (0x7fff < iVar2) {
          *(uint *)(param_2 + 0x154) = (iVar1 >> 0x1f & 0xffff0002U) + 0x7fff;
        }
        uVar5 = uVar6 & 0xff;
        uVar3 = FUN_14032b530(param_1,uVar5,param_2 + 0x15c);
        local_res10[0] = (uint)uVar3;
        if (local_res10[0] != 0) {
          return uVar3;
        }
        uVar3 = FUN_14032b530(param_1,uVar5,param_2 + 0x16c);
        local_res10[0] = (uint)uVar3;
        if (local_res10[0] != 0) {
          return uVar3;
        }
        if ((uVar6 & 0xffffff00) == 0x100) {
          uVar3 = FUN_14032b530(param_1,uVar5,param_2 + 0x17c);
          local_res10[0] = (uint)uVar3;
          if (local_res10[0] != 0) {
            return uVar3;
          }
          uVar3 = FUN_14032b530(param_1,uVar5,param_2 + 0x18c);
          return uVar3;
        }
        *(undefined8 *)(param_2 + 0x17c) = *(undefined8 *)(param_2 + 0x15c);
        *(undefined8 *)(param_2 + 0x184) = *(undefined8 *)(param_2 + 0x164);
        *(undefined8 *)(param_2 + 0x18c) = *(undefined8 *)(param_2 + 0x16c);
        *(undefined8 *)(param_2 + 0x194) = *(undefined8 *)(param_2 + 0x174);
        return uVar3;
      }
      uVar6 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_2 + 0x13c));
  }
  return 3;
}

