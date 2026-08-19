// Function: FUN_14049ec70
// Addr: 14049ec70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ec70(undefined8 param_1,char *param_2)

{
  uint in_EAX;
  char in_CF;
  
  *param_2 = *param_2 + (char)((ulonglong)param_2 >> 8) + in_CF;
  uRam00000001a44eec7c = uRam00000001a44eec7c & (in_EAX | 0xe0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

