// Function: FUN_1404cb5ec
// Addr: 1404cb5ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb5ec(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_RAX;
  char *pcVar3;
  uint unaff_ESP;
  uint *unaff_RDI;
  
  *in_RAX = *in_RAX + param_1;
  iVar2 = (int)in_RAX + *in_RAX;
  cVar1 = (char)iVar2 + -0x10;
  pcVar3 = (char *)(ulonglong)
                   CONCAT22((short)((uint)iVar2 >> 0x10),
                            CONCAT11((char)((uint)iVar2 >> 8) + cVar1,cVar1));
  *pcVar3 = *pcVar3 + cVar1;
  *unaff_RDI = *unaff_RDI & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

