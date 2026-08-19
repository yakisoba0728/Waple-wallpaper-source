// Function: FUN_1404bba48
// Addr: 1404bba48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bba48(undefined8 param_1,int *param_2)

{
  int iVar1;
  uint *in_RAX;
  char *pcVar2;
  uint unaff_EBX;
  uint *unaff_RDI;
  
  *param_2 = *param_2 + (int)param_2;
  iVar1 = (uint)in_RAX + *in_RAX;
  pcVar2 = (char *)(ulonglong)
                   CONCAT22((short)((uint)iVar1 >> 0x10),
                            CONCAT11((char)((uint)iVar1 >> 8) +
                                     *(char *)((longlong)param_2 + 0x300cd00e) +
                                     CARRY4((uint)in_RAX,*in_RAX),(char)iVar1));
  *pcVar2 = *pcVar2 + (char)iVar1;
  *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

