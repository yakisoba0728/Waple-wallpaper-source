// Function: FUN_1404acc2c
// Addr: 1404acc2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acc2c(int param_1)

{
  undefined8 in_RAX;
  uint *unaff_RBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(byte *)CONCAT44(unaff_00000034,unaff_ESI) ^ (byte)in_RAX;
  *unaff_RBX = *unaff_RBX & unaff_ESI;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + ((byte)((ulonglong)in_RAX >> 8) | 0x2e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

