// Function: FUN_1404b59a4
// Addr: 1404b59a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b59a4(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  char cVar9;
  char *in_RAX;
  undefined7 uVar10;
  char *pcVar6;
  longlong lVar7;
  byte *pbVar8;
  char cVar11;
  char unaff_BL;
  
  cVar11 = (char)((ulonglong)param_2 >> 8);
  do {
    uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar3 = (char)in_RAX + 0x34;
    bVar3 = (bVar3 * '\x02' - *(char *)CONCAT71(uVar10,bVar3 * '\x02')) - CARRY1(bVar3,bVar3);
    pcVar6 = (char *)CONCAT71(uVar10,bVar3);
    pcVar6[0x4b] = unaff_BL;
    cVar4 = (char)((ulonglong)in_RAX >> 8);
    cRam00000000ba2f001a = cRam00000000ba2f001a + cVar4;
    *pcVar6 = *pcVar6 + bVar3;
    lVar7 = CONCAT71(uVar10,(bVar3 * '\x02' - *(char *)CONCAT71(uVar10,bVar3 * '\x02')) -
                            CARRY1(bVar3,bVar3));
    *(char *)(lVar7 + 0x4b) = unaff_BL;
    cRam00000000ba2f001a = cRam00000000ba2f001a + cVar4;
    uVar5 = (int)lVar7 + 0x54050002;
    pbVar8 = (byte *)(ulonglong)uVar5;
    bVar3 = (byte)uVar5;
    uVar2 = (undefined3)(uVar5 >> 8);
    if ((char)*pbVar8 <= (char)bVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar4 = ((bVar3 - *pbVar8) - *(char *)(ulonglong)CONCAT31(uVar2,bVar3 - *pbVar8)) -
            (bVar3 < *pbVar8);
    in_RAX = (char *)(ulonglong)CONCAT31(uVar2,cVar4);
    pcVar6 = (char *)CONCAT62(0xba2f,bVar3 ^ 0x1a);
    cVar9 = (char)(uVar5 >> 8);
    *pcVar6 = *pcVar6 + cVar9;
    *in_RAX = *in_RAX + cVar4;
    cVar4 = *in_RAX;
    *in_RAX = *in_RAX + cVar11;
    cVar1 = *in_RAX;
    *param_2 = *param_2;
  } while (SCARRY1(cVar4,cVar11) == cVar1 < '\0');
  pcVar6 = (char *)CONCAT62(0xba2f,bVar3 ^ 0x1a);
  *pcVar6 = *pcVar6 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

