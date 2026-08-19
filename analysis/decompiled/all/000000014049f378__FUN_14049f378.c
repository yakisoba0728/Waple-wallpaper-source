// Function: FUN_14049f378
// Addr: 14049f378
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049f3ec) overlaps instruction at (ram,0x00014049f3eb)
    */

void FUN_14049f378(longlong param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined3 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  char cVar10;
  uint *in_RAX;
  int *piVar9;
  char *pcVar11;
  undefined2 uVar12;
  char unaff_BL;
  byte bVar13;
  undefined8 *puVar14;
  undefined1 *unaff_RSI;
  undefined1 *puVar15;
  undefined4 *puVar16;
  char in_SF;
  char in_OF;
  
  uVar12 = SUB82(param_2,0);
  do {
    uVar8 = (uint)in_RAX;
    if (in_OF == in_SF) {
      bVar6 = *param_4;
      bVar13 = (byte)register0x00000020;
      *param_4 = *param_4 + bVar13;
      uVar3 = uVar8 - *(uint *)((longlong)in_RAX * 2);
      uVar7 = uVar3 - CARRY1(bVar6,bVar13);
      puVar15 = (undefined1 *)
                (ulonglong)
                (((int)unaff_RSI - *(int *)(param_1 * 2)) -
                (uint)(uVar8 < *(uint *)((longlong)in_RAX * 2) || uVar3 < CARRY1(bVar6,bVar13)));
      cRam000000012049f9fd = cRam000000012049f9fd + (char)uVar7;
      out(*puVar15,uVar12);
      *(int *)(ulonglong)uVar7 = *(int *)(ulonglong)uVar7 + uVar7;
      piVar9 = (int *)((ulonglong)uVar7 | 0x6f);
      *piVar9 = *piVar9 + (int)piVar9;
      *param_4 = *param_4 + bVar13;
      cVar5 = (char)piVar9;
      *param_2 = *param_2 + cVar5;
      *(char *)piVar9 = (char)*piVar9 + cVar5;
      puVar16 = (undefined4 *)(puVar15 + 1);
      if ((char)*piVar9 == '\0') {
        puVar16 = (undefined4 *)(puVar15 + 5);
        out(*(undefined4 *)(puVar15 + 1),uVar12);
      }
      cVar10 = (char)(uVar7 >> 8);
      uVar4 = (undefined3)(uVar7 >> 8);
      cVar5 = cVar5 + cVar10;
      uVar8 = CONCAT31(uVar4,cVar5);
      out(*(undefined1 *)puVar16,uVar12);
      *(int *)(ulonglong)uVar8 = *(int *)(ulonglong)uVar8 + uVar8;
      piVar9 = (int *)((ulonglong)CONCAT31(uVar4,cVar5) | 0x6f);
      *piVar9 = *piVar9 + (int)piVar9;
      *param_4 = *param_4 + (byte)piVar9;
      bVar6 = (byte)piVar9 | bRam00000001468bfdaf;
      uVar8 = CONCAT31(uVar4,bVar6);
      pcVar11 = (char *)(param_1 + -1);
      if (pcVar11 == (char *)0x0 || bVar6 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 ^ bVar6;
      *pcVar11 = *pcVar11 + cVar10;
      uVar8 = uVar8 + 0x74050002;
      uVar4 = (undefined3)(uVar8 >> 8);
      bVar6 = (byte)uVar8 | *(byte *)(ulonglong)uVar8;
      pbVar2 = (byte *)(pcVar11 + CONCAT31(uVar4,bVar6));
      *pbVar2 = *pbVar2 ^ 0xcf;
      if (*pbVar2 == 0) {
        *param_4 = *param_4 + bVar13;
      }
      cVar5 = bVar6 + unaff_BL;
      pcVar11 = (char *)(ulonglong)CONCAT31(uVar4,cVar5);
      *param_4 = *param_4 + bVar13;
      *pcVar11 = *pcVar11 + cVar5;
      pcVar11 = pcVar11 + -0x30fffe8c;
      *pcVar11 = *pcVar11 + cVar5;
      if (*pcVar11 == '\0') {
        *param_4 = *param_4 + bVar13;
      }
      cVar5 = cVar5 + unaff_BL;
      in_RAX = (uint *)(ulonglong)CONCAT31(uVar4,cVar5);
      *param_4 = *param_4 + bVar13;
      *param_2 = *param_2 + cVar5;
      *(char *)in_RAX = (char)*in_RAX + cVar5;
      if ((char)*in_RAX != '\0') {
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
      }
      *param_4 = *param_4 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *in_RAX = *in_RAX & uVar8;
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    puVar14 = (undefined8 *)((longlong)register0x00000020 + -8);
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *puVar14 = in_RAX;
    out(*unaff_RSI,uVar12);
    uVar3 = *in_RAX;
    *in_RAX = *in_RAX + uVar8;
    if (!CARRY4(uVar3,uVar8)) {
      *(byte *)(param_1 + (longlong)in_RAX) = *(byte *)(param_1 + (longlong)in_RAX) ^ 0xcf;
      goto code_r0x00014049f3e3;
    }
    in_OF = SCARRY4(*in_RAX,uVar8);
    *in_RAX = *in_RAX + uVar8;
    in_SF = (int)*in_RAX < 0;
    unaff_RSI = unaff_RSI + 1;
  } while( true );
}

