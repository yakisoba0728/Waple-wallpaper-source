// Function: FUN_140342650
// Addr: 140342650
// Size: 159 bytes


ulonglong FUN_140342650(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  
  uVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x6d617870,param_2,0);
  if ((int)uVar1 == 0) {
    piVar3 = (int *)(param_1 + 0x170);
    uVar1 = FUN_1402f5610(param_2,&DAT_140450dd8,piVar3);
    if ((int)uVar1 == 0) {
      *(ulonglong *)(param_1 + 0x186) = uVar1;
      *(undefined8 *)(param_1 + 0x176) = 0;
      *(undefined8 *)(param_1 + 0x17e) = 0;
      *(short *)(param_1 + 0x18e) = (short)uVar1;
      uVar1 = uVar1 & 0xffffffff;
      if (0xffff < *piVar3) {
        uVar2 = FUN_1402f5610(param_2,&DAT_140450de8,piVar3);
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

