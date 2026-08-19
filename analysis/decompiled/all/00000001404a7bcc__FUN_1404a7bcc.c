// Function: FUN_1404a7bcc
// Addr: 1404a7bcc
// Size: 1 bytes


void FUN_1404a7bcc(char *param_1,char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  char cVar5;
  uint *in_RAX;
  char *pcVar4;
  char cVar6;
  char cVar7;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  cVar6 = (char)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar2 = *in_RAX;
  bVar3 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  *(char *)(unaff_RBP + -0x6a76fff6) =
       *(char *)(unaff_RBP + -0x6a76fff6) + '\n' + CARRY1((byte)uVar2,bVar3);
  cVar5 = (char)((ulonglong)in_RAX >> 8) + cVar6;
  pcVar4 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar5,bVar3));
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    *param_1 = *param_1 + cVar5;
    *param_2 = *param_2 + cVar6;
    *pcVar4 = *pcVar4 + bVar3;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pcVar4 = (char *)(CONCAT71((int7)((ulonglong)pcVar4 >> 8),bVar3) ^ 0x13);
  *pcVar4 = *pcVar4 + cVar7;
  bVar3 = (byte)pcVar4 | *(byte *)(ulonglong)(uint)(int)(short)pcVar4;
  uVar2 = CONCAT22(cVar5 >> 7,CONCAT11(0x98,bVar3));
  bVar3 = bVar3 | *(byte *)(ulonglong)uVar2;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar3);
  pcVar4 = (char *)(ulonglong)uVar2;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
  *pbVar1 = *pbVar1 ^ unaff_BH;
  *param_1 = *param_1 + -0x68;
  *pcVar4 = *pcVar4 + bVar3;
  *pcVar4 = *pcVar4 + cVar7;
  bVar3 = bVar3 | *(byte *)(ulonglong)(uint)(int)(short)uVar2;
  uVar2 = CONCAT22(0xff,CONCAT11(0x98,bVar3));
  bVar3 = bVar3 | *(byte *)(ulonglong)uVar2;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar3);
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
  *pbVar1 = *pbVar1 ^ unaff_BH;
  *param_1 = *param_1 + -0x68;
  *unaff_RSI = *unaff_RSI + cVar6;
  *pcVar4 = *pcVar4 + bVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

