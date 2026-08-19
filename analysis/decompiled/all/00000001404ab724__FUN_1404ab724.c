// Function: FUN_1404ab724
// Addr: 1404ab724
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ab730) */

void FUN_1404ab724(int param_1,longlong param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  
  *(int *)CONCAT71(in_register_00000001,in_AL) =
       *(int *)CONCAT71(in_register_00000001,in_AL) + param_1;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

