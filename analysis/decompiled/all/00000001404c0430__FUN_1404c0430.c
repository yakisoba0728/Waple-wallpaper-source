// Function: FUN_1404c0430
// Addr: 1404c0430
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0430(void)

{
  int unaff_EDI;
  undefined4 unaff_0000003c;
  
  *(int *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(int *)CONCAT44(unaff_0000003c,unaff_EDI) + unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

