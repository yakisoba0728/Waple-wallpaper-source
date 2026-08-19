// Function: FUN_1404d3850
// Addr: 1404d3850
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3850(void)

{
  int in_EAX;
  undefined4 in_register_00000004;
  int unaff_EBX;
  
  iRam00000000c86a385d = iRam00000000c86a385d + unaff_EBX;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

