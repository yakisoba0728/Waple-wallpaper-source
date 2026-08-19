// Function: FUN_1404ac804
// Addr: 1404ac804
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac804(char *param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -0x4bffefbb) =
       *(char *)(unaff_RBP + -0x4bffefbb) + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 +
             (char)((uint)((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x1c) +
                          0x10459000) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

