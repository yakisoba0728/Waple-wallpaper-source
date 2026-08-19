// Function: FUN_1402b1730
// Addr: 1402b1730
// Size: 73 bytes


void FUN_1402b1730(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
                  undefined2 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [32];
  undefined2 uStack_a8;
  undefined1 *puStack_a0;
  longlong lStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined2 uStack_76;
  byte abStack_74 [12];
  undefined1 auStack_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1404dc110 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_4 + 0x18);
  local_78 = 0x25;
  puVar7 = (undefined2 *)&local_77;
  if ((uVar1 & 0x20) != 0) {
    local_77 = 0x2b;
    puVar7 = &uStack_76;
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)puVar7 = 0x23;
    puVar7 = (undefined2 *)((longlong)puVar7 + 1);
  }
  *puVar7 = 0x3649;
  *(undefined1 *)(puVar7 + 1) = 0x34;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar5 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar5 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar5 = 100;
  }
  *(byte *)((longlong)puVar7 + 3) = bVar5;
  *(undefined1 *)(puVar7 + 2) = 0;
  iVar6 = FUN_140016370(auStack_68,0x40,&local_78,param_6);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  if (iVar6 < 0) {
    *param_2 = *param_3;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
  }
  else {
    lStack_98 = (longlong)iVar6;
    puStack_a0 = auStack_68;
    uStack_a8 = param_5;
    uStack_88 = *param_3;
    uStack_84 = uVar2;
    uStack_80 = uVar3;
    uStack_7c = uVar4;
    FUN_1402a4d20(param_1,param_2,&uStack_88,param_4);
  }
  func_0x0001402ed2f0(local_28 ^ (ulonglong)auStack_c8);
  return;
}

