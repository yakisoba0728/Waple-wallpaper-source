// Function: FUN_140015250
// Addr: 140015250
// Size: 55 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140015250(undefined2 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_134 [256];
  undefined8 uStack_34;
  
  local_140 = 0;
  local_138 = 0;
  local_148 = 0x11c;
  func_0x000140421870(local_134,0,0x100);
  uStack_34 = 0;
  uVar1 = (*_UNK_1404266e8)(0,2,3);
  uVar1 = (*_UNK_1404266e8)(uVar1,1,3);
  uVar1 = (*_UNK_1404266e8)(uVar1,0x20,3);
  local_148 = (ulonglong)CONCAT24(param_1,(undefined4)local_148);
  local_140 = CONCAT44(local_140._4_4_,param_2) & 0xffffffff0000ffff;
  uStack_34 = CONCAT62(uStack_34._2_6_,param_3);
  iVar2 = (*_UNK_1404266f0)(&local_148,0x23,uVar1);
  return iVar2 != 0;
}

