// Function: FUN_14022f860
// Addr: 14022f860
// Size: 36 bytes


void FUN_14022f860(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  byte bVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x488);
  for (plVar7 = *(longlong **)(param_1 + 0x480); plVar7 != plVar2; plVar7 = plVar7 + 2) {
    if ((*(byte *)(*plVar7 + 100) & 2) != 0) {
      func_0x00014022f790(plVar7[1]);
      lVar5 = plVar7[1];
      pcVar4 = *(char **)(lVar5 + 0x70);
      *(undefined1 *)(lVar5 + 0x3f4) = 0;
      cVar1 = *pcVar4;
      while (cVar1 != '\0') {
        cVar1 = *pcVar4;
        if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03'))
        goto code_r0x00014022f902;
        *(uint *)(pcVar4 + 0x4c) = *(uint *)(pcVar4 + 0x4c) & 0x7fffffff;
        *(char *)(lVar5 + 0x3f4) = *(char *)(lVar5 + 0x3f4) + '\x01';
        pcVar4 = pcVar4 + *(ushort *)(pcVar4 + 2);
        cVar1 = *pcVar4;
      }
      lVar6 = *(longlong *)(lVar5 + 0x488);
      lVar5 = *(longlong *)(lVar5 + 0x480);
      if (lVar5 != lVar6) {
        do {
          FUN_14022f680(*(undefined8 *)(lVar5 + 8));
          lVar5 = lVar5 + 0x10;
        } while (lVar5 != lVar6);
      }
    }
code_r0x00014022f902:
  }
  pcVar4 = *(char **)(param_1 + 0x80);
  cVar1 = *pcVar4;
  do {
    if (cVar1 == '\0') {
      return;
    }
    if (*pcVar4 == '\r') {
      bVar3 = pcVar4[0x58] & 2;
code_r0x00014022f937:
      if (bVar3 != 0) {
        pcVar4[8] = '\0';
        pcVar4[9] = '\0';
        pcVar4[10] = '\0';
        pcVar4[0xb] = '\0';
      }
    }
    else if (*pcVar4 == '\x0e') {
      bVar3 = pcVar4[0x20] & 0x20;
      goto code_r0x00014022f937;
    }
    pcVar4 = pcVar4 + *(ushort *)(pcVar4 + 2);
    cVar1 = *pcVar4;
  } while( true );
}

