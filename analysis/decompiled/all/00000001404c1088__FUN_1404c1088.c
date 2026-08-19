// Function: FUN_1404c1088
// Addr: 1404c1088
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c10b3) overlaps instruction at (ram,0x0001404c10b2)
    */

void FUN_1404c1088(byte *param_1,char *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  char cVar9;
  uint *in_RAX;
  undefined6 uVar10;
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
  undefined1 auStack_8 [8];
  uint *puVar7;
  
  cVar13 = (char)((ulonglong)param_2 >> 8);
  bVar12 = (byte)param_2;
code_r0x0001404c1088:
  do {
    *in_RAX = *in_RAX & (uint)in_RAX;
    cVar5 = (char)in_RAX + (char)*in_RAX;
    puVar7 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
    pbVar11 = param_1 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    bVar2 = *pbVar11;
    cVar9 = (char)((ulonglong)in_RAX >> 8);
    *pbVar11 = *pbVar11 + cVar9;
    uVar10 = (undefined6)((ulonglong)in_RAX >> 0x10);
    if (!SCARRY1(bVar2,cVar9)) {
      *(char *)puVar7 = (char)*puVar7 - cVar5;
      cVar9 = cVar9 - (char)param_1;
      pcVar8 = (char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar5));
      cVar3 = *pcVar8;
      *pcVar8 = *pcVar8 - cVar5;
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
        if (!SBORROW1(cVar3,cVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        bVar12 = bVar12 + *pcVar8;
        *pcVar8 = *pcVar8 + cVar9;
        *unaff_RSI = *unaff_RSI >> 1;
        pbVar11[(longlong)pcVar8] = pbVar11[(longlong)pcVar8] + cVar5;
      }
code_r0x0001404c10b1:
      *pcVar8 = *pcVar8 + (byte)pcVar8;
      bVar6 = (byte)pcVar8 & bVar12;
      pbVar11 = (byte *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),bVar6);
      (param_1 + -1)[(longlong)pbVar11] = (param_1 + -1)[(longlong)pbVar11] + bVar6;
      *pbVar11 = *pbVar11 + bVar6;
      *pbVar11 = *pbVar11 + bVar6;
      *pbVar11 = *pbVar11 & bVar6;
      bVar2 = *pbVar11;
      *pbVar11 = *pbVar11 + bVar6;
      iRam00000001a86210d5 = (iRam00000001a86210d5 - (int)auStack_8) - (uint)CARRY1(bVar2,bVar6);
      piVar1 = (int *)(CONCAT44((int)((ulonglong)param_2 >> 0x20),
                                CONCAT22((short)((ulonglong)param_2 >> 0x10),CONCAT11(cVar13,bVar12)
                                        )) + -0x1ff40ff3);
      *piVar1 = *piVar1 + (int)auStack_8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar4 = *puVar7;
    *(char *)puVar7 = (char)*puVar7 - cVar5;
    if (-1 < (char)*puVar7) {
      *param_1 = *param_1 + unaff_R12B;
      *(char *)puVar7 = (char)*puVar7 + cVar5;
      *(char *)(puVar7 + -8) = (char)puVar7[-8] + cVar13;
      *(char *)puVar7 = (char)*puVar7 - cVar5;
      cVar9 = cVar9 - (char)param_1;
      pcVar8 = (char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar5));
      *pcVar8 = *pcVar8 - cVar5;
      if (*pcVar8 < '\0') {
        pbVar11 = param_1 + -1;
        if (pbVar11 == (byte *)0x0 || *pcVar8 != '\0') {
          pcVar8[0xf] = pcVar8[0xf] + unaff_BH;
          goto code_r0x0001404c109a;
        }
        *pcVar8 = *pcVar8 + cVar9;
        *pcVar8 = *pcVar8 + cVar5;
        *pbVar11 = *pbVar11 + unaff_BL;
        pcVar8 = (char *)(ulonglong)((uint)pcVar8 & 0x6816000b);
        goto code_r0x0001404c10b1;
      }
      *param_1 = *param_1 + unaff_R12B;
      *param_2 = *param_2 + cVar5;
      *pcVar8 = *pcVar8 + cVar5;
      in_RAX = (uint *)(ulonglong)((uint)pcVar8 | *(uint *)(pcVar8 + in_FS_OFFSET));
      goto code_r0x0001404c1088;
    }
    in_RAX = (uint *)((ulonglong)puVar7 & 0xffffffff);
    if (!SBORROW1((char)uVar4,cVar5)) {
      in_RAX = (uint *)(ulonglong)*puVar7;
    }
  } while( true );
}

