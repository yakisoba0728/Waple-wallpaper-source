// Function: FUN_1404bcc8c
// Addr: 1404bcc8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bcc8e) overlaps instruction at (ram,0x0001404bcc8c)
    */

void FUN_1404bcc8c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  char cVar8;
  char cVar9;
  char cVar10;
  undefined6 uVar11;
  undefined1 uVar12;
  char cVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 unaff_EBX;
  undefined4 unaff_0000001c;
  undefined1 *puVar17;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  uint *unaff_RDI;
  char *pcVar7;
  undefined8 *puVar18;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar14 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)((ulonglong)param_2 >> 8);
  uVar12 = (undefined1)param_2;
  uVar11 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar8 = (char)param_1;
  uVar16 = CONCAT31((int3)((uint)unaff_EBX >> 8),0x23);
  *param_1 = *param_1 + '#';
  cVar9 = '#';
  pcVar7 = (char *)(CONCAT44(unaff_0000001c,uVar16) + 0x4b +
                   CONCAT62(uVar11,CONCAT11(0x23,cVar8)) * 8);
  *pcVar7 = *pcVar7 + cVar13;
  *(char *)CONCAT62(uVar11,CONCAT11(0x23,cVar8)) =
       *(char *)CONCAT62(uVar11,CONCAT11(0x23,cVar8)) + (char)in_EAX;
  puVar20 = (undefined1 *)register0x00000020;
  do {
    uVar3 = in_EAX ^ *unaff_RDI;
    *(char *)CONCAT44(unaff_0000001c,uVar16) = *(char *)CONCAT44(unaff_0000001c,uVar16) + cVar13;
    *(char *)(ulonglong)uVar3 = cVar8;
    cVar10 = cVar9 + *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,uVar12)));
    puVar6 = (uint *)(puVar20 + (longlong)(ulonglong)uVar3);
    uVar4 = *puVar6;
    *puVar6 = *puVar6 + uVar16;
    uVar4 = uVar3 + 0x126013e0 + (uint)CARRY4(uVar4,uVar16);
    pcVar7 = (char *)(ulonglong)uVar4;
    puVar19 = puVar20 + -8;
    puVar17 = puVar20 + -8;
    *(char **)(puVar20 + -8) = pcVar7;
    cVar9 = (char)uVar4;
    *pcVar7 = *pcVar7 + cVar9;
    unaff_RDI[-0x1da3ff9] = unaff_RDI[-0x1da3ff9] & CONCAT22(uVar14,CONCAT11(cVar13,uVar12));
    *(uint *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,uVar12))) =
         *(int *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,uVar12))) + uVar4;
    cVar2 = cVar10 + *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,uVar12)));
    uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar2);
    if (SCARRY1(cVar10,*(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,uVar12)))) ==
        cVar2 < '\0') {
      in_EAX = uVar4 & *(uint *)(ulonglong)uVar4;
      if (in_EAX == 0) {
        *(uint **)(puVar20 + -0x10) = unaff_RDI;
        *(undefined **)(puVar20 + -0x18) = &UNK_1404bcc6a;
        func_0x00011899cce5();
        puVar18 = (undefined8 *)(puVar20 + -0x18);
        puVar21 = (undefined8 *)(puVar20 + -0x18);
        *(undefined8 **)(puVar20 + -0x18) = unaff_RBP;
        cVar2 = '\x1b';
        do {
          unaff_RBP = unaff_RBP + -1;
          puVar18 = puVar18 + -1;
          *puVar18 = *unaff_RBP;
          cVar2 = cVar2 + -1;
        } while ('\0' < cVar2);
        *(undefined1 **)(puVar20 + -0xf8) = puVar20 + -0x18;
        puVar17 = puVar20 + -0x175;
        piVar5 = (int *)0xa833007e;
        uVar16 = CONCAT31((int3)(uVar16 >> 8),(char)uVar16 - cRam00000000305400fe);
        iVar1 = uRam00000000a833007e + 0x827818;
        cRam00000000a8330001 = cRam00000000a8330001 + cVar9 + (0xff7d87e7 < uRam00000000a833007e);
        uRam00000000a833007e._0_1_ = (char)iVar1;
        uRam00000000a833007e = CONCAT31((int3)((uint)iVar1 >> 8),(char)uRam00000000a833007e + cVar8)
        ;
        goto code_r0x0001404bcc86;
      }
    }
    else {
      uVar4 = uVar4 + *(int *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,uVar12)));
      piVar5 = (int *)(ulonglong)uVar4;
      puVar21 = unaff_RBP;
      if (uVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
code_r0x0001404bcc86:
      *piVar5 = *piVar5 + 8;
      puVar6 = (uint *)((ulonglong)piVar5 ^ 0x12);
      *(int *)((longlong)puVar6 + -0x4d) = *(int *)((longlong)puVar6 + -0x4d) + (uint)puVar6;
      in_EAX = (uint)puVar6 & *puVar6;
      *(int *)((longlong)puVar21 + -0x348bffdd) =
           *(int *)((longlong)puVar21 + -0x348bffdd) - unaff_ESI;
      puVar19 = puVar17;
      unaff_RBP = puVar21;
    }
    *param_4 = *param_4 + (char)in_EAX;
    puVar20 = puVar19;
  } while( true );
}

