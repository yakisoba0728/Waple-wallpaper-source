// Function: FUN_1404b5248
// Addr: 1404b5248
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5248(char *param_1,int *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  byte *in_RAX;
  undefined7 uVar10;
  ulonglong uVar9;
  byte bVar11;
  byte bVar12;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint *unaff_RSI;
  uint *unaff_RDI;
  bool bVar13;
  char *pcVar8;
  
  bVar12 = (byte)param_2;
  bVar11 = (byte)((ulonglong)param_1 >> 8);
  param_1[0x4b] = param_1[0x4b] ^ bVar12;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  bVar3 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar3;
  pbVar1 = (byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                   0x79);
  bVar5 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar11;
  bVar13 = bVar3 < *in_RAX || (byte)(bVar3 - *in_RAX) < CARRY1(bVar5,bVar11);
  uVar10 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar4 = (bVar3 - *in_RAX) - CARRY1(bVar5,bVar11);
  pcVar8 = (char *)CONCAT71(uVar10,cVar4);
  if (cVar4 == '\0') {
    cVar4 = ((-*pcVar8 - bVar13) + -0x51) - (*pcVar8 != '\0' || (byte)-*pcVar8 < bVar13);
    *param_4 = *param_4;
    *(char *)CONCAT71(uVar10,cVar4) = *(char *)CONCAT71(uVar10,cVar4) + cVar4;
    bVar5 = cVar4 + bVar12;
    if (-1 < (char)bVar5) {
      pbVar1 = (byte *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))
                                ) + 0x79);
      bVar3 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar11;
      bVar2 = bVar5 - *(byte *)CONCAT71(uVar10,bVar5);
      uVar7 = (int)CONCAT71(uVar10,bVar2 - CARRY1(bVar3,bVar11)) +
              *(int *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
              + (uint)(bVar5 < *(byte *)CONCAT71(uVar10,bVar5) || bVar2 < CARRY1(bVar3,bVar11));
      pcVar8 = (char *)(ulonglong)uVar7;
      *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
           *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
           bVar12;
      *param_2 = *param_2 + (int)param_2;
      pcVar8[(longlong)param_2 * 2] = pcVar8[(longlong)param_2 * 2] + (char)param_1;
      *pcVar8 = *pcVar8 + (char)uVar7;
      *unaff_RDI = *unaff_RDI & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *pcVar8 = *pcVar8 + cVar4;
  uVar9 = CONCAT71(uVar10,cVar4) ^ 0x11;
  pcVar8 = (char *)(uVar9 - 0x1dffe585);
  *pcVar8 = *pcVar8 + (char)((ulonglong)param_2 >> 8);
  if ((POPCOUNT(*pcVar8) & 1U) == 0) {
    param_1[(longlong)param_2 * 2 + 0xd01004b] =
         param_1[(longlong)param_2 * 2 + 0xd01004b] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (int)uVar9 + 0xf4050002;
  pcVar8 = (char *)(ulonglong)uVar7;
  *(char *)((longlong)unaff_RDI + 0x1a) = *(char *)((longlong)unaff_RDI + 0x1a) + unaff_BH;
  cVar6 = (char)uVar7;
  *(char *)((longlong)unaff_RSI + 0x10001a7f) = *(char *)((longlong)unaff_RSI + 0x10001a7f) + cVar6;
  *param_4 = *param_4 + -8;
  *pcVar8 = *pcVar8 + cVar6;
  cVar4 = *pcVar8;
  *pcVar8 = *pcVar8 + bVar12;
  if (*pcVar8 == '\0' || SCARRY1(cVar4,bVar12) != *pcVar8 < '\0') {
    *(char *)((longlong)unaff_RSI + 0x10001a7f) =
         *(char *)((longlong)unaff_RSI + 0x10001a7f) + cVar6;
    *param_4 = *param_4 + -0x10;
    *(char *)param_2 = (char)*param_2 + cVar6;
    *pcVar8 = *pcVar8 + cVar6;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_4 = *param_4 + -0x10;
  *unaff_RSI = *unaff_RSI & uVar7;
  *param_1 = *param_1 + (char)(uVar7 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

