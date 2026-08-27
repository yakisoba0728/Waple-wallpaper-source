// Function: FUN_140377740
// Addr: 140377740
// Size: 1026 bytes


undefined8 FUN_140377740(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 local_res20 [8];
  undefined8 *local_58 [2];
  undefined1 local_48 [8];
  byte *local_40;
  int local_38;
  undefined4 local_34;
  undefined *local_30;
  byte *local_28;
  
  switch(param_4) {
  case 1:
    iVar5 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar5 == 1) {
      puVar1 = (undefined8 *)
               ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
      puVar1[1] = &LAB_14036c900;
      puVar1[2] = &LAB_14036c900;
    }
    else {
      if (iVar5 != 2) {
        return param_2;
      }
      puVar1 = (undefined8 *)
               ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
      *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
      puVar1[1] = &LAB_14036c910;
      puVar1[2] = &LAB_14036c910;
    }
    goto LAB_1403777c7;
  case 2:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar1 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar1[1] = &LAB_14036c8d0;
    puVar1[2] = &LAB_14036c8d0;
    goto LAB_1403777c7;
  case 3:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar1 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar1[1] = &LAB_14036c840;
    puVar1[2] = &LAB_14036c840;
LAB_1403777c7:
    *puVar1 = param_1;
    puVar1[3] = &LAB_14036e160;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    uVar2 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
    if (uVar2 == 0) {
      param_1 = (byte *)&DAT_14045dd10;
      puVar1 = puVar1 + 5;
    }
    else {
      puVar1 = puVar1 + 5;
      param_1 = param_1 + uVar2;
    }
LAB_140377b29:
    FUN_14036f580(param_1,puVar1);
    break;
  case 4:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar4 = (undefined8 *)0x0;
    if ((*(uint *)(param_3 + 0x10) < 8) &&
       (puVar4 = (undefined8 *)_malloc_base(0x218), puVar4 != (undefined8 *)0x0)) {
      for (puVar1 = puVar4; puVar1 != puVar4 + 0x40; puVar1 = (undefined8 *)((longlong)puVar1 + 2))
      {
        *(undefined2 *)puVar1 = 0xffff;
      }
      local_40 = param_1 + 6;
      puVar4[0x40] = 0;
      puVar4[0x41] = 0;
      puVar4[0x42] = 0;
      local_38 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
      local_34 = 0;
      local_30 = &DAT_140470550;
      local_58[0] = puVar4;
      local_28 = param_1;
      FUN_140361e00(local_58,local_48);
    }
    puVar3 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar3[1] = &LAB_14036c890;
    puVar1 = puVar3 + 5;
    puVar3[4] = puVar4;
    puVar3[2] = &LAB_14036c890;
    puVar3[3] = &LAB_14036e160;
    *puVar3 = param_1;
    *puVar1 = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    uVar2 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
    if (uVar2 == 0) {
      param_1 = (byte *)&DAT_14045dd10;
    }
    else {
LAB_140377b23:
      param_1 = param_1 + uVar2;
    }
    goto LAB_140377b29;
  case 5:
    FUN_140377000(param_1,local_res20);
    break;
  case 6:
    FUN_140376e90(param_1,local_res20);
    break;
  case 7:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      iVar5 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
      uVar2 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar2 == 0) {
        FUN_140377740(&DAT_14045dd10,local_res20,param_3,iVar5);
      }
      else {
        FUN_140377740(param_1 + uVar2,local_res20,param_3,iVar5);
      }
    }
    break;
  case 8:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
    puVar4 = (undefined8 *)
             ((ulonglong)*(uint *)(param_3 + 0x10) * 0x40 + *(longlong *)(param_3 + 8));
    *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) + 1;
    puVar4[1] = &LAB_14036c950;
    puVar1 = puVar4 + 5;
    *puVar4 = param_1;
    puVar4[2] = &LAB_14036c950;
    puVar4[3] = &LAB_14036e160;
    puVar4[4] = 0;
    *puVar1 = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    uVar2 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
    if (uVar2 != 0) goto LAB_140377b23;
    param_1 = (byte *)&DAT_14045dd10;
    goto LAB_140377b29;
  }
  return param_2;
}

