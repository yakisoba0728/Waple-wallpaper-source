// Function: FUN_1404af188
// Addr: 1404af188
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af188(char *param_1,int param_2)

{
  undefined3 uVar1;
  char cVar2;
  uint uVar3;
  char *in_RAX;
  int *piVar4;
  char *pcVar5;
  int unaff_ESP;
  byte in_CF;
  
  piVar4 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX - *in_RAX) + -0x3c);
  uVar3 = (int)piVar4 - *piVar4;
  pcVar5 = (char *)(ulonglong)uVar3;
  *(undefined1 *)((ulonglong)(param_2 + unaff_ESP + (uint)in_CF) - 0x5d0cffed) = 0;
  pcVar5[0x21004af0] = pcVar5[0x21004af0] + (char)(uVar3 >> 8);
  *pcVar5 = *pcVar5 + (char)uVar3;
  uVar1 = (undefined3)(uVar3 >> 8);
  cVar2 = (char)uVar3 * '\x02';
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  cRamf0a00013a2f30013 = cVar2;
  *param_1 = *param_1 + (char)unaff_ESP;
  *pcVar5 = *pcVar5 + (char)param_1;
  *pcVar5 = *pcVar5 + cVar2;
  cVar2 = in(0x29);
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  *pcVar5 = *pcVar5 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

