// Function: FUN_1404cbb0c
// Addr: 1404cbb0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbb0c(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *param_4 = *param_4 + (char)in_EAX;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + param_1;
  *(uint *)(CONCAT44(in_register_00000004,in_EAX) | 6) =
       *(uint *)(CONCAT44(in_register_00000004,in_EAX) | 6) | in_EAX | 6;
  pbVar1 = (byte *)((CONCAT44(in_register_00000004,CONCAT31((int3)(in_EAX >> 8),(char)(in_EAX | 6)))
                    | 0x32) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

