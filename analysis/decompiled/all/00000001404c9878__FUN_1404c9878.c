// Function: FUN_1404c9878
// Addr: 1404c9878
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9878(char *param_1,byte param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  byte *pbVar4;
  char *pcVar5;
  char unaff_BH;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  char unaff_R12B;
  char in_CF;
  uint *puVar6;
  
  pbVar4 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + param_2 + in_CF,(byte)in_RAX))
  ;
  *pbVar4 = *pbVar4 ^ (byte)in_RAX;
  param_1[unaff_RSI] = param_1[unaff_RSI] | param_2;
  *pbVar4 = *pbVar4 + unaff_BH;
  pcVar5 = (char *)(unaff_RDI & 0xffffffff);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar5 = *pcVar5 + (char)pcVar5;
  *pcVar5 = *pcVar5 + (char)pcVar5;
  param_1[-0x7bffcdc8] = param_1[-0x7bffcdc8] + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + param_3;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + param_2;
  uVar3 = (uint)pbVar4 & 0x20011400;
  pcVar5 = (char *)(ulonglong)uVar3;
  cVar1 = *pcVar5;
  *pcVar5 = *pcVar5 + (char)param_1;
  if (!SCARRY1(cVar1,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = CONCAT31((int3)(uVar3 >> 8),*pcVar5);
  uVar3 = (uVar3 + 0x42830642) - (uint)(0x9ffff98b < uVar3);
  bVar2 = (byte)uVar3 ^ *(byte *)(ulonglong)uVar3;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2);
  puVar6 = (uint *)(ulonglong)uVar3;
  *puVar6 = *puVar6 & uVar3;
  *(byte *)puVar6 = (char)*puVar6 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

