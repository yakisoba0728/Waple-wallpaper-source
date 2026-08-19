// Function: FUN_1404cbb84
// Addr: 1404cbb84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbb84(undefined8 param_1,undefined8 param_2)

{
  int in_EAX;
  uint uVar1;
  undefined1 *unaff_RSI;
  
  uVar1 = in_EAX + 0xdd000e54;
  out(*unaff_RSI,CONCAT11((byte)((ulonglong)param_2 >> 8) | (byte)((uint)in_EAX >> 8),(char)param_2)
     );
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

