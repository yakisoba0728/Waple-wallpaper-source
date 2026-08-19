// Function: FUN_1404a1ad4
// Addr: 1404a1ad4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1ad4(undefined8 param_1)

{
  int *in_RAX;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  char *unaff_RDI;
  
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX + unaff_EBX;
  *unaff_RDI = *unaff_RDI + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

