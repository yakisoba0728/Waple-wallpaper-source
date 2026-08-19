// Function: FUN_1404d7b2c
// Addr: 1404d7b2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7b2c(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint *unaff_RDI;
  
  LOCK();
  uVar1 = *param_2;
  *param_2 = (char)param_1;
  UNLOCK();
  *unaff_RDI = *unaff_RDI & CONCAT31((int3)((uint)param_1 >> 8),uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

