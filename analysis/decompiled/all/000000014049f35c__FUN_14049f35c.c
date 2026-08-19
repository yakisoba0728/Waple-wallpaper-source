// Function: FUN_14049f35c
// Addr: 14049f35c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049f3ec) overlaps instruction at (ram,0x00014049f3eb)
    */

void FUN_14049f35c(longlong param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined3 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar11;
  uint *in_RAX;
  int *piVar10;
  char *pcVar12;
  char unaff_BL;
  byte bVar13;
  undefined8 *puVar14;
  undefined1 *unaff_RSI;
  undefined1 *puVar15;
  undefined4 *puVar16;
  
  do {
    uVar7 = (int)in_RAX + 0x50000934;
    in_RAX = (uint *)(ulonglong)uVar7;
    uVar3 = SUB82(param_2,0);
    out(*unaff_RSI,uVar3);
    uVar9 = *in_RAX;
    *in_RAX = *in_RAX + uVar7;
    if (!CARRY4(uVar9,uVar7)) {
      return;
    }
    uVar9 = *in_RAX;
    *in_RAX = *in_RAX + uVar7;
    puVar15 = unaff_RSI + 1;
    unaff_RSI = unaff_RSI + 1;
  } while (SCARRY4(uVar9,uVar7) != (int)*in_RAX < 0);
  do {
    bVar13 = (byte)register0x00000020;
    *param_4 = *param_4 + bVar13;
    *(char *)in_RAX = (char)*in_RAX + (char)uVar7;
    *(char *)((longlong)in_RAX + 0x6e) = *(char *)((longlong)in_RAX + 0x6e) + (char)param_2;
    uVar9 = *in_RAX;
    *in_RAX = *in_RAX + uVar7;
    if (!CARRY4(uVar9,uVar7)) {
      *(byte *)(param_1 + (longlong)in_RAX) = *(byte *)(param_1 + (longlong)in_RAX) ^ 0xcf;
code_r0x00014049f3e3:
      puVar1 = in_RAX + -0xc3fffa3;
      cVar5 = (char)in_RAX;
      *(char *)puVar1 = (char)*puVar1 + cVar5;
      if ((char)*puVar1 == '\0') {
        *param_4 = *param_4 + cVar5;
      }
      else {
        in_RAX = (uint *)(ulonglong)(byte)(cVar5 + unaff_BL);
      }
code_r0x00014049f3ed:
      *param_4 = *param_4 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar9 = *in_RAX;
    *in_RAX = *in_RAX + uVar7;
    if (SCARRY4(uVar9,uVar7) == (int)*in_RAX < 0) {
      bVar6 = *param_4;
      *param_4 = *param_4 + bVar13;
      uVar9 = uVar7 - *(uint *)((longlong)in_RAX * 2);
      uVar8 = uVar9 - CARRY1(bVar6,bVar13);
      puVar15 = (undefined1 *)
                (ulonglong)
                (((int)puVar15 - *(int *)(param_1 * 2)) -
                (uint)(uVar7 < *(uint *)((longlong)in_RAX * 2) || uVar9 < CARRY1(bVar6,bVar13)));
      cRam000000012049f9fd = cRam000000012049f9fd + (char)uVar8;
      out(*puVar15,uVar3);
      *(int *)(ulonglong)uVar8 = *(int *)(ulonglong)uVar8 + uVar8;
      piVar10 = (int *)((ulonglong)uVar8 | 0x6f);
      *piVar10 = *piVar10 + (int)piVar10;
      *param_4 = *param_4 + bVar13;
      cVar5 = (char)piVar10;
      *param_2 = *param_2 + cVar5;
      *(char *)piVar10 = (char)*piVar10 + cVar5;
      puVar16 = (undefined4 *)(puVar15 + 1);
      if ((char)*piVar10 == '\0') {
        puVar16 = (undefined4 *)(puVar15 + 5);
        out(*(undefined4 *)(puVar15 + 1),uVar3);
      }
      cVar11 = (char)(uVar8 >> 8);
      uVar4 = (undefined3)(uVar8 >> 8);
      cVar5 = cVar5 + cVar11;
      uVar9 = CONCAT31(uVar4,cVar5);
      out(*(undefined1 *)puVar16,uVar3);
      *(int *)(ulonglong)uVar9 = *(int *)(ulonglong)uVar9 + uVar9;
      piVar10 = (int *)((ulonglong)CONCAT31(uVar4,cVar5) | 0x6f);
      *piVar10 = *piVar10 + (int)piVar10;
      *param_4 = *param_4 + (byte)piVar10;
      bVar6 = (byte)piVar10 | bRam00000001468bfdaf;
      uVar9 = CONCAT31(uVar4,bVar6);
      pcVar12 = (char *)(param_1 + -1);
      if (pcVar12 == (char *)0x0 || bVar6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)(ulonglong)uVar9 = *(byte *)(ulonglong)uVar9 ^ bVar6;
      *pcVar12 = *pcVar12 + cVar11;
      uVar9 = uVar9 + 0x74050002;
      uVar4 = (undefined3)(uVar9 >> 8);
      bVar6 = (byte)uVar9 | *(byte *)(ulonglong)uVar9;
      pbVar2 = (byte *)(pcVar12 + CONCAT31(uVar4,bVar6));
      *pbVar2 = *pbVar2 ^ 0xcf;
      if (*pbVar2 == 0) {
        *param_4 = *param_4 + bVar13;
      }
      cVar5 = bVar6 + unaff_BL;
      pcVar12 = (char *)(ulonglong)CONCAT31(uVar4,cVar5);
      *param_4 = *param_4 + bVar13;
      *pcVar12 = *pcVar12 + cVar5;
      pcVar12 = pcVar12 + -0x30fffe8c;
      *pcVar12 = *pcVar12 + cVar5;
      if (*pcVar12 == '\0') {
        *param_4 = *param_4 + bVar13;
      }
      cVar5 = cVar5 + unaff_BL;
      in_RAX = (uint *)(ulonglong)CONCAT31(uVar4,cVar5);
      *param_4 = *param_4 + bVar13;
      *param_2 = *param_2 + cVar5;
      *(char *)in_RAX = (char)*in_RAX + cVar5;
      if ((char)*in_RAX != '\0') goto code_r0x00014049f3e3;
      goto code_r0x00014049f3ed;
    }
    *in_RAX = *in_RAX & uVar7;
    *(char *)in_RAX = (char)*in_RAX + (char)uVar7;
    puVar14 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar14 = in_RAX;
    out(*puVar15,uVar3);
    puVar15 = puVar15 + 1;
  } while( true );
}

