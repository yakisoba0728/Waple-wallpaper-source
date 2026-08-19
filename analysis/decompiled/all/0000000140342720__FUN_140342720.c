// Function: FUN_140342720
// Addr: 140342720
// Size: 35 bytes


ulonglong FUN_140342720(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  
  uVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x6d617870,param_2,0);
  if ((int)uVar1 == 0) {
    piVar3 = (int *)(param_1 + 0x170);
    uVar1 = FUN_1402f56e0(param_2,&UNK_140450ea8,piVar3);
    if ((int)uVar1 == 0) {
      *(ulonglong *)(param_1 + 0x186) = uVar1;
      *(undefined8 *)(param_1 + 0x176) = 0;
      *(undefined8 *)(param_1 + 0x17e) = 0;
      *(short *)(param_1 + 0x18e) = (short)uVar1;
      uVar1 = uVar1 & 0xffffffff;
      if (0xffff < *piVar3) {
        uVar2 = FUN_1402f56e0(param_2,&UNK_140450eb8,piVar3);
        uVar1 = uVar2;
        if ((int)uVar2 == 0) {
          if (*(ushort *)(param_1 + 0x184) < 0x40) {
            *(undefined2 *)(param_1 + 0x184) = 0x40;
          }
          uVar1 = uVar2 & 0xffffffff;
          if (0xfffb < *(ushort *)(param_1 + 0x180)) {
            *(undefined2 *)(param_1 + 0x180) = 0xfffb;
          }
        }
      }
    }
  }
  return uVar1;
}

