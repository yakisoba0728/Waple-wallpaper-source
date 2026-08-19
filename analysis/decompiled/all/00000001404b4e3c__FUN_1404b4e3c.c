// Function: FUN_1404b4e3c
// Addr: 1404b4e3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4e3c(char *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *in_RAX;
  char unaff_BL;
  char unaff_BH;
  char *unaff_RDI;
  int iVar4;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar3 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX >> 1;
  uVar2 = *in_RAX;
  *param_2 = *param_2 - unaff_BL;
  pcVar1 = (char *)((longlong)param_1 * 2 + 0x701004b);
  *pcVar1 = *pcVar1 + unaff_BH;
  iVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                        ((char)in_RAX - (char)uVar2) - ((byte)uVar3 & 1));
  uVar3 = iVar4 + 0x5e00700;
  if (!SCARRY4(iVar4,0x5e00700)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 ^ (byte)uVar3;
  *param_1 = *param_1 + (byte)uVar3;
  syscall();
  *unaff_RDI = *unaff_RDI + '_';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

