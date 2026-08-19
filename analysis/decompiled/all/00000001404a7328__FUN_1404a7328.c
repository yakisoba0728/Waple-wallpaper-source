// Function: FUN_1404a7328
// Addr: 1404a7328
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7328(char *param_1)

{
  int in_EAX;
  uint uVar1;
  char unaff_SPL;
  byte in_CF;
  uint *puVar2;
  
  uVar1 = in_EAX + 0x240009fb + (uint)in_CF;
  puVar2 = (uint *)(ulonglong)uVar1;
  *puVar2 = *puVar2 | uVar1;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
  uVar1 = CONCAT22((short)(uVar1 >> 0x10),CONCAT11((char)(uVar1 >> 8) * '\x02',(char)uVar1));
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

