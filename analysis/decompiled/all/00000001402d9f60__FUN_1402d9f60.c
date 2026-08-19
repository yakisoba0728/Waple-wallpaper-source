// Function: FUN_1402d9f60
// Addr: 1402d9f60
// Size: 52 bytes


void FUN_1402d9f60(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 *puStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  longlong local_40;
  longlong *aplStack_38 [2];
  char cStack_28;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1404dc110 ^ (ulonglong)auStack_88;
  func_0x0001402bf8e8(&local_40,param_3);
  if (0x100 < param_1 + 1U) {
    if (*(short *)(*aplStack_38[0] + (ulonglong)(param_1 >> 8 & 0xff) * 2) < 0) {
      uVar2 = 2;
      uStack_46 = 0;
      uStack_48 = (char)((uint)param_1 >> 8);
      uStack_47 = (char)param_1;
    }
    else {
      uVar2 = 1;
      uStack_47 = 0;
      uStack_48 = (char)param_1;
    }
    uStack_58 = 1;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_60 = *(undefined4 *)((longlong)aplStack_38[0] + 0xc);
    puStack_68 = &uStack_20;
    iVar1 = FUN_1402e58d8(aplStack_38,1,&uStack_48,uVar2);
    if (iVar1 == 0) {
      if (cStack_28 != '\0') {
        *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
      }
      goto code_r0x0001402da043;
    }
  }
  if (cStack_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
code_r0x0001402da043:
  func_0x0001402ed2f0(local_18 ^ (ulonglong)auStack_88);
  return;
}

