// Function: FUN_1404ccc48
// Addr: 1404ccc48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccc48(undefined8 param_1,uint *param_2)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)param_2 = (char)*param_2 + (char)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 | 0x21;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

