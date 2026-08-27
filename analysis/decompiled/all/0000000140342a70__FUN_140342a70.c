// Function: FUN_140342a70
// Addr: 140342a70
// Size: 192 bytes


ulonglong FUN_140342a70(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ushort *puVar3;
  
  uVar2 = (**(code **)(param_1 + 0x2a0))(param_1,0x4f532f32,param_2,0);
  if ((int)uVar2 == 0) {
    puVar3 = (ushort *)(param_1 + 0x208);
    uVar2 = FUN_1402f5610(param_2,&DAT_140450eb0);
    if ((int)uVar2 == 0) {
      *(undefined2 *)(param_1 + 0x26c) = 0xffff;
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined4 *)(param_1 + 0x268) = 0;
      uVar2 = uVar2 & 0xffffffff;
      if (*puVar3 != 0) {
        uVar2 = FUN_1402f5610(param_2,&DAT_1404513b8,puVar3);
        if (((int)uVar2 == 0) && (uVar2 = uVar2 & 0xffffffff, 1 < *puVar3)) {
          uVar2 = FUN_1402f5610(param_2,&DAT_1404513c8,puVar3);
          if (((int)uVar2 == 0) && (uVar2 = uVar2 & 0xffffffff, 4 < *puVar3)) {
            uVar1 = FUN_1402f5610(param_2,&DAT_1404513e8,puVar3);
            uVar2 = (ulonglong)uVar1;
          }
        }
      }
    }
  }
  return uVar2;
}

