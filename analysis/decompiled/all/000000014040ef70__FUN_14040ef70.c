// Function: FUN_14040ef70
// Addr: 14040ef70
// Size: 224 bytes


void FUN_14040ef70(longlong param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_3 == 0xffffffff) || (param_3 - param_2 < 0x100)) {
    uVar1 = *(uint *)(param_1 + 0x60);
    if (param_3 <= *(uint *)(param_1 + 0x60)) {
      uVar1 = param_3;
    }
    if (*(char *)(param_1 + 0x59) == '\0') {
      uVar2 = FUN_1403a1a20(param_1,*(undefined8 *)(param_1 + 0x70),param_2,uVar1,0xffffffff);
    }
    else {
      uVar2 = FUN_1403a1a20(param_1,*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x5c),
                            uVar1,0xffffffff);
      uVar2 = FUN_1403a1a20(param_1,*(undefined8 *)(param_1 + 0x78),param_2,
                            *(undefined4 *)(param_1 + 100),uVar2);
      FUN_1403a1bc0(param_1,*(undefined8 *)(param_1 + 0x78),param_2,*(undefined4 *)(param_1 + 100),
                    uVar2,3);
      param_2 = *(int *)(param_1 + 0x5c);
    }
    FUN_1403a1bc0(param_1,*(undefined8 *)(param_1 + 0x70),param_2,uVar1,uVar2,3);
  }
  return;
}

