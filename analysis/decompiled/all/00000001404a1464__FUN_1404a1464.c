// Function: FUN_1404a1464
// Addr: 1404a1464
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a1479) overlaps instruction at (ram,0x0001404a1478)
    */

void FUN_1404a1464(char *param_1,byte *param_2)

{
  char *pcVar1;
  int iVar2;
  byte *in_RAX;
  int *piVar3;
  char unaff_SPL;
  bool in_OF;
  
  if (in_OF) {
    uRam00000001344f1484 = uRam00000001344f1484 & (uint)in_RAX;
  }
  else {
    *param_1 = *param_1 + unaff_SPL;
    *param_2 = *param_2 | (byte)in_RAX;
    *in_RAX = *in_RAX + (char)param_1;
    piVar3 = (int *)((ulonglong)in_RAX ^ 0x10);
    pcVar1 = (char *)((longlong)piVar3 + (longlong)param_2 * 8 + -0x2f23fffd);
    *pcVar1 = *pcVar1 + (char)piVar3;
    iVar2 = *piVar3;
    *param_1 = *param_1 + unaff_SPL;
    in_RAX = (byte *)(ulonglong)((int)piVar3 + iVar2 + 0xf4050002);
  }
  *in_RAX = *in_RAX | (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

