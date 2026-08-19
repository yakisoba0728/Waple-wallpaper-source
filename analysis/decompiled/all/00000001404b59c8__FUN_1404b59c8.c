// Function: FUN_1404b59c8
// Addr: 1404b59c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b59ca) overlaps instruction at (ram,0x0001404b59c8)
    */

void FUN_1404b59c8(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  uint in_EAX;
  uint uVar6;
  char cVar8;
  char *pcVar7;
  char *pcVar9;
  char cVar12;
  char unaff_BL;
  char cVar2;
  char cVar10;
  undefined6 uVar11;
  
  cVar12 = (char)((ulonglong)param_2 >> 8);
  while( true ) {
    uVar6 = in_EAX + 0x30000c54;
    *param_2 = *param_2;
    if (-0x30000c55 < (int)in_EAX) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = (undefined3)(uVar6 >> 8);
    cVar5 = ((char)uVar6 - *(char *)(ulonglong)uVar6) - (0xcffff3ab < in_EAX);
    pcVar7 = (char *)(ulonglong)CONCAT31(uVar3,cVar5);
    cVar10 = (char)((ulonglong)param_1 >> 8);
    uVar11 = (undefined6)((ulonglong)param_1 >> 0x10);
    pcVar9 = (char *)CONCAT62(uVar11,CONCAT11(cVar10 >> 9,(char)param_1));
    cVar8 = (char)(uVar6 >> 8);
    *pcVar9 = *pcVar9 + cVar8;
    *pcVar7 = *pcVar7 + cVar5;
    cVar1 = *pcVar7;
    *pcVar7 = *pcVar7 + cVar12;
    cVar2 = *pcVar7;
    *param_2 = *param_2;
    if (SCARRY1(cVar1,cVar12) != cVar2 < '\0') break;
    bVar4 = cVar5 + 0x34;
    bVar4 = (bVar4 * '\x02' - *(char *)(ulonglong)CONCAT31(uVar3,bVar4 * '\x02')) -
            CARRY1(bVar4,bVar4);
    pcVar7 = (char *)(ulonglong)CONCAT31(uVar3,bVar4);
    pcVar7[0x4b] = unaff_BL;
    cRam00000000ba2f001a = cRam00000000ba2f001a + cVar8;
    *pcVar7 = *pcVar7 + bVar4;
    uVar6 = CONCAT31(uVar3,(bVar4 * '\x02' - *(char *)(ulonglong)CONCAT31(uVar3,bVar4 * '\x02')) -
                           CARRY1(bVar4,bVar4));
    *(char *)((ulonglong)uVar6 + 0x4b) = unaff_BL;
    cRam00000000ba2f001a = cRam00000000ba2f001a + cVar8;
    uVar6 = uVar6 + 0x54050002;
    param_1 = CONCAT71(0xba2f00,(byte)uVar6 ^ 0x1a);
    in_EAX = CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 - *(char *)(ulonglong)uVar6);
  }
  pcVar7 = (char *)CONCAT62(uVar11,CONCAT11(cVar10 >> 7,(char)param_1));
  *pcVar7 = *pcVar7 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

