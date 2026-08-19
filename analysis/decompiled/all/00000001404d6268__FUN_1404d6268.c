// Function: FUN_1404d6268
// Addr: 1404d6268
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6268(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char *in_RAX;
  byte unaff_BL;
  int *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  byte in_CF;
  bool in_PF;
  
  if (!in_PF) {
    uVar3 = (int)in_RAX + 0x14c46e00 + (uint)in_CF;
    pbVar1 = (byte *)(unaff_RDI + 0x54);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + unaff_BL;
    *param_1 = *param_1 ^
               (byte)(uVar3 + *(int *)(ulonglong)uVar3 + (uint)CARRY1(bVar2,unaff_BL) >> 8);
    LOCK();
    *unaff_RSI = *unaff_RSI + 1;
    UNLOCK();
    *(char *)(param_2 + 1) = *(char *)(param_2 + 1) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + unaff_R12B;
  *(char *)unaff_RSI = (char)*unaff_RSI + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

