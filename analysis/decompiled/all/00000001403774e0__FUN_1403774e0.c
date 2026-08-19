// Function: FUN_1403774e0
// Addr: 1403774e0
// Size: 774 bytes


undefined8 FUN_1403774e0(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res20 [8];
  
  switch(param_4) {
  case 1:
    iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar3 == 1) {
      puVar2 = (undefined8 *)
               ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
      puVar2[1] = &LAB_14036ca30;
      puVar2[2] = &LAB_14036ca30;
    }
    else {
      if (iVar3 != 2) {
        return param_2;
      }
      puVar2 = (undefined8 *)
               ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
      puVar2[1] = &LAB_14036ca40;
      puVar2[2] = &LAB_14036ca40;
    }
    break;
  case 2:
    FUN_140377330(param_1,local_res20);
    return param_2;
  case 3:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar2[1] = &DAT_14036ca10;
    puVar2[2] = &DAT_14036ca10;
    break;
  case 4:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar2[1] = &DAT_14036c970;
    puVar2[2] = &DAT_14036c970;
    break;
  case 5:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar2[1] = &DAT_14036c980;
    puVar2[2] = &DAT_14036c980;
    break;
  case 6:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar2[1] = &DAT_14036c990;
    puVar2[2] = &DAT_14036c990;
    break;
  case 7:
    FUN_1403770d0(param_1,local_res20);
    return param_2;
  case 8:
    FUN_140376f60(param_1,local_res20);
    return param_2;
  case 9:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      iVar3 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      uVar1 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar1 == 0) {
        FUN_1403774e0(&DAT_14045dde0,local_res20,param_3,iVar3);
        return param_2;
      }
      FUN_1403774e0(param_1 + uVar1,local_res20,param_3,iVar3);
    }
  default:
    return param_2;
  }
  *puVar2 = param_1;
  puVar2[3] = &LAB_14036e230;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  uVar1 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
  if (uVar1 == 0) {
    func_0x00014036f650(&DAT_14045dde0,puVar2 + 5);
    return param_2;
  }
  func_0x00014036f650(param_1 + uVar1,puVar2 + 5);
  return param_2;
}

