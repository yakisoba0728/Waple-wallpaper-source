// Function: FUN_1404c6f74
// Addr: 1404c6f74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c6f8e) overlaps instruction at (ram,0x0001404c6f8d)
    */

void FUN_1404c6f74(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined7 uVar7;
  byte *pbVar6;
  char unaff_BL;
  longlong unaff_RBP;
  byte *unaff_RSI;
  char *pcVar5;
  
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (byte)in_RAX | *unaff_RSI;
  pcVar5 = (char *)CONCAT71(uVar7,bVar2);
  *param_2 = *param_2 + (char)param_1;
  if (*param_2 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar5 = *pcVar5 + bVar2;
  cVar3 = in(8);
  pcVar5 = (char *)CONCAT71(uVar7,cVar3);
  *pcVar5 = *pcVar5 + cVar3;
  uVar4 = (uint)pcVar5 | 0x2fb2c000;
  unaff_RSI[unaff_RBP * 2 + 0x801004c] = unaff_RSI[unaff_RBP * 2 + 0x801004c] + cVar3;
  uVar4 = uVar4 + *(int *)(ulonglong)uVar4;
  pbVar6 = (byte *)(ulonglong)uVar4;
  pbVar1 = (byte *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                             CONCAT11((char)((ulonglong)param_2 >> 8) + unaff_BL,0x2f)) +
                   -0x3ffd1ffc);
  *pbVar1 = *pbVar1 | (byte)(uVar4 >> 8);
  bVar2 = (byte)uVar4;
  *pbVar6 = *pbVar6 + bVar2;
  uRam0000000194516fa8 = uRam0000000194516fa8 & uVar4;
  verr();
  *pbVar6 = *pbVar6 ^ bVar2;
  if ((POPCOUNT(*pbVar6) & 1U) != 0) {
    *pbVar6 = *pbVar6 ^ bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

