// Function: FUN_1404c7a6c
// Addr: 1404c7a6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7a6c(char *param_1,byte param_2,byte *param_3)

{
  char *pcVar1;
  uint uVar2;
  uint *in_RAX;
  char *pcVar3;
  int unaff_ESP;
  int *unaff_RDI;
  char unaff_R12B;
  
  *in_RAX = *in_RAX & (uint)param_1;
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) | param_2,
                                 (char)in_RAX + (char)*in_RAX)) + 0x30449000;
  pcVar3 = (char *)(ulonglong)uVar2;
  pcVar1 = (char *)((longlong)pcVar3 * 2 + 0x79800030);
  *pcVar1 = *pcVar1 + (char)(uVar2 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar3 = *pcVar3 + (char)uVar2;
  pcVar3[0x24003044] = pcVar3[0x24003044] + param_2;
  *param_3 = *param_3 ^ (byte)param_3;
  *unaff_RDI = *unaff_RDI - unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

