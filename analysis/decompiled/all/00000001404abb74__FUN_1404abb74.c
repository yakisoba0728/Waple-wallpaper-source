// Function: FUN_1404abb74
// Addr: 1404abb74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404abb8a) overlaps instruction at (ram,0x0001404abb88)
    */

void FUN_1404abb74(char param_1,char param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  char *unaff_RBX;
  char *unaff_RDI;
  uint *puVar3;
  
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + ',') + 0x6c41e00;
  puVar3 = (uint *)(ulonglong)uVar2;
  *unaff_RBX = *unaff_RBX + param_2;
  if (*unaff_RBX == '\0') {
    puVar3 = (uint *)(ulonglong)(uVar2 | *puVar3);
  }
  *unaff_RDI = *unaff_RDI + param_1;
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)puVar3 >> 8),cRam98000f89b5000f89);
  *pcVar1 = *pcVar1 + cRam98000f89b5000f89;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

