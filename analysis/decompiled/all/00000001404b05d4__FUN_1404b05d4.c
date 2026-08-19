// Function: FUN_1404b05d4
// Addr: 1404b05d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b05d4(undefined8 param_1)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char *in_RAX;
  undefined8 unaff_RSI;
  
  bVar2 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar2;
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)((ulonglong)
                    ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2 + bVar3) + 0x15574500 +
                    (uint)CARRY1(bVar2,bVar3)) + 0x21214b47);
  uRam0000000021004afc = unaff_RSI;
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

