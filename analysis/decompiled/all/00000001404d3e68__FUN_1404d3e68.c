// Function: FUN_1404d3e68
// Addr: 1404d3e68
// Size: 1 bytes


void FUN_1404d3e68(char *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar6;
  int in_EAX;
  uint uVar4;
  char unaff_BL;
  byte unaff_BH;
  byte bVar7;
  undefined6 unaff_0000001a;
  uint unaff_EDI;
  byte *pbVar8;
  char *pcVar5;
  
  uVar4 = in_EAX + 0xd0000554;
  pcVar5 = (char *)(ulonglong)uVar4;
  bVar7 = unaff_BH ^ *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar7,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar7,unaff_BL)) + unaff_BL;
  uVar3 = *(uint *)CONCAT62(unaff_0000001a,CONCAT11(bVar7,unaff_BL));
  pcVar5[0x21004a36] = pcVar5[0x21004a36] + (char)(uVar4 >> 8);
  *(char *)param_2 = (char)*param_2 + (char)uVar4;
  *pcVar5 = *pcVar5 + (char)uVar4;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar7,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar7,unaff_BL)) + unaff_BL;
  pbVar8 = (byte *)(ulonglong)
                   (unaff_EDI ^ uVar3 ^ *(uint *)CONCAT62(unaff_0000001a,CONCAT11(bVar7,unaff_BL)));
  pbVar1 = (byte *)((ulonglong)(in_EAX + 0xb32d554U) + 0x11004a36);
  bVar2 = *pbVar1;
  bVar6 = (byte)(in_EAX + 0xb32d554U >> 8);
  *pbVar1 = *pbVar1 + bVar6;
  *param_2 = (*param_2 - (int)param_1) - (uint)CARRY1(bVar2,bVar6);
  *param_1 = *param_1 + unaff_BL;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar7,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(bVar7,unaff_BL)) + (int)param_2;
  *pbVar8 = *pbVar8 << 1 | (char)*pbVar8 < '\0';
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

