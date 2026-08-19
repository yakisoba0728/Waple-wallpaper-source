// Function: FUN_1404cf204
// Addr: 1404cf204
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cf274) overlaps instruction at (ram,0x0001404cf273)
    */

void FUN_1404cf204(char *param_1,longlong param_2,char param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  longlong in_RAX;
  byte *pbVar12;
  byte bVar13;
  char unaff_BL;
  undefined1 *puVar14;
  int unaff_EBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  char unaff_retaddr;
  undefined1 auStackX_10 [24];
  byte bVar3;
  uint *puVar11;
  
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  cVar7 = (char)in_RAX;
  *(char *)(in_RAX * 2) = *(char *)(in_RAX * 2) + cVar7;
  uVar9 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar7,cVar7)) + 0x4740000;
  puVar11 = (uint *)(ulonglong)uVar9;
  cVar7 = (char)(uVar9 >> 8);
  *(char *)(puVar11 + -3) = (char)puVar11[-3] + cVar7;
  bVar8 = (byte)uVar9;
  *(byte *)puVar11 = (char)*puVar11 + bVar8;
  *(char *)(puVar11 + -3) = (char)puVar11[-3] + cVar7;
  uVar4 = *puVar11;
  pbVar12 = (byte *)((longlong)puVar11 * 2);
  bVar2 = *pbVar12;
  bVar3 = *pbVar12;
  uRam21004cf110003bf4 = uVar9;
  *pbVar12 = bVar3 + bVar8 + (uVar9 < uVar4);
  unaff_RSI[(longlong)param_1] =
       unaff_RSI[(longlong)param_1] + bVar13 +
       (CARRY1(bVar2,bVar8) || CARRY1(bVar3 + bVar8,uVar9 < uVar4));
  *(byte *)((longlong)puVar11 + param_2) = *(byte *)((longlong)puVar11 + param_2) | bVar13;
  *(byte *)(puVar11 + -0x1a) = (char)puVar11[-0x1a] + bVar8;
  unaff_RSI[-0x68] = unaff_RSI[-0x68] + unaff_BL;
  *(char *)puVar11 = (char)*puVar11 + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)puVar11 = (char)*puVar11 + bVar8;
  *(byte *)(puVar11 + -0x1a) = (char)puVar11[-0x1a] + bVar8;
  unaff_RSI[-0x68] = unaff_RSI[-0x68] + unaff_retaddr;
  *(char *)puVar11 = (char)*puVar11 + unaff_retaddr;
  puVar14 = auStackX_10;
  *param_1 = *param_1 + param_3;
  uVar9 = uVar9 ^ 0x7835000a;
  uVar6 = CONCAT31((int3)(uVar9 >> 8),(byte)uVar9 + *(byte *)(ulonglong)uVar9);
  uVar4 = (uint)CARRY1((byte)uVar9,*(byte *)(ulonglong)uVar9);
  uVar9 = uVar6 + 0xf4fffc98;
  uVar10 = uVar9 - uVar4;
  if ((uVar6 < 0xb000368 || uVar9 < uVar4) ||
     (pbVar12 = (byte *)(param_1 + -1), pbVar12 != (byte *)0x0 && uVar10 != 0)) {
    bVar13 = bVar13 + *(char *)(ulonglong)uVar10;
    puVar14 = (undefined1 *)(ulonglong)(uint)((int)auStackX_10 + unaff_EBP);
  }
  else {
    if (SBORROW4(uVar6,0xb000368) == SBORROW4(uVar9,uVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar12 = *pbVar12 ^ (byte)uVar10;
    in((short)param_2);
  }
  do {
    in(CONCAT11(bVar13,(char)param_2));
    *unaff_RSI = 3;
    puVar1 = (undefined1 *)((longlong)unaff_RDI * 2 + 0x1115a000a);
    *puVar1 = *puVar1;
    bRam00000000a8cf0003 = bRam00000000a8cf0003 | 3;
  } while ((char)bRam00000000a8cf0003 < '\0');
  if (bRam00000000a8cf0003 != 0xfd) {
    uVar5 = in(CONCAT11(bVar13,(char)param_2));
    *unaff_RDI = uVar5;
    *(undefined1 **)(puVar14 + -8) = puVar14;
    cRam00000001464d08aa = cRam00000001464d08aa + -0x68;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

