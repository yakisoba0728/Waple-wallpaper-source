// Function: FUN_1404b71fc
// Addr: 1404b71fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7279) overlaps instruction at (ram,0x0001404b7278)
    */

void FUN_1404b71fc(char *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  undefined3 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  uint *puVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  undefined6 uVar13;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  char *unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  char *pcVar6;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  cVar10 = (char)param_2;
  cVar4 = (char)in_RAX + 'q';
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar4);
  *param_4 = *param_4;
  *unaff_RSI = *unaff_RSI + cVar4;
  *pcVar6 = *pcVar6 + cVar4;
  *param_2 = *param_2 + 0x67fffdd9;
  cVar9 = (char)((ulonglong)param_1 >> 8);
  cRam0000000098000253 = cRam0000000098000253 + cVar9;
  pbVar1 = (byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x2b001c54);
  bVar12 = bVar11 + *pbVar1;
  pcVar6 = unaff_RSI + 1;
  cVar4 = *unaff_RSI;
  puVar7 = (uint *)CONCAT71(0x980002,cVar4);
  bVar8 = (byte)param_1;
  if (!SBORROW1('\'',CARRY1(bVar11,*pbVar1))) {
    *param_1 = *param_1 + '\x02';
    *(byte *)puVar7 = (char)*puVar7 + bVar8;
    *(char *)puVar7 = (char)*puVar7 + cVar4;
    uVar5 = (uint)puVar7 & *(uint *)CONCAT62(uVar13,CONCAT11(bVar12,cVar10));
    pcVar2 = (char *)((ulonglong)uVar5 - 0x67fffdd9);
    *pcVar2 = *pcVar2 + unaff_BH;
    *(uint *)CONCAT62(uVar13,CONCAT11(bVar12,cVar10)) =
         *(int *)CONCAT62(uVar13,CONCAT11(bVar12,cVar10)) - uVar5;
    pcVar2 = (char *)((ulonglong)uVar5 + 0x2c);
    *pcVar2 = *pcVar2 + cVar9;
    uVar3 = (undefined3)(uVar5 >> 8);
    cVar4 = *pcVar6;
    pcVar6 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
    if (!SBORROW1((char)uVar5,
                  CARRY1(bVar12,*(byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x2b001c54)))) {
      *param_1 = *param_1 + (char)(uVar5 >> 8);
      *pcVar6 = *pcVar6 + cVar4;
      pcVar6[-0x4affe3ac] = pcVar6[-0x4affe3ac] + cVar10;
      bVar11 = bRam4900134901004b70;
      puVar7 = (uint *)(ulonglong)CONCAT31(uVar3,bRam4900134901004b70);
      *puVar7 = *puVar7 | CONCAT31(uVar3,bRam4900134901004b70);
      pcVar6 = (char *)((ulonglong)CONCAT31(uVar3,(bVar11 | (byte)*puVar7) ^ bVar8) - 0x57dffff3);
      *pcVar6 = *pcVar6 - unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LocalDescriptorTableRegister(*(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *(char *)puVar7 = cVar10;
  *pcVar6 = *pcVar6 + bVar8;
  *puVar7 = *puVar7 + unaff_EBP;
  cVar9 = *(char *)CONCAT44(unaff_0000003c,unaff_EDI);
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) = *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + cVar4;
  if (param_1 == (char *)0x1 || *(char *)CONCAT44(unaff_0000003c,unaff_EDI) == '\0') {
    if (SCARRY1(cVar9,cVar4)) {
      halt_baddata();
    }
    *(char *)puVar7 = (char)*puVar7 + cVar4;
  }
  *puVar7 = *puVar7 & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

