// Function: FUN_14031cb60
// Addr: 14031cb60
// Size: 240 bytes


undefined8 FUN_14031cb60(longlong param_1,int param_2,uint param_3,uint param_4,longlong param_5)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  ushort local_res8 [4];
  undefined1 local_28 [16];
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((uVar2 & 8) != 0) {
    if ((param_4 & 0x10) == 0) {
      if (*(short *)(param_1 + 0x15a) == 0) {
        return 7;
      }
      if (((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) && ((uVar2 >> 0xf & 1) == 0))
      goto LAB_14031cbce;
      bVar1 = *(byte *)(param_1 + 0x410) & 2;
    }
    else {
      if (*(char *)(param_1 + 400) == '\0') {
        return 7;
      }
      if (((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) && ((uVar2 >> 0xf & 1) == 0))
      goto LAB_14031cbce;
      bVar1 = *(byte *)(param_1 + 0x410) & 0x10;
    }
    if (bVar1 != 0) {
LAB_14031cbce:
      uVar3 = 0;
      if (param_3 != 0) {
        do {
          (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x150))
                    (param_1,(param_4 & 0x10) != 0,(int)uVar3 + param_2,local_28,local_res8);
          *(uint *)(param_5 + uVar3 * 4) = (uint)local_res8[0];
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar2;
        } while (uVar2 < param_3);
      }
      return 0;
    }
  }
  return 7;
}

