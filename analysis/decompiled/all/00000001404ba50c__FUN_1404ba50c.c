// Function: FUN_1404ba50c
// Addr: 1404ba50c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba50c(void)

{
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  
  *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(uint *)CONCAT44(unaff_0000001c,unaff_EBX) & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

