// Function: FUN_1404c7af4
// Addr: 1404c7af4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c7b0a) */

void FUN_1404c7af4(char *param_1,longlong param_2,ulonglong *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint *in_RAX;
  char cVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  char in_CF;
  byte abStackX_8 [32];
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBX + 0x30) = *(char *)(unaff_RBX + 0x30) + (char)unaff_RBX + in_CF;
  param_1[0x5b] = param_1[0x5b] + cVar6;
  bVar4 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX ^ bVar4;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  *(byte *)in_RAX = (byte)*in_RAX + (char)param_2;
  *(byte *)in_RAX = (byte)*in_RAX ^ bVar4;
  pbVar2 = (byte *)(unaff_RDI + 1);
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  *(byte *)in_RAX = (byte)*in_RAX ^ bVar4;
  if ((byte)*in_RAX == 0) {
    *param_3 = *param_3 ^ (ulonglong)param_3;
    *in_RAX = *in_RAX ^ (uint)in_RAX;
    iRam0000000141687bf4 = iRam0000000141687bf4 - (int)&stack0x00000000;
    uVar5 = (uint)in_RAX ^ *in_RAX | 0x9e00bf0;
    *pbVar2 = *pbVar2 << 1 | (char)*pbVar2 < '\0';
    *unaff_RSI = *unaff_RSI >> 1;
    pcVar1 = (char *)((ulonglong)uVar5 + 0x21000001);
    *pcVar1 = *pcVar1 + (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  uVar3 = in((short)param_2);
  *(undefined4 *)pbVar2 = uVar3;
  *(byte *)in_RAX = (byte)*in_RAX ^ bVar4;
  *(char *)(unaff_RBP + 0x30) = *(char *)(unaff_RBP + 0x30) - (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)((longlong)unaff_RDI + unaff_RBP * 2 + 0x54);
  *pcVar1 = *pcVar1 + cVar6;
  *param_1 = *param_1 + bVar4;
  abStackX_8[(longlong)unaff_RSI] = abStackX_8[(longlong)unaff_RSI] + (char)param_2;
  LocalDescriptorTableRegister(*(undefined2 *)(param_2 * 3));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

