// Function: FUN_1404c0000
// Addr: 1404c0000
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0000(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *in_RAX;
  char *unaff_RBX;
  int unaff_EBP;
  longlong unaff_RSI;
  char in_CF;
  bool in_SF;
  int *piVar4;
  
  if (!in_SF) {
    pbVar1 = (byte *)(unaff_RSI + 0x68);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + (byte)in_RAX;
    uVar3 = (int)in_RAX + *(int *)in_RAX + (uint)CARRY1(bVar2,(byte)in_RAX);
    piVar4 = (int *)(ulonglong)uVar3;
    *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8);
    *piVar4 = *piVar4 + unaff_EBP;
    *(char *)piVar4 = (char)*piVar4 + (char)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = *param_2;
  *param_2 = *param_2 >> 1 | in_CF << 7;
  *in_RAX = (byte)(CONCAT11((bVar2 & 1) != 0,*in_RAX) >> 7) | *in_RAX << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

