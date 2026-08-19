// Function: FUN_14022f710
// Addr: 14022f710
// Size: 25 bytes


void FUN_14022f710(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  
  pcVar3 = *(char **)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x3f4) = 0;
  cVar1 = *pcVar3;
  while( true ) {
    if (cVar1 == '\0') {
      lVar2 = *(longlong *)(param_1 + 0x488);
      for (lVar4 = *(longlong *)(param_1 + 0x480); lVar4 != lVar2; lVar4 = lVar4 + 0x10) {
        FUN_14022f710(*(undefined8 *)(lVar4 + 8));
      }
      return;
    }
    cVar1 = *pcVar3;
    if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03')) break;
    *(uint *)(pcVar3 + 0x4c) = *(uint *)(pcVar3 + 0x4c) | 0x80000000;
    pcVar3 = pcVar3 + *(ushort *)(pcVar3 + 2);
    cVar1 = *pcVar3;
  }
  return;
}

