// Function: FUN_1401dd9a0
// Addr: 1401dd9a0
// Size: 178 bytes


void FUN_1401dd9a0(longlong param_1)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffd;
  if ((*(longlong *)(param_1 + 0x180) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x180) + 0x120) & 6) == 0)) {
    uVar2 = *(ushort *)(param_1 + 0x120);
    *(ushort *)(param_1 + 0x120) = uVar2 & 0xfffd;
    if ((uVar2 & 4) == 0) {
      bVar4 = false;
      goto LAB_1401dd9cc;
    }
  }
  else {
    *(ushort *)(param_1 + 0x120) = *(ushort *)(param_1 + 0x120) | 2;
  }
  bVar4 = true;
LAB_1401dd9cc:
  plVar5 = *(longlong **)(param_1 + 0x198);
  plVar6 = *(longlong **)(param_1 + 0x1a0);
  if (plVar5 != plVar6) {
    if (bVar4) {
      do {
        lVar3 = *plVar5;
        puVar1 = (ushort *)(lVar3 + 0x120);
        *puVar1 = *puVar1 | 2;
        FUN_1401dd900(lVar3,1);
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar6);
      return;
    }
    do {
      lVar3 = *plVar5;
      uVar2 = *(ushort *)(lVar3 + 0x120);
      *(ushort *)(lVar3 + 0x120) = uVar2 & (ushort)uVar7;
      FUN_1401dd900(lVar3,CONCAT11((char)(uVar2 >> 8),(uVar2 & 4) != 0));
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar6);
  }
  return;
}

