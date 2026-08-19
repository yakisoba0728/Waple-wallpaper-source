// Function: FUN_1404a59fc
// Addr: 1404a59fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a59fc(char *param_1,longlong param_2)

{
  byte *in_RAX;
  
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)((ulonglong)param_2 >> 8);
  in_RAX[-0x7d] = in_RAX[-0x7d] + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX | (byte)in_RAX;
  *(undefined4 *)in_RAX = *(undefined4 *)in_RAX;
  in((short)param_2);
  *param_1 = *param_1 + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

