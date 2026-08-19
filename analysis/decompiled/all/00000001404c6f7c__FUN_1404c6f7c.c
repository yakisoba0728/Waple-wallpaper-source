// Function: FUN_1404c6f7c
// Addr: 1404c6f7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6f7c(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  byte *pbVar5;
  byte bVar7;
  undefined6 uVar8;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte *pbVar6;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar7 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(unaff_RDI + param_1);
  bVar3 = (byte)in_RAX;
  cVar2 = (char)((ulonglong)in_RAX >> 8) * '\x02';
  pbVar5 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar2,bVar3));
  *pbVar5 = *pbVar5 | bVar3;
  *(char *)(unaff_RBP + param_1) = *(char *)(unaff_RBP + param_1) + cVar2;
  *(undefined1 *)(CONCAT62(uVar8,CONCAT11(bVar7,(char)param_2)) + -0x4d21ffd1) = 0;
  pcVar1 = (char *)(unaff_RSI + 0x801004c + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + bVar3;
  uVar4 = (int)pbVar5 + *(int *)pbVar5;
  pbVar6 = (byte *)(ulonglong)uVar4;
  pbVar5 = (byte *)(CONCAT62(uVar8,CONCAT11(bVar7,(char)param_2)) + -0x3ffd1ffc);
  *pbVar5 = *pbVar5 | (byte)(uVar4 >> 8);
  bVar3 = (byte)uVar4;
  *pbVar6 = *pbVar6 + bVar3;
  uRam0000000194516fa8 = uRam0000000194516fa8 & uVar4;
  verr();
  *pbVar6 = *pbVar6 ^ bVar3;
  if ((POPCOUNT(*pbVar6) & 1U) != 0) {
    *pbVar6 = *pbVar6 ^ bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

