// Function: FUN_14049ee60
// Addr: 14049ee60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ee60(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  
  *(byte *)(in_RAX + 7) = *(byte *)(in_RAX + 7) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

