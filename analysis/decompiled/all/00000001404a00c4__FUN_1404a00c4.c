// Function: FUN_1404a00c4
// Addr: 1404a00c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a00c4(undefined8 param_1,undefined2 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  char *pcVar4;
  
  uVar3 = in(param_2);
  pcVar4 = (char *)(ulonglong)uVar3;
  bVar1 = *param_4;
  bVar2 = (byte)uVar3;
  *param_4 = *param_4 + bVar2;
  *unaff_RSI = *unaff_RSI + bVar2 + CARRY1(bVar1,bVar2);
  *pcVar4 = *pcVar4 + (char)param_2;
  pcVar4[in_FS_OFFSET] = pcVar4[in_FS_OFFSET] | bVar2;
  pcVar4[unaff_RDI] = pcVar4[unaff_RDI] + (char)((ushort)param_2 >> 8);
  *pcVar4 = *pcVar4 + (char)param_2;
  uRam00000001b44f00e4 = uRam00000001b44f00e4 & uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

