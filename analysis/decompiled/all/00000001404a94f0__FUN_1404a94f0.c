// Function: FUN_1404a94f0
// Addr: 1404a94f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a9505) overlaps instruction at (ram,0x0001404a9500)
    */

void FUN_1404a94f0(char *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_RAX;
  char *pcVar5;
  undefined4 *unaff_RSI;
  char *pcVar4;
  
  cVar2 = (char)in_RAX + -0x6c;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  *param_1 = *param_1;
  *param_2 = *param_2 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar5 = pcVar4;
  if (*pcVar4 == '\0') {
    pcVar5 = (char *)((ulonglong)&stack0x00000000 & 0xffffffff);
    register0x00000020 = (BADSPACEBASE *)((ulonglong)pcVar4 & 0xffffffff);
  }
  *pcVar5 = *pcVar5 + (char)pcVar5;
  cVar2 = (char)*unaff_RSI;
  pcVar5 = (char *)CONCAT71((int7)(CONCAT44((int)((ulonglong)pcVar5 >> 0x20),*unaff_RSI) >> 8),cVar2
                           );
  *param_1 = *param_1 + (char)register0x00000020;
  *pcVar5 = *pcVar5 + cVar2;
  *pcVar5 = *pcVar5 + cVar2;
  iVar1 = unaff_RSI[1];
  *param_1 = *param_1 + (char)register0x00000020;
  uVar3 = iVar1 + 0x74050002;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
  *(byte *)(unaff_RSI + -0x145dfffb) =
       *(byte *)(unaff_RSI + -0x145dfffb) ^ (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

