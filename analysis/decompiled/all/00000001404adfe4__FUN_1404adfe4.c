// Function: FUN_1404adfe4
// Addr: 1404adfe4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adfe4(char *param_1,char *param_2)

{
  undefined1 *puVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar5;
  byte bVar6;
  int in_EAX;
  uint uVar7;
  byte *pbVar8;
  int unaff_EBX;
  int unaff_ESP;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  int *unaff_RSI;
  bool bVar10;
  byte bVar4;
  uint *puVar9;
  
  cRamdefc0012a27d0012 = (char)in_EAX + '4';
  *param_1 = *param_1 + (char)unaff_ESP;
  uVar7 = in_EAX + 0xe8050a36;
  pbVar8 = (byte *)(ulonglong)uVar7;
  bVar4 = (byte)uVar7;
  uVar2 = (undefined3)(uVar7 >> 8);
  cVar3 = bVar4 + *pbVar8;
  puVar9 = (uint *)(ulonglong)CONCAT31(uVar2,cVar3);
  if (SCARRY1(bVar4,*pbVar8) == cVar3 < '\0') {
    *puVar9 = *puVar9 & CONCAT31(uVar2,cVar3);
    *(char *)puVar9 = (char)*puVar9 + cVar3;
    puVar1 = (undefined1 *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x6969ffee);
    *puVar1 = *puVar1;
    pbVar8 = (byte *)(ulonglong)CONCAT31(uVar2,cVar3 + (char)(uVar7 >> 8));
  }
  else {
    bVar5 = cVar3 + (char)*puVar9 + CARRY1(bVar4,*pbVar8);
    pbVar8 = (byte *)(ulonglong)CONCAT31(uVar2,bVar5);
    out((short)param_2,bVar5);
    bVar4 = *pbVar8;
    bVar6 = *pbVar8;
    bRam0021004adf080012 = bVar5;
    *pbVar8 = *pbVar8 + bVar5;
    if (SCARRY1(bVar6,bVar5) != (char)*pbVar8 < '\0') {
      bVar6 = bVar5 + *pbVar8 + CARRY1(bVar4,bVar5);
      pbVar8 = (byte *)(ulonglong)CONCAT31(uVar2,bVar6);
      out((short)param_2,bVar6);
      bVar10 = CARRY1(*pbVar8,bVar6);
      bVar4 = *pbVar8;
      bRam0021004adf080012 = bVar6;
      *pbVar8 = *pbVar8 + bVar6;
      if (SCARRY1(bVar4,bVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar4 = bVar6 + *pbVar8;
      cVar3 = bVar4 + bVar10;
      if ((SCARRY1(bVar6,*pbVar8) != SCARRY1(bVar4,bVar10)) != cVar3 < '\0') {
        uVar7 = CONCAT31(uVar2,cVar3 + *(char *)(ulonglong)CONCAT31(uVar2,cVar3) +
                               (CARRY1(bVar6,*pbVar8) || CARRY1(bVar4,bVar10)));
        *unaff_RSI = *unaff_RSI + unaff_EBX;
        *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *unaff_RSI = *unaff_RSI + unaff_ESP;
  *(byte *)unaff_RSI =
       (char)*unaff_RSI +
       ((byte)((ulonglong)pbVar8 >> 8) | (byte)((uint)*(undefined4 *)pbVar8 >> 8));
  *unaff_RSI = *unaff_RSI + unaff_EBP;
  *param_2 = *param_2 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

