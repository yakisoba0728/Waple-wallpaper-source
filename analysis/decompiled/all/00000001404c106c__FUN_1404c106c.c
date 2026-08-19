// Function: FUN_1404c106c
// Addr: 1404c106c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c10b3) overlaps instruction at (ram,0x0001404c10b2)
    */

void FUN_1404c106c(byte *param_1,char *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  char cVar9;
  char *in_RAX;
  uint *puVar6;
  uint *puVar7;
  char cVar10;
  char *pcVar8;
  byte *pbVar11;
  byte bVar12;
  char cVar13;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  char in_R11B;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  bool in_OF;
  bool bVar14;
  undefined1 auStack_8 [8];
  
  cVar13 = (char)((ulonglong)param_2 >> 8);
  bVar12 = (byte)param_2;
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX - (char)in_RAX;
  cVar10 = (char)param_1;
  puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) - cVar10,(char)in_RAX));
  do {
    uVar3 = *puVar7;
    cVar4 = (char)puVar7;
    *(char *)puVar7 = (char)*puVar7 - cVar4;
    if ((char)*puVar7 < '\0') {
      puVar6 = (uint *)((ulonglong)puVar7 & 0xffffffff);
      if (!SBORROW1((char)uVar3,cVar4)) {
        puVar6 = (uint *)(ulonglong)*puVar7;
      }
      *puVar6 = *puVar6 & (uint)puVar6;
      puVar7 = (uint *)CONCAT71((int7)((ulonglong)puVar6 >> 8),(char)puVar6 + (char)*puVar6);
      pbVar11 = param_1 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
      cVar4 = (char)((ulonglong)puVar6 >> 8);
      bVar14 = SCARRY1(*pbVar11,cVar4);
      *pbVar11 = *pbVar11 + cVar4;
    }
    else {
      *param_1 = *param_1 + unaff_R12B;
      *(char *)puVar7 = (char)*puVar7 + cVar4;
      *(char *)(puVar7 + -8) = (char)puVar7[-8] + cVar13;
      *(char *)puVar7 = (char)*puVar7 - cVar4;
      cVar9 = (char)((ulonglong)puVar7 >> 8) - cVar10;
      pcVar8 = (char *)CONCAT62((int6)((ulonglong)puVar7 >> 0x10),CONCAT11(cVar9,cVar4));
      *pcVar8 = *pcVar8 - cVar4;
      if (*pcVar8 < '\0') {
        pbVar11 = param_1 + -1;
        if (pbVar11 == (byte *)0x0 || *pcVar8 != '\0') {
          pcVar8[0xf] = pcVar8[0xf] + unaff_BH;
          goto code_r0x0001404c109a;
        }
        *pcVar8 = *pcVar8 + cVar9;
        *pcVar8 = *pcVar8 + cVar4;
        *pbVar11 = *pbVar11 + unaff_BL;
        pcVar8 = (char *)(ulonglong)((uint)pcVar8 & 0x6816000b);
        goto code_r0x0001404c10b1;
      }
      *param_1 = *param_1 + unaff_R12B;
      *param_2 = *param_2 + cVar4;
      *pcVar8 = *pcVar8 + cVar4;
      bVar14 = false;
      puVar7 = (uint *)(ulonglong)((uint)pcVar8 | *(uint *)(pcVar8 + in_FS_OFFSET));
    }
  } while (bVar14);
  cVar9 = (char)puVar7;
  *(char *)puVar7 = (char)*puVar7 - cVar9;
  cVar10 = (char)((ulonglong)puVar7 >> 8) - cVar10;
  pcVar8 = (char *)CONCAT62((int6)((ulonglong)puVar7 >> 0x10),CONCAT11(cVar10,cVar9));
  cVar4 = *pcVar8;
  *pcVar8 = *pcVar8 - cVar9;
  pbVar11 = param_1;
  if (-1 < *pcVar8) {
code_r0x0001404c109a:
    *pbVar11 = *pbVar11 + in_R11B;
    *pbVar11 = *pbVar11 ^ (byte)pbVar11;
    *unaff_RSI = *unaff_RSI + bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar11 = param_1 + -1;
  if (pbVar11 == (byte *)0x0 || *pcVar8 == '\0') {
    if (!SBORROW1(cVar4,cVar9)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    bVar12 = bVar12 + *pcVar8;
    *pcVar8 = *pcVar8 + cVar10;
    *unaff_RSI = *unaff_RSI >> 1;
    pbVar11[(longlong)pcVar8] = pbVar11[(longlong)pcVar8] + cVar9;
  }
code_r0x0001404c10b1:
  *pcVar8 = *pcVar8 + (byte)pcVar8;
  bVar5 = (byte)pcVar8 & bVar12;
  pbVar11 = (byte *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),bVar5);
  (param_1 + -1)[(longlong)pbVar11] = (param_1 + -1)[(longlong)pbVar11] + bVar5;
  *pbVar11 = *pbVar11 + bVar5;
  *pbVar11 = *pbVar11 + bVar5;
  *pbVar11 = *pbVar11 & bVar5;
  bVar2 = *pbVar11;
  *pbVar11 = *pbVar11 + bVar5;
  iRam00000001a86210d5 = (iRam00000001a86210d5 - (int)auStack_8) - (uint)CARRY1(bVar2,bVar5);
  piVar1 = (int *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                            CONCAT22((short)((ulonglong)param_2 >> 0x10),CONCAT11(cVar13,bVar12))) +
                  -0x1ff40ff3);
  *piVar1 = *piVar1 + (int)auStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

