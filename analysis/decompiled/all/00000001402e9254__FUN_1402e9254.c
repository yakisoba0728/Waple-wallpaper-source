// Function: FUN_1402e9254
// Addr: 1402e9254
// Size: 180 bytes


longlong FUN_1402e9254(byte *param_1,uint param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        lVar3 = 1;
        bVar1 = 0xc0;
        lVar4 = lVar3;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if (param_2 - 0xd800 < 0x800) {
LAB_1402e9300:
          *param_3 = 0;
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 0x2a;
          return -1;
        }
        lVar3 = 2;
        bVar1 = 0xe0;
        lVar4 = lVar3;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_1402e9300;
        lVar3 = 3;
        bVar1 = 0xf0;
        lVar4 = lVar3;
      }
      do {
        bVar2 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[lVar3] = bVar2 & 0x3f | 0x80;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      *param_1 = bVar1 | (byte)param_2;
      *param_3 = 0;
      return lVar4 + 1;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  return 1;
}

