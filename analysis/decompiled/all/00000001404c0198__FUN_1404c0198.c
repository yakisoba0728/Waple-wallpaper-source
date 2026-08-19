// Function: FUN_1404c0198
// Addr: 1404c0198
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c01aa) overlaps instruction at (ram,0x0001404c01a9)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c01aa) */

void FUN_1404c0198(char *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  byte *in_RAX;
  int *unaff_RDI;
  
  *(char *)unaff_RDI = (char)*unaff_RDI + (char)param_1;
  iVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX);
  *unaff_RDI = *unaff_RDI + iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  *param_1 = *param_1 + param_2;
  uVar2 = iVar1 + 0x3600470;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  uRam00000001245101c4 = uRam00000001245101c4 & uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

