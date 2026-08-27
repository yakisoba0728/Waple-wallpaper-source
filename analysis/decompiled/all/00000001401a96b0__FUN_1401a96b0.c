// Function: FUN_1401a96b0
// Addr: 1401a96b0
// Size: 504 bytes


ulonglong FUN_1401a96b0(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong in_RAX;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  
  if (*(char *)(param_1 + 8) != '\a') {
LAB_1401a989b:
    return in_RAX & 0xffffffffffffff00;
  }
  lVar5 = FUN_140087490(param_1,"length","");
  if (lVar5 == 0) {
    lVar5 = FUN_140084ac0();
  }
  lVar6 = FUN_140087490(param_1,&DAT_140476edc,0x140476edf);
  if (lVar6 == 0) {
    lVar6 = FUN_140084ac0();
  }
  uVar3 = *(byte *)(lVar5 + 8) - 1;
  in_RAX = (ulonglong)uVar3;
  if ((2 < uVar3) || (uVar3 = *(byte *)(lVar6 + 8) - 1, in_RAX = (ulonglong)uVar3, 2 < uVar3))
  goto LAB_1401a989b;
  plVar7 = (longlong *)FUN_140087490(param_1,&DAT_140474ec0,&DAT_140474ec4);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)FUN_140084ac0();
  }
  lVar8 = FUN_140087490(param_1,"random","");
  if (lVar8 == 0) {
    lVar8 = FUN_140084ac0();
  }
  lVar9 = FUN_140087490(param_1,"startpaused","");
  if (lVar9 == 0) {
    lVar9 = FUN_140084ac0();
  }
  lVar10 = FUN_140087490(param_1,"wraploop","");
  if (lVar10 == 0) {
    lVar10 = FUN_140084ac0();
  }
  if (*(char *)(lVar9 + 8) == '\x05') {
    cVar1 = FUN_140086300(lVar9);
    if (cVar1 == '\0') goto LAB_1401a97f6;
    uVar12 = 1;
  }
  else {
LAB_1401a97f6:
    uVar12 = 0;
  }
  if (*(char *)(lVar8 + 8) == '\x05') {
    cVar1 = FUN_140086300(lVar8);
    if (cVar1 != '\0') {
      uVar11 = 1;
      goto LAB_1401a9812;
    }
  }
  uVar11 = 0;
LAB_1401a9812:
  uVar4 = FUN_140085ee0(lVar5);
  uVar13 = FUN_140086220(lVar6);
  if (((char)*(uint *)(plVar7 + 1) == '\x04') && (lVar5 = *plVar7, lVar5 != 0)) {
    if ((*(uint *)(plVar7 + 1) >> 8 & 1) != 0) {
      lVar5 = lVar5 + 4;
    }
  }
  else {
    lVar5 = 0;
  }
  bVar2 = FUN_1401a8c10(lVar5,uVar13,uVar4,param_2,uVar11,uVar12);
  if (*(char *)(lVar10 + 8) == '\x05') {
    cVar1 = FUN_140086300(lVar10);
    if (cVar1 != '\0') {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x10;
    }
  }
  return (ulonglong)bVar2;
}

