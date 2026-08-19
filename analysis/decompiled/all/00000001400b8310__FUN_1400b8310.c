// Function: FUN_1400b8310
// Addr: 1400b8310
// Size: 387 bytes


undefined * FUN_1400b8310(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  bool bVar6;
  
  bVar1 = *(byte *)(param_1 + 0x60);
  if (bVar1 < 8) {
    puVar5 = (undefined *)(ulonglong)(bVar1 + 0xff);
    if (((bVar1 + 0xff & 0xfc) == 0) && (bVar1 != 3)) {
      puVar5 = (undefined *)0x0;
      if (*(char *)(param_1 + 0x61) == '\0') {
        uVar3 = 0x20000008;
      }
      else {
        if (*(char *)(param_1 + 0x61) != '\x03') goto LAB_1400b84a8;
        uVar3 = 0x83040008;
      }
      *(undefined4 *)(param_1 + 0x88) = uVar3;
      *(undefined4 *)(param_1 + 0x8c) = uVar3;
      *(undefined **)(param_1 + 0x198) = &DAT_1400bd4c0;
      *(undefined1 *)(param_1 + 0x62) = 1;
      return &DAT_1400bd400;
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x61);
    puVar5 = (undefined *)0x0;
    if (cVar2 == '\0') {
      if (bVar1 == 8) {
        uVar4 = 0x20000008;
LAB_1400b8409:
        *(int *)(param_1 + 0x88) = (int)uVar4;
        *(int *)(param_1 + 0x8c) = (int)uVar4;
        *(undefined1 *)(param_1 + 0x62) = 1;
        return (undefined *)(uVar4 & 0xffffffffffffff00);
      }
      if (bVar1 == 0x10) {
        bVar6 = *(char *)(param_1 + 99) != '\0';
        uVar3 = 0x2000000b;
        if (bVar6) {
          uVar3 = 0x8100bbbb;
        }
        *(undefined4 *)(param_1 + 0x88) = uVar3;
        uVar4 = 0x2010000b;
        if (bVar6) {
          uVar4 = 0x8100bbbb;
        }
        *(int *)(param_1 + 0x8c) = (int)uVar4;
        *(undefined1 *)(param_1 + 0x62) = 2;
        return (undefined *)(uVar4 & 0xffffffffffffff00);
      }
    }
    else {
      if (cVar2 == '\x02') {
        if (bVar1 == 8) {
          *(undefined4 *)(param_1 + 0x88) = 0x80000888;
          *(undefined4 *)(param_1 + 0x8c) = 0xa0000888;
          *(undefined1 *)(param_1 + 0x62) = 3;
          return (undefined *)0x0;
        }
        if (bVar1 != 0x10) goto LAB_1400b84a8;
        *(undefined1 *)(param_1 + 0x62) = 6;
      }
      else {
        if (cVar2 == '\x03') {
          if (bVar1 == 8) {
            uVar4 = 0x83040008;
            goto LAB_1400b8409;
          }
          goto LAB_1400b84a8;
        }
        if (cVar2 == '\x04') {
          if (bVar1 == 8) {
            *(undefined4 *)(param_1 + 0x88) = 0x81008888;
            *(undefined **)(param_1 + 0x198) = &DAT_1400bd4c0;
            *(undefined4 *)(param_1 + 0x8c) = 0x81008888;
            *(undefined1 *)(param_1 + 0x62) = 2;
            return &DAT_1400bd400;
          }
          if (bVar1 != 0x10) goto LAB_1400b84a8;
          *(undefined1 *)(param_1 + 0x62) = 4;
        }
        else {
          if (cVar2 != '\x06') goto LAB_1400b84a8;
          if (bVar1 == 8) {
            *(undefined4 *)(param_1 + 0x88) = 0x81008888;
            *(undefined4 *)(param_1 + 0x8c) = 0xa1008888;
            *(undefined1 *)(param_1 + 0x62) = 4;
            return (undefined *)0x0;
          }
          if (bVar1 != 0x10) goto LAB_1400b84a8;
          *(undefined1 *)(param_1 + 0x62) = 8;
        }
      }
      puVar5 = &DAT_1400bd4c0;
      *(undefined4 *)(param_1 + 0x88) = 0x8100bbbb;
      *(undefined4 *)(param_1 + 0x8c) = 0x8100bbbb;
      *(undefined **)(param_1 + 0x198) = &DAT_1400bd4c0;
    }
  }
LAB_1400b84a8:
  return (undefined *)((ulonglong)puVar5 & 0xffffffffffffff00);
}

