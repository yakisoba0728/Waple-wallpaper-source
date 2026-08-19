// Function: FUN_1404b71a8
// Addr: 1404b71a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b71a8(byte *param_1,uint *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar5;
  longlong in_RAX;
  byte bVar6;
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  byte bVar4;
  
  pbVar1 = (byte *)(unaff_RDI + 4 + unaff_RBX * 2);
  bVar3 = *pbVar1;
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  bVar4 = *pbVar1;
  *pbVar1 = (bVar4 - bVar6) - in_CF;
  *(char *)(in_RAX + 4) =
       *(char *)(in_RAX + 4) + (char)((ulonglong)in_RAX >> 8) +
       (bVar3 < bVar6 || (byte)(bVar4 - bVar6) < in_CF);
  *param_1 = *param_1 | bVar6;
  uVar5 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam0900020921004b70) & *param_2;
  pcVar2 = (char *)(ulonglong)uVar5 + unaff_RSI * 2 + 0x821004b;
  *pcVar2 = *pcVar2 + 'T';
  pbVar1 = (byte *)((ulonglong)CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + *(char *)(ulonglong)uVar5)
                   + 0x2c);
  *pbVar1 = *pbVar1 | 0x54;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

