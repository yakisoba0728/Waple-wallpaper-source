// Function: FUN_1404d4684
// Addr: 1404d4684
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4684(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  short sVar2;
  int in_EAX;
  
  sVar2 = (short)(in_EAX + -0x5ffff4ac);
  pcVar1 = (char *)((ulonglong)
                    CONCAT22((short)((uint)(in_EAX + -0x5ffff4ac) >> 0x10),
                             CONCAT11((char)(sVar2 % (short)*param_2),
                                      (char)(sVar2 / (short)*param_2))) - 0x5fffc50a);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

