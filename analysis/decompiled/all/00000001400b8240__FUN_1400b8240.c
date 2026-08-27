// Function: FUN_1400b8240
// Addr: 1400b8240
// Size: 411 bytes


ulonglong FUN_1400b8240(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  
  bVar1 = *(byte *)(param_1 + 0x60);
  if (bVar1 < 8) {
    pcVar5 = (code *)(ulonglong)(bVar1 + 0xff);
    if (((bVar1 + 0xff & 0xfc) == 0) && (bVar1 != 3)) {
      pcVar5 = (code *)0x0;
      if (*(char *)(param_1 + 0x61) == '\0') {
        uVar3 = 0x20000008;
      }
      else {
        if (*(char *)(param_1 + 0x61) != '\x03') goto LAB_1400b83d8;
        uVar3 = 0x83040008;
      }
      *(undefined4 *)(param_1 + 0x88) = uVar3;
      *(undefined4 *)(param_1 + 0x8c) = uVar3;
      *(code **)(param_1 + 0x198) = FUN_1400bd3f0;
      *(undefined1 *)(param_1 + 0x62) = 1;
      return 0x1400bd300;
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x61);
    pcVar5 = (code *)0x0;
    if (cVar2 == '\0') {
      if (bVar1 == 8) {
        uVar4 = 0x20000008;
LAB_1400b8339:
        *(int *)(param_1 + 0x88) = (int)uVar4;
        *(int *)(param_1 + 0x8c) = (int)uVar4;
        *(undefined1 *)(param_1 + 0x62) = 1;
        return uVar4 & 0xffffffffffffff00;
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
        return uVar4 & 0xffffffffffffff00;
      }
    }
    else {
      if (cVar2 == '\x02') {
        if (bVar1 == 8) {
          *(undefined4 *)(param_1 + 0x88) = 0x80000888;
          *(undefined4 *)(param_1 + 0x8c) = 0xa0000888;
          *(undefined1 *)(param_1 + 0x62) = 3;
          return 0;
        }
        if (bVar1 != 0x10) goto LAB_1400b83d8;
        *(undefined1 *)(param_1 + 0x62) = 6;
      }
      else {
        if (cVar2 == '\x03') {
          if (bVar1 == 8) {
            uVar4 = 0x83040008;
            goto LAB_1400b8339;
          }
          goto LAB_1400b83d8;
        }
        if (cVar2 == '\x04') {
          if (bVar1 == 8) {
            *(undefined4 *)(param_1 + 0x88) = 0x81008888;
            *(code **)(param_1 + 0x198) = FUN_1400bd3f0;
            *(undefined4 *)(param_1 + 0x8c) = 0x81008888;
            *(undefined1 *)(param_1 + 0x62) = 2;
            return 0x1400bd300;
          }
          if (bVar1 != 0x10) goto LAB_1400b83d8;
          *(undefined1 *)(param_1 + 0x62) = 4;
        }
        else {
          if (cVar2 != '\x06') goto LAB_1400b83d8;
          if (bVar1 == 8) {
            *(undefined4 *)(param_1 + 0x88) = 0x81008888;
            *(undefined4 *)(param_1 + 0x8c) = 0xa1008888;
            *(undefined1 *)(param_1 + 0x62) = 4;
            return 0;
          }
          if (bVar1 != 0x10) goto LAB_1400b83d8;
          *(undefined1 *)(param_1 + 0x62) = 8;
        }
      }
      pcVar5 = FUN_1400bd3f0;
      *(undefined4 *)(param_1 + 0x88) = 0x8100bbbb;
      *(undefined4 *)(param_1 + 0x8c) = 0x8100bbbb;
      *(code **)(param_1 + 0x198) = FUN_1400bd3f0;
    }
  }
LAB_1400b83d8:
  return (ulonglong)pcVar5 & 0xffffffffffffff00;
}

