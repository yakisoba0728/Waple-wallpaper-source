// Function: FUN_1404a5bf8
// Addr: 1404a5bf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5bf8(uint param_1,longlong param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) & param_1;
  *(byte *)(unaff_RBX + param_2) = *(byte *)(unaff_RBX + param_2) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

