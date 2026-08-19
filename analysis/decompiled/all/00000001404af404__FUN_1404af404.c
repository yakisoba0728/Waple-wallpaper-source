// Function: FUN_1404af404
// Addr: 1404af404
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af404(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 in_RAX;
  undefined7 uVar4;
  char unaff_SPL;
  char in_CF;
  char *pcVar3;
  
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar1 = (char)in_RAX + cRam0000000131d2f41e + in_CF;
  pcVar3 = (char *)CONCAT71(uVar4,cVar1);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar3 = *pcVar3 + cVar1;
  *param_2 = *param_2 + (char)param_2;
  uVar2 = (int)CONCAT71(uVar4,cVar1 + (char)((ulonglong)in_RAX >> 8) + '\x14') + 0xf1880014;
  pcVar3 = (char *)(ulonglong)uVar2;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar3 = *pcVar3 + (char)param_1;
  *pcVar3 = *pcVar3 + (char)uVar2;
  cVar1 = in(0x27);
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  *pcVar3 = *pcVar3 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

