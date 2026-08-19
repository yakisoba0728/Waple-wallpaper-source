// Function: FUN_1404ad4dc
// Addr: 1404ad4dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad4dd) overlaps instruction at (ram,0x0001404ad4dc)
    */

void FUN_1404ad4dc(longlong param_1,char *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  int *piVar6;
  uint uVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *puVar9;
  uint unaff_EBP;
  char *pcVar5;
  char *pcVar8;
  
  piVar6 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'p');
  puVar1 = (undefined1 *)(ulonglong)(uint)((int)&stack0x00000000 + *(int *)((longlong)piVar6 + 2));
  do {
    puVar9 = puVar1;
    *(int **)(puVar9 + -8) = piVar6;
    while( true ) {
      cVar2 = (char)piVar6;
      *(char *)piVar6 = (char)*piVar6 + cVar2;
      uVar4 = (uint)piVar6;
      uRam00000001744fd4ec = uRam00000001744fd4ec & uVar4;
      if (param_1 + -1 == 0 || cVar2 == '\0') {
        *piVar6 = *piVar6 + uVar4;
        uVar7 = (uint)(param_1 + -1);
        pcVar8 = (char *)(ulonglong)(uVar7 + unaff_EBP);
        *piVar6 = *piVar6 + uVar4 + (uint)CARRY4(uVar7,unaff_EBP);
        bVar3 = cVar2 - 0x2c;
        pcVar5 = (char *)CONCAT71((int7)((ulonglong)piVar6 >> 8),bVar3);
        *pcVar8 = *pcVar8 + (char)(puVar9 + -8);
        *param_2 = *param_2 + bVar3;
        *pcVar5 = *pcVar5 + bVar3;
        bVar3 = CARRY1(bVar3 ^ 0xc,(byte)((ulonglong)piVar6 >> 8));
        *(undefined **)(puVar9 + -0x10) = &UNK_1404ad506;
        piVar6 = (int *)func_0x0001294bd517();
        *piVar6 = *piVar6 + (int)piVar6 + (uint)bVar3;
        bVar3 = (char)piVar6 - 0x2c;
        pcVar5 = (char *)CONCAT71((int7)((ulonglong)piVar6 >> 8),bVar3);
        *pcVar8 = *pcVar8 + (char)(puVar9 + -8);
        *pcVar5 = *pcVar5 + bVar3;
        bVar3 = CARRY1(bVar3,(byte)((ulonglong)piVar6 >> 8));
        *(undefined **)(puVar9 + -0x10) = &UNK_1404ad516;
        piVar6 = (int *)func_0x0001294bd527();
        *piVar6 = *piVar6 + (int)piVar6 + (uint)bVar3;
        *pcVar8 = *pcVar8 + (char)piVar6 + -0x2c;
        if ((POPCOUNT(*pcVar8) & 1U) == 0) {
          pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0xc);
          *pcVar5 = *pcVar5 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      piVar6 = (int *)(ulonglong)(uVar4 + 0x6620a00);
      param_1 = param_1 + -2;
      puVar1 = puVar9 + -8;
      if (param_1 != 0 && uVar4 + 0x6620a00 != 0) break;
      if (!SCARRY4(uVar4,0x6620a00)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  } while( true );
}

