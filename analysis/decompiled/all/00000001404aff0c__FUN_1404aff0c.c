// Function: FUN_1404aff0c
// Addr: 1404aff0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aff0c(undefined1 *param_1,char param_2)

{
  code *pcVar1;
  undefined3 uVar2;
  char cVar3;
  uint uVar4;
  uint *in_RAX;
  short sVar6;
  char *unaff_RSI;
  char *pcVar5;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02' + param_2,
                                 (byte)in_RAX | (byte)*in_RAX)) + 0x6c40000;
  pcVar5 = (char *)(ulonglong)uVar4;
  *pcVar5 = *pcVar5 + (char)uVar4;
  if (*pcVar5 != '\0') {
    *pcVar5 = *pcVar5 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (undefined3)(uVar4 >> 8);
  sVar6 = (short)((int)uVar4 >> 0x1f);
  cVar3 = in(sVar6);
  *param_1 = *param_1;
  *unaff_RSI = *unaff_RSI + cVar3;
  *(char *)(ulonglong)CONCAT31(uVar2,cVar3) = *(char *)(ulonglong)CONCAT31(uVar2,cVar3) + cVar3;
  cVar3 = in(4);
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
  *pcVar5 = *pcVar5 + cVar3;
  if (*pcVar5 != '\0') {
    *pcVar5 = *pcVar5 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = in(sVar6);
  *param_1 = *param_1;
  *(char *)(ulonglong)CONCAT31(uVar2,cVar3) = *(char *)(ulonglong)CONCAT31(uVar2,cVar3) + cVar3;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}

