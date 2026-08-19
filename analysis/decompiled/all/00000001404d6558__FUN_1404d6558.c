// Function: FUN_1404d6558
// Addr: 1404d6558
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d6569) */

void FUN_1404d6558(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  uint in_EAX;
  uint uVar5;
  byte *pbVar7;
  byte bVar10;
  longlong lVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  uint *unaff_RSI;
  bool bVar11;
  bool bVar12;
  uint *puVar6;
  int *piVar8;
  
  uVar5 = in_EAX | 0xd001134;
  puVar6 = (uint *)(ulonglong)uVar5;
  lVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),9);
  bVar3 = (byte)uVar5;
  if (param_1 == 1 || uVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar7 = (byte *)((longlong)puVar6 + lVar9);
  *pbVar7 = *pbVar7 | 9;
  if (*pbVar7 == 0) {
    bVar10 = (byte)((ulonglong)param_2 >> 8);
    bVar11 = CARRY1(bVar3,bVar10);
    uVar2 = (undefined3)(uVar5 >> 8);
    bVar3 = bVar3 + bVar10;
    puVar6 = (uint *)(ulonglong)CONCAT31(uVar2,bVar3);
    if (-1 < (char)bVar3) {
      uVar5 = *puVar6;
      *(byte *)puVar6 = (byte)*puVar6 + bVar3;
      if (!CARRY1((byte)uVar5,bVar3) && (byte)*puVar6 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((char)(bVar3 + bVar10) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar5 = CONCAT31(uVar2,bVar3 + bVar10) + 0x12010b00;
      pbVar7 = (byte *)(ulonglong)uVar5;
      bVar3 = (byte)uVar5;
      pbVar7[(longlong)unaff_RSI * 2] = pbVar7[(longlong)unaff_RSI * 2] + bVar3;
      iVar1 = *(int *)(pbVar7 + 2);
      *pbVar7 = *pbVar7 ^ bVar3;
      *pbVar7 = *pbVar7 + (char)(uVar5 >> 8);
      *(byte *)unaff_RSI = (byte)*unaff_RSI >> 1;
      *pbVar7 = *pbVar7 + (char)((uint)((int)lVar9 + iVar1) >> 8);
      *pbVar7 = *pbVar7 + bVar3;
      *unaff_RSI = *unaff_RSI & unaff_EBP;
      *pbVar7 = *pbVar7 | bVar3;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
    *(byte *)puVar6 = (byte)*puVar6 + bVar3;
    bVar11 = false;
  }
  uVar5 = *puVar6 + (uint)puVar6;
  bVar12 = CARRY4(*puVar6,(uint)puVar6) || CARRY4(uVar5,(uint)bVar11);
  *puVar6 = uVar5 + bVar11;
  bVar3 = (byte)puVar6 - 0x3c;
  cVar4 = bVar3 + bVar12;
  piVar8 = (int *)CONCAT71((int7)((ulonglong)puVar6 >> 8),cVar4);
  *piVar8 = (*piVar8 - (int)piVar8) - (uint)(0x3b < (byte)puVar6 || CARRY1(bVar3,bVar12));
  pbVar7 = (byte *)((longlong)piVar8 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pbVar7 = *pbVar7 | (byte)((ulonglong)puVar6 >> 8);
  *(char *)(piVar8 + 0x8401359) = (char)piVar8[0x8401359] + unaff_BH + '\t';
  *(char *)piVar8 = (char)*piVar8 + cVar4;
  *(char *)((longlong)piVar8 + 0x13) = *(char *)((longlong)piVar8 + 0x13) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

