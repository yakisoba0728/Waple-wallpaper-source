// Function: FUN_1403fb190
// Addr: 1403fb190
// Size: 147 bytes


void FUN_1403fb190(longlong param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 0x80) != 0) {
    if ((param_3 == 0xffffffff) || (param_3 - param_2 < 0x100)) {
      uVar2 = *(uint *)(param_1 + 0x60);
      if (param_3 <= *(uint *)(param_1 + 0x60)) {
        uVar2 = param_3;
      }
      if (1 < uVar2 - param_2) {
        uVar1 = FUN_1403a1a20(param_1,*(undefined8 *)(param_1 + 0x70),param_2,uVar2,0xffffffff);
        FUN_1403a1bc0(param_1,*(undefined8 *)(param_1 + 0x70),param_2,uVar2,uVar1,4);
      }
    }
    return;
  }
  FUN_14040eef0();
  return;
}

