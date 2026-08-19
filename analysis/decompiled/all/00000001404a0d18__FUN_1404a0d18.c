// Function: FUN_1404a0d18
// Addr: 1404a0d18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0d18(char *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char cVar7;
  uint *in_RAX;
  int *piVar5;
  char *pcVar6;
  char cVar8;
  char cVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  undefined8 unaff_retaddr;
  char acStackX_8 [32];
  byte *pbVar4;
  
  uVar11 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar8 = (char)param_1;
  *(uint *)(unaff_RSI + (longlong)in_RAX) = *(uint *)(unaff_RSI + (longlong)in_RAX) & (uint)param_1;
  acStackX_8[param_2 * 8 + -8] = acStackX_8[param_2 * 8 + -8] + cVar8;
  *in_RAX = *in_RAX | (uint)in_RAX;
  bVar1 = (byte)in_RAX;
  pbVar4 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar1,bVar1));
  piVar5 = (int *)CONCAT71((int7)((ulonglong)pbVar4 >> 8),(bVar1 | *pbVar4) + 100);
  iVar2 = (int)piVar5;
  out(0x8e,iVar2);
  uVar3 = iVar2 + *piVar5;
  pcVar6 = (char *)(ulonglong)uVar3;
  if (uVar3 == 0 || SCARRY4(iVar2,*piVar5) != (int)uVar3 < 0) {
    *param_1 = *param_1;
    cVar9 = (char)uVar3;
    *pcVar6 = *pcVar6 + cVar9;
    cVar7 = (char)(uVar3 >> 8);
    *unaff_RDI = *unaff_RDI + cVar8;
    *(undefined8 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH + cVar7,unaff_BL)) = unaff_retaddr;
    acStackX_8[(longlong)param_1] = acStackX_8[(longlong)param_1] + (char)((ulonglong)param_2 >> 8);
    *param_1 = *param_1 + (char)acStackX_8;
    *pcVar6 = *pcVar6 + cVar9;
    cVar9 = (char)((ulonglong)param_1 >> 8) + cVar9;
    *pcVar6 = *pcVar6 + unaff_BL;
    pcVar6 = (char *)((ulonglong)uVar3 | 0x4a);
    *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9,cVar8))) =
         *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9,cVar8))) + cVar7;
    *pcVar6 = *pcVar6 + (char)pcVar6;
    pcVar6[-0x3afffc72] = pcVar6[-0x3afffc72] + cVar7;
    *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar7;
    *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9,cVar8))) =
         *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9,cVar8))) + cVar7;
    *unaff_RSI = *unaff_RSI + cVar8;
    *pcVar6 = *pcVar6 + (char)pcVar6;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

