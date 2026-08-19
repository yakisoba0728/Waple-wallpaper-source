// Function: FUN_1404a7c2c
// Addr: 1404a7c2c
// Size: 1 bytes


void FUN_1404a7c2c(char *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 in_RAX;
  byte *pbVar3;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  char *pcVar4;
  
  pbVar3 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x98,(byte)in_RAX));
  bVar2 = (byte)in_RAX | *pbVar3;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)pbVar3 >> 8),bVar2);
  pbVar3 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
  *pbVar3 = *pbVar3 ^ unaff_BH;
  *param_1 = *param_1 + -0x68;
  *pcVar4 = *pcVar4 + bVar2;
  *pcVar4 = *pcVar4 + (char)((ulonglong)param_2 >> 8);
  bVar2 = bVar2 | *(byte *)(ulonglong)(uint)(int)(short)pcVar4;
  uVar1 = CONCAT22(0xff,CONCAT11(0x98,bVar2));
  bVar2 = bVar2 | *(byte *)(ulonglong)uVar1;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar2);
  pbVar3 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
  *pbVar3 = *pbVar3 ^ unaff_BH;
  *param_1 = *param_1 + -0x68;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *pcVar4 = *pcVar4 + bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

