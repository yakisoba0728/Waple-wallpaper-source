// Function: FUN_1404aa534
// Addr: 1404aa534
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa534(undefined8 param_1)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0x60000664U | 0xdfb8000;
  uVar1 = CONCAT22((short)(uVar1 >> 0x10),
                   CONCAT11((char)(uVar1 >> 8) + (char)((ulonglong)param_1 >> 8),
                            (char)(in_EAX + 0x60000664U))) + 0x21004a;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

