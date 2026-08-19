// Function: FUN_1404b7218
// Addr: 1404b7218
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b7279) overlaps instruction at (ram,0x0001404b7278)
    */

void FUN_1404b7218(char *param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined3 uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 in_RAX;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  char *unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  bool in_OF;
  
  pcVar8 = unaff_RSI + 1;
  cVar3 = *unaff_RSI;
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  bVar9 = (byte)param_1;
  if (!in_OF) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    *(byte *)puVar7 = (char)*puVar7 + bVar9;
    *(char *)puVar7 = (char)*puVar7 + cVar3;
    uVar6 = (uint)puVar7 & *param_2;
    pcVar1 = (char *)((ulonglong)uVar6 - 0x67fffdd9);
    *pcVar1 = *pcVar1 + unaff_BH;
    *param_2 = *param_2 - uVar6;
    pcVar1 = (char *)((ulonglong)uVar6 + 0x2c);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
    uVar4 = (undefined3)(uVar6 >> 8);
    cVar3 = *pcVar8;
    pcVar8 = (char *)(ulonglong)CONCAT31(uVar4,cVar3);
    if (!SBORROW1((char)uVar6,
                  CARRY1((byte)((ulonglong)param_2 >> 8),
                         *(byte *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x2b001c54)))) {
      *param_1 = *param_1 + (char)(uVar6 >> 8);
      *pcVar8 = *pcVar8 + cVar3;
      pcVar8[-0x4affe3ac] = pcVar8[-0x4affe3ac] + (char)param_2;
      bVar5 = bRam4900134901004b70;
      puVar7 = (uint *)(ulonglong)CONCAT31(uVar4,bRam4900134901004b70);
      *puVar7 = *puVar7 | CONCAT31(uVar4,bRam4900134901004b70);
      pcVar8 = (char *)((ulonglong)CONCAT31(uVar4,(bVar5 | (byte)*puVar7) ^ bVar9) - 0x57dffff3);
      *pcVar8 = *pcVar8 - unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  LocalDescriptorTableRegister(*(undefined2 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *(char *)puVar7 = (char)param_2;
  *pcVar8 = *pcVar8 + bVar9;
  *puVar7 = *puVar7 + unaff_EBP;
  cVar2 = *(char *)CONCAT44(unaff_0000003c,unaff_EDI);
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) = *(char *)CONCAT44(unaff_0000003c,unaff_EDI) + cVar3;
  if (param_1 == (char *)0x1 || *(char *)CONCAT44(unaff_0000003c,unaff_EDI) == '\0') {
    if (SCARRY1(cVar2,cVar3)) {
      halt_baddata();
    }
    *(char *)puVar7 = (char)*puVar7 + cVar3;
  }
  *puVar7 = *puVar7 & unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

