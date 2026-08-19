// Function: FUN_1404c5cd8
// Addr: 1404c5cd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5cd8(longlong param_1,byte param_2)

{
  byte *pbVar1;
  uint uVar2;
  char *in_RAX;
  char *pcVar3;
  char *pcVar4;
  longlong unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  
  in_RAX[unaff_RSI] = in_RAX[unaff_RSI] + param_2;
  pbVar1 = (byte *)(in_RAX + 0x2f);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  cRam00000001084c8c2e = cRam00000001084c8c2e + (char)((ulonglong)param_1 >> 8);
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0 || cRam00000001084c8c2e == '\0') {
    *pcVar3 = *pcVar3 + (char)((ulonglong)in_RAX >> 8);
    *in_RAX = *in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (uint)in_RAX | 0x38002f13;
  *pcVar3 = *pcVar3 + unaff_R12B;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (byte)uVar2;
  pcVar4 = (char *)CONCAT62((int6)((ulonglong)pcVar3 >> 0x10),
                            CONCAT11((char)((ulonglong)pcVar3 >> 8) + *unaff_RDI +
                                     CARRY1((byte)uVar2,param_2),(char)pcVar3));
  cRam00000001784c8c58 = cRam00000001784c8c58 + (char)pcVar3;
  *pcVar4 = *pcVar4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

