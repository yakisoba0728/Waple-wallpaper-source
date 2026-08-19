// Function: FUN_1404d6cdc
// Addr: 1404d6cdc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6cdc(longlong param_1,char param_2)

{
  char *pcVar1;
  uint *in_RAX;
  byte *pbVar2;
  uint unaff_EBX;
  undefined4 *unaff_RBP;
  uint *unaff_RSI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  pbVar2 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(byte)in_RAX));
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)pbVar2 >> 8),(byte)in_RAX | *pbVar2) + param_1);
  *pcVar1 = *pcVar1 + param_2;
  cRam000000014bad7973 = cRam000000014bad7973 + (char)*unaff_RBP;
  *unaff_RSI = *unaff_RSI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

