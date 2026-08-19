// Function: FUN_1404a7c08
// Addr: 1404a7c08
// Size: 1 bytes


void FUN_1404a7c08(char *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar6;
  byte *in_RAX;
  uint *puVar4;
  char *pcVar5;
  char cVar7;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  uint unaff_EDI;
  byte *pbVar3;
  
  *(uint *)(in_RAX + 0xe) = *(uint *)(in_RAX + 0xe) & unaff_EDI;
  in_RAX[-0x2c] = in_RAX[-0x2c] + unaff_BH;
  bVar2 = (byte)in_RAX | *in_RAX;
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  cVar6 = (char)((ulonglong)in_RAX >> 8);
  cVar7 = (char)((ulonglong)param_2 >> 8) - cVar6;
  *pbVar3 = *pbVar3 | bVar2;
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar6,bVar2));
  *puVar4 = *puVar4 | (uint)puVar4;
  uVar1 = (uint)puVar4 + 0xe9fff48c;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + cVar7;
  bVar2 = (byte)uVar1 | *(byte *)(ulonglong)(uint)(int)(short)uVar1;
  uVar1 = CONCAT22((char)(uVar1 >> 8) >> 7,CONCAT11(0x98,bVar2));
  bVar2 = bVar2 | *(byte *)(ulonglong)uVar1;
  uVar1 = CONCAT31((int3)(uVar1 >> 8),bVar2);
  pcVar5 = (char *)(ulonglong)uVar1;
  pbVar3 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
  *pbVar3 = *pbVar3 ^ unaff_BH;
  *param_1 = *param_1 + -0x68;
  *pcVar5 = *pcVar5 + bVar2;
  *pcVar5 = *pcVar5 + cVar7;
  bVar2 = bVar2 | *(byte *)(ulonglong)(uint)(int)(short)uVar1;
  uVar1 = CONCAT22(0xff,CONCAT11(0x98,bVar2));
  bVar2 = bVar2 | *(byte *)(ulonglong)uVar1;
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar2);
  pbVar3 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4a);
  *pbVar3 = *pbVar3 ^ unaff_BH;
  *param_1 = *param_1 + -0x68;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *pcVar5 = *pcVar5 + bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

