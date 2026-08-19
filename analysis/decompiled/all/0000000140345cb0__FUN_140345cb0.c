// Function: FUN_140345cb0
// Addr: 140345cb0
// Size: 137 bytes


void FUN_140345cb0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined2 local_1b;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_1404dc110 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  lVar2 = *(longlong *)(param_1 + 0x4e0);
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x20) != 0)) && (*(longlong *)(lVar2 + 0x80) != 0)) {
    if (*(char *)(param_2 + 1) == '\0') {
      FUN_140349ce0();
    }
    else {
      *(uint *)((longlong)param_3 + 0x11) = CONCAT13(uStack_1c,uStack_20._1_3_);
      *(undefined2 *)((longlong)param_3 + 0x15) = local_1b;
      *(undefined8 *)(param_3 + 2) = uVar1;
      *(char *)((longlong)param_3 + 0x17) = local_19;
      *param_3 = 0xc;
      *(undefined1 *)(param_3 + 4) = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      iStack_28 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x1c) + 0x20 >> 6;
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x20) + 0x20;
      iVar4 = iVar3 >> 6;
      uStack_1c = (undefined1)iVar4;
      local_1b = (undefined2)((uint)iVar4 >> 8);
      local_19 = (char)(iVar3 >> 0x1e);
      if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x18) & 1) != 0) {
        func_0x0001402f1f00(*(longlong *)(param_1 + 0xd0),&iStack_28);
        iVar4 = CONCAT13(local_19,CONCAT21(local_1b,uStack_1c));
      }
      param_3[6] = iStack_28;
      param_3[7] = uStack_24;
      param_3[9] = uStack_20;
      param_3[10] = iVar4;
      if ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0x18) & 2) == 0) {
        param_3[8] = 0;
        param_3[0xb] = 0;
      }
      else {
        param_3[8] = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10) << 10;
        param_3[0xb] = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x14) << 10;
      }
    }
  }
  func_0x0001402ed2f0(local_18 ^ (ulonglong)auStack_48);
  return;
}

