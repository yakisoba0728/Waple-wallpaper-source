// Function: FUN_1404d7d58
// Addr: 1404d7d58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7d58(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  byte in_CF;
  bool bVar2;
  
  bVar2 = in_AH < in_AL || (byte)(in_AH - in_AL) < in_CF;
  *(char *)(unaff_RBX + param_2) =
       *(char *)(unaff_RBX + param_2) + (char)param_2 + CARRY1(in_AL,bVar2);
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | (byte)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11((in_AH - in_AL) - in_CF,in_AL + bVar2)) +
                   -0x48ffc8b1);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

