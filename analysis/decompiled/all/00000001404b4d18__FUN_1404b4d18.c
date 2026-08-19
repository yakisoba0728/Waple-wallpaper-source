// Function: FUN_1404b4d18
// Addr: 1404b4d18
// Size: 1 bytes


void FUN_1404b4d18(undefined8 param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  uint uVar4;
  byte *pbVar6;
  byte bVar8;
  char cVar9;
  undefined6 uVar10;
  uint unaff_EBX;
  char unaff_SPL;
  bool bVar11;
  uint *puVar5;
  char *pcVar7;
  
  uVar10 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar3 = in_EAX + 0xb0000a64;
  puVar5 = (uint *)(ulonglong)uVar3;
  *param_2 = *param_2 & unaff_EBX;
  cVar9 = (char)((ulonglong)param_1 >> 8) + (char)(uVar3 >> 8);
  *param_2 = *param_2 & unaff_EBX;
  *(byte *)puVar5 = (byte)*puVar5 + (char)param_2;
  bVar8 = (byte)param_1 & (byte)*param_2;
  *puVar5 = *puVar5 & uVar3;
  uVar4 = *puVar5;
  *(byte *)puVar5 = (byte)*puVar5 + (byte)uVar3;
  pbVar6 = (byte *)CONCAT71((uint7)(uint3)(uVar3 >> 8),0x21);
  bVar11 = 0x21 < *pbVar6 || (byte)(0x21 - *pbVar6) < CARRY1((byte)uVar4,(byte)uVar3);
  uVar4 = in(0x21);
  bVar1 = (byte)uVar4 - *(byte *)(ulonglong)uVar4;
  cVar2 = bVar1 - bVar11;
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar2);
  *(char *)param_2 =
       (char)*param_2 + (char)(uVar4 >> 8) +
       ((byte)uVar4 < *(byte *)(ulonglong)uVar4 || bVar1 < bVar11);
  *(char *)CONCAT62(uVar10,CONCAT11(cVar9,bVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(cVar9,bVar8)) + unaff_SPL;
  *pcVar7 = *pcVar7 + bVar8;
  *pcVar7 = *pcVar7 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

