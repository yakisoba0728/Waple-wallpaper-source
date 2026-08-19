// Function: FUN_1401dd9d0
// Addr: 1401dd9d0
// Size: 141 bytes


void FUN_1401dd9d0(longlong param_1,char param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x198);
  plVar3 = *(longlong **)(param_1 + 0x1a0);
  if (plVar5 != plVar3) {
    if (param_2 != '\0') {
      do {
        lVar4 = *plVar5;
        puVar1 = (ushort *)(lVar4 + 0x120);
        *puVar1 = *puVar1 | 2;
        FUN_1401dd9d0(lVar4,1);
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar3);
      return;
    }
    do {
      lVar4 = *plVar5;
      uVar2 = *(ushort *)(lVar4 + 0x120);
      *(ushort *)(lVar4 + 0x120) = uVar2 & 0xfffd;
      FUN_1401dd9d0(lVar4,CONCAT11((char)(uVar2 >> 8),(uVar2 & 4) != 0));
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar3);
  }
  return;
}

