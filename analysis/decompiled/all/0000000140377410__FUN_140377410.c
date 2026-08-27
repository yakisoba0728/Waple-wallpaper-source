// Function: FUN_140377410
// Addr: 140377410
// Size: 774 bytes


undefined8 FUN_140377410(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

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
      puVar2[1] = &LAB_14036c960;
      puVar2[2] = &LAB_14036c960;
    }
    else {
      if (iVar3 != 2) {
        return param_2;
      }
      puVar2 = (undefined8 *)
               ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
      puVar2[1] = &LAB_14036c970;
      puVar2[2] = &LAB_14036c970;
    }
    break;
  case 2:
    FUN_140377260(param_1,local_res20);
    return param_2;
  case 3:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar2[1] = &LAB_14036c940;
    puVar2[2] = &LAB_14036c940;
    break;
  case 4:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar2[1] = &LAB_14036c8a0;
    puVar2[2] = &LAB_14036c8a0;
    break;
  case 5:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar2[1] = &LAB_14036c8b0;
    puVar2[2] = &LAB_14036c8b0;
    break;
  case 6:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar2[1] = &LAB_14036c8c0;
    puVar2[2] = &LAB_14036c8c0;
    break;
  case 7:
    FUN_140377000(param_1,local_res20);
    return param_2;
  case 8:
    FUN_140376e90(param_1,local_res20);
    return param_2;
  case 9:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      iVar3 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      uVar1 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar1 == 0) {
        FUN_140377410(&DAT_14045dd10,local_res20,param_3,iVar3);
        return param_2;
      }
      FUN_140377410(param_1 + uVar1,local_res20,param_3,iVar3);
    }
  default:
    return param_2;
  }
  *puVar2 = param_1;
  puVar2[3] = &LAB_14036e160;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  uVar1 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
  if (uVar1 == 0) {
    FUN_14036f580(&DAT_14045dd10,puVar2 + 5);
    return param_2;
  }
  FUN_14036f580(param_1 + uVar1,puVar2 + 5);
  return param_2;
}

