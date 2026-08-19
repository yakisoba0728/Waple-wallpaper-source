// Function: FUN_1404a7da0
// Addr: 1404a7da0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7da0(undefined8 param_1,undefined8 param_2)

{
  uint *in_RAX;
  char *pcVar1;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  
  *in_RAX = *in_RAX + unaff_EBP;
  pcVar1 = (char *)(ulonglong)((uint)in_RAX | *in_RAX);
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) - (char)((ulonglong)param_2 >> 8);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

