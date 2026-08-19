// Function: FUN_14049ebb8
// Addr: 14049ebb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ebb8(char *param_1,undefined8 param_2)

{
  char cVar1;
  uint in_EAX;
  
  cVar1 = (char)(in_EAX + 0xeb000af4);
  *param_1 = *param_1 + cVar1 + (0x14fff50b < in_EAX);
  *param_1 = *param_1 + cVar1 +
             CARRY1((byte)(in_EAX + 0xeb000af4 >> 8),(byte)((ulonglong)param_2 >> 8));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

