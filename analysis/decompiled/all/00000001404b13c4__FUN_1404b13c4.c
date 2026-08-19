// Function: FUN_1404b13c4
// Addr: 1404b13c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b13c4(char *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  byte *in_RAX;
  longlong unaff_RSI;
  char in_CF;
  
  param_1[0x8e40400] = param_1[0x8e40400] + (char)((ulonglong)param_2 >> 8) + in_CF;
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + (byte)param_2;
  iVar2 = (int)in_RAX + 0x49e56400 + (uint)CARRY1(bVar1,(byte)param_2);
  *param_1 = *param_1 + (char)((uint)iVar2 >> 8);
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)iVar2 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

