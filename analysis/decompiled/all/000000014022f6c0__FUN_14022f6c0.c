// Function: FUN_14022f6c0
// Addr: 14022f6c0
// Size: 194 bytes


void FUN_14022f6c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  cVar1 = *pcVar4;
  while( true ) {
    if (cVar1 == '\0') {
      pcVar4 = *(char **)(param_1 + 0x80);
      cVar1 = *pcVar4;
      while (cVar1 != '\0') {
        if ((*pcVar4 == '\r') || (*pcVar4 == '\x0e')) {
          pcVar4[8] = '\0';
          pcVar4[9] = '\0';
          pcVar4[10] = '\0';
          pcVar4[0xb] = '\0';
        }
        pcVar4 = pcVar4 + *(ushort *)(pcVar4 + 2);
        cVar1 = *pcVar4;
      }
      lVar2 = *(longlong *)(param_1 + 0x488);
      for (lVar3 = *(longlong *)(param_1 + 0x480); lVar3 != lVar2; lVar3 = lVar3 + 0x10) {
        FUN_14022f6c0(*(undefined8 *)(lVar3 + 8));
      }
      return;
    }
    cVar1 = *pcVar4;
    if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03')) break;
    *(undefined4 *)(pcVar4 + 0x14) = *(undefined4 *)(pcVar4 + 0x1c);
    *(undefined4 *)(pcVar4 + 0x18) = *(undefined4 *)(pcVar4 + 0x20);
    *(undefined4 *)(pcVar4 + 0x44) = *(undefined4 *)(pcVar4 + 0x48);
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = '\0';
    pcVar4[0x3c] = '\0';
    pcVar4[0x3d] = '\0';
    pcVar4[0x3e] = '\0';
    pcVar4[0x3f] = '\0';
    pcVar4[0x40] = '\0';
    pcVar4[0x41] = '\0';
    pcVar4[0x42] = '\0';
    pcVar4[0x43] = '\0';
    pcVar4 = pcVar4 + *(ushort *)(pcVar4 + 2);
    cVar1 = *pcVar4;
  }
  return;
}

